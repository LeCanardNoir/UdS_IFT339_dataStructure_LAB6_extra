#include "modules.h"
#include <cassert>

long int calculeNbCombinaisons(int i_nbTotal, int i_nbChoice){
    assert(i_nbTotal > 0);
    assert(i_nbChoice > 0);
    assert(i_nbTotal >= i_nbChoice);

    int nFac = factorielle(i_nbTotal);
    int kFac = factorielle(i_nbChoice);
    int nkFac = factorielle(i_nbTotal - i_nbChoice);

    return (nFac/(kFac*nkFac))*2;
}

long int factorielle(int n){    
    assert(n >= 0);
    if(n == 0) return 1;
    for (int i = n; i > 1; i--) n = n*(i-1); 
    return n;    
}