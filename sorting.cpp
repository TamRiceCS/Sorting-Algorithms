#include <iostream>
#include <vector>

class Sorting {
    public:
        // All algorithms must be pass by value and not pass by reference. DO NOT OVERWRITE ORIGINAL!
        static void bubbleSort(std::vector<int> base){
            std::cout << "\nStarting bubble sort:" << std::endl;
            Utility::outputVector(base);
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
        static void selectionSort(std::vector<int> base){
            int min = base.size()-1;
            for(int i = 0; i < base.size()-2; i++) {
                for(int j = i; j < base.size()-1; j++) {
                    if(base[j] < base[min]) {
                        min = j;
                        std::cout << "We found a new min in the unsorted area it is: " << base[min] << std::endl;
                    }
                }
                std::cout << "Place local min into end of sorted section..." << std::endl;
                std::swap(base[min], base[i]);
                min = base.size()-1;
                Utility::outputVector(base);
            }
        }
        static void insertionSort(std::vector<int> base){}
        static void mergeSort(std::vector<int> base){}
};