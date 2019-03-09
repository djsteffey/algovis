#include "CAlgorithmBubbleSort.hpp"
#include "CLine.hpp"

namespace algovis{
    CAlgorithmBubbleSort::CAlgorithmBubbleSort(){

    }

    CAlgorithmBubbleSort::~CAlgorithmBubbleSort(){

    }

    void CAlgorithmBubbleSort::thread_function(){
        for (int i = 0; i < 256 - 1; ++i){
            for (int j = 0; j < 256 - i - 1; ++j){
                while (this->m_ready_next_step == false);
                this->m_ready_next_step = false;
                
                if (this->m_array[j] > this->m_array[j + 1]){
                    // swap
                    int temp = this->m_array[j];
                    this->m_array[j] = this->m_array[j + 1];
                    this->m_array[j + 1] = temp;
                }
            }
        }
        this->m_complete = true;
    }
}
