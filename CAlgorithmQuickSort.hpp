#ifndef algovis_CAlgorithmQuickSort_hpp
#define algovis_CAlgorithmQuickSort_hpp

#include "CAlgorithm.hpp"
#include <thread>

namespace algovis{
    class CAlgorithmQuickSort : public CAlgorithm{
        public:
            CAlgorithmQuickSort();
            ~CAlgorithmQuickSort();

        protected:
            void thread_function();
            
        private:
            int partition(int array[], int low, int high);
            void qsort(int array[], int low, int high);
    };
}
#endif