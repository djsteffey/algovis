#include "CAlgorithmSelectionSort.hpp"
#include "CLine.hpp"

namespace algovis{
    CAlgorithmSelectionSort::CAlgorithmSelectionSort(){

    }

    CAlgorithmSelectionSort::~CAlgorithmSelectionSort(){

    }

    void CAlgorithmSelectionSort::thread_function(){
        // selection sort algo
        for (int i = 0; i < 256 - 1; ++i){
            int min_index = i;
            for (int j = i + 1; j < 256; ++j){
                while (this->m_ready_next_step == false);
                this->m_ready_next_step = false;
                if (this->m_array[j] < this->m_array[min_index]){
                    min_index = j;
                }
            }

            // swap
            int temp = this->m_array[min_index];
            this->m_array[min_index] = this->m_array[i];
            this->m_array[i] = temp;
        }
        this->m_complete = true;
    }
}