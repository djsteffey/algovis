#ifndef algovis_CAlgorithmBubbleSort_hpp
#define algovis_CAlgorithmBubbleSort_hpp

#include "CAlgorithm.hpp"

namespace algovis{
    class CAlgorithmBubbleSort : public CAlgorithm{
        public:
            CAlgorithmBubbleSort();
            ~CAlgorithmBubbleSort();

        protected:
            void thread_function();
            
        private:
    };
}
#endif