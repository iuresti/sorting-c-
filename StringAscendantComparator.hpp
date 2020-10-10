#include <iostream>

using namespace std;

class StringAscendantComparator : public Comparator
{
public:
    template <typename T>
    int compare(T left, T right)
    {
        string stringleft = (string)left;
        string stringright = (string)right;
        return stringright.compare(stringleft);
    }
};