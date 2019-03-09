#include "CAlgorithmInsertionSort.hpp"
#include "CLine.hpp"

namespace algovis{
    CAlgorithmInsertionSort::CAlgorithmInsertionSort(){

    }

    CAlgorithmInsertionSort::~CAlgorithmInsertionSort(){

    }

    void CAlgorithmInsertionSort::thread_function(){
        for (int i = 0; i < 256; ++i){
            int key = this->m_array[i];
            int j = i - 1;
            while (j >= 0 && this->m_array[j] > key){
                while (this->m_ready_next_step == false);
                this->m_ready_next_step = false;

                this->m_array[j + 1] = this->m_array[j];
                j = j - 1;
            }
            this->m_array[j + 1] = key;
        }
        this->m_complete = true;
    }
}
