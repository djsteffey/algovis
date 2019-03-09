#ifndef algovis_CAlgorithmInsertionSort_hpp
#define algovis_CAlgorithmInsertionSort_hpp

#include "CAlgorithm.hpp"

namespace algovis{
    class CAlgorithmInsertionSort : public CAlgorithm{
        public:
            CAlgorithmInsertionSort();
            ~CAlgorithmInsertionSort();

        protected:
            void thread_function();
            
        private:
    };
}
#endif