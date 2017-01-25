#include <string>

#ifndef FORMATDATA_H
#define FORMATDATA_H


class FormatData
{
    public:
        virtual std::string* formatData()=0;
        virtual void loadData()=0;
};

#endif // FORMATDATA_H
