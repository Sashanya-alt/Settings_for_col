#include "pch.h"
#include "AData.h"

struct _AData2 AData2;

void InitAData2(std::vector<string> names)
{
    //AData2.Name[0] = "Column";
    //AData2.Name[1] = "Column";
    //AData2.Name[2] = "Column";
    //AData2.Visible[0] = true;
    //AData2.Visible[1] = true;
    //AData2.Visible[2] = true;
    //AData2.sub[0] = 1;
    //AData2.sub[1] = 2;
    //AData2.sub[2] = 3;

    AData2.Name = names;
    for (int i = 0; i < names.size(); i++) 
    {
        AData2.sub.push_back(i + 1);
        AData2.Visible.push_back(1);
        AData2.Name.push_back(names[i]);
       // AData2.Name2.push_back(names[i]);
    }
}