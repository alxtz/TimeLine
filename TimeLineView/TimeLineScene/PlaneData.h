#ifndef PLANEDATA_H
#define PLANEDATA_H


#include <string>

using namespace std;

class PlaneData
{
    public:
        PlaneData();

        string planeName;
        int order;
        int landTime;
        int useTime;
        string apronName;
        int cost;
};


#endif // PLANEDATA_H
