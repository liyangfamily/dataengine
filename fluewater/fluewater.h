#ifndef FLUEWATER_H
#define FLUEWATER_H

#include "dataengineinterface.h"

class FlueWater : public QObject, public DataEngineInterface
{
    Q_OBJECT
    Q_INTERFACES(DataEngineInterface)
    Q_PLUGIN_METADATA(IID "VOFA+.Plugin.FlueWater")

public:
    explicit FlueWater();
    ~FlueWater();
    void ProcessingDatas(char *data, int count);
private:
    uint32_t image_count_mutation_count_ = 0;
};
#endif // FLUEWATER_H
