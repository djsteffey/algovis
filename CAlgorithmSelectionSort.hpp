#ifndef algovis_CAlgorithmSelectionSort_hpp
#define algovis_CAlgorithmSelectionSort_hpp

#include "CAlgorithm.hpp"
#include <thread>

namespace algovis{
    class CAlgorithmSelectionSort : public CAlgorithm{
        public:
            CAlgorithmSelectionSort();
            ~CAlgorithmSelectionSort();

        protected:
            void thread_function();
            
        private:
    };
}
#endif