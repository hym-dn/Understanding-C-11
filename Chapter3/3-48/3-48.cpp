﻿#include <iostream>
using namespace std;

namespace Jim {
    namespace Basic {
        struct Knife{Knife(){cout<<"Knife in Basic."<<endl;}};
        class CorkScrew{};
    }
    namespace Toolkit{
        template<typename T> class SwissArmyKnife(){};
    }
    namespace Other {
        struct Knife {Knife(){cout<<"Knife in Other."<<endl;}};
        Knife c;
        Basic::Knife k;       
    }
    using namespace Basic;
    using namespace Toolkit;
}

namespace Jim {
    template<> class SwissArmyKnife<Knife>{};
}

using namespace Jim;
int main(){
    SwissArmyKnife<Basic::Knife> sknife;
}