#include <iostream>
#include <vector>

class Sorting {
    public:
        static void bubbleSort(std::vector<int> base){
            std::cout << "\nStarting bubble sort:" << std::endl;
            for(int i = 0; i < base.size()-2; i++) {
                for(int j = base.size()-1; j > 0; j--) {
                    if(base[j] < base[j-1]) {
                        std::swap(base[j], base[j-1]);
                        std::cout << "\n" << base[j] << " has been bubble swapped with " << base[j-1] << std::endl;
                        Utility::outputVector(base);
                    }
                }
            }
            std::cout << "\nSort completed. Time = O(n^2) and Space = O(1)" << std::endl;
            std::cout << std::endl;
        }
        static void selectionSort(std::vector<int> base){}
        static void insertionSort(std::vector<int> base){}
        static void mergeSort(std::vector<int> base){}
};