//inheritance, friends, and DMA

#include <iostream>
#include "dma_13_14.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA ballon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);

    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << ballon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;

    lacksDMA balloon2(ballon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    return 0;
}