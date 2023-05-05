#ifndef LAB_6_ALGORITHMS_H
#define LAB_6_ALGORITHMS_H

namespace myAlg {

    template<typename I, typename P>
    bool any_of(const I beginIter, const I endIter, const P &pred){
        auto i = beginIter;
        while (i != endIter){
            if (pred(*i)){
                return true;
            }
            i++;
        }
        return false;
    }

    template<typename I, typename P>
    bool one_of(const I beginIter, const I endIter, const P &pred){
        auto i = beginIter;
        int count = 0;
        while (i != endIter){
            if (pred(*i)){
                count++;
            }
            i++;
        }
        return count == 1;
    }

    template<typename I, typename P>
    P find_not(const I beginIter, const I endIter, const P &element){
        auto i = beginIter;
        while (i != endIter){
            if ((*i) != element){
                return *i;
            }
            i++;
        }
    }
}

#endif //LAB_6_ALGORITHMS_H
