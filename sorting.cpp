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
            for(int i = 0; i < base.size()-1; i++) {
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
                std::cout << "\n";
            }
            std::cout << "\nSort completed. Time = O(n^2) and Space = O(1)" << std::endl;
            std::cout << std::endl;
        }
        static void insertionSort(std::vector<int> base){
            int place = 0;
            for(int i = 1; i < base.size(); i++) {
                int save = base[i]; // save insert value
                base[i] = base[i-1]; // overwrite insert value
                place = i-1;
                while(base[place] > save && place >= 0){ 
                    std::cout << "Have to shift forward: ";
                    base[place+1] = base[place];
                    Utility::outputVector(base);
                    place--;
                }
                std::cout << "Found place to insert: ";
                base[place+1] = save;
                Utility::outputVector(base);
                std::cout << "\n";
            }
            std::cout << "\nSort completed. Time = O(n^2) and Space = O(1)" << std::endl;
            std::cout << std::endl;
        }
        static void mergeSort(std::vector<int> base){}
        static void quickSort(std::vector<int> base){}
};