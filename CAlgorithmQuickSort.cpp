#include "CAlgorithmQuickSort.hpp"
#include "CLine.hpp"

namespace algovis{
    CAlgorithmQuickSort::CAlgorithmQuickSort(){

    }

    CAlgorithmQuickSort::~CAlgorithmQuickSort(){

    }

    void CAlgorithmQuickSort::thread_function(){
        // selection sort algo
        this->qsort(this->m_array, 0, 256 - 1);
        this->m_complete = true;
    }

    int CAlgorithmQuickSort::partition(int array[], int low, int high){
        int pivot = this->m_array[high];
        int i = low - 1;
        int temp;

        for (int j = low; j <= high - 1; ++j){
            while (this->m_ready_next_step == false);
            this->m_ready_next_step = false;

            if (array[j] <= pivot){
                ++i;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        return i +1;
    }

    void CAlgorithmQuickSort::qsort(int array[], int low, int high){
        if (low < high){
            int pi = this->partition(this->m_array, low, high);
            this->qsort(this->m_array, low, pi - 1);
            this->qsort(this->m_array, pi + 1, high);
        }
    }
}