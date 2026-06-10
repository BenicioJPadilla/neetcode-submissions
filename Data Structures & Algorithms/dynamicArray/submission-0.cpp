#include<memory>
#include<stdexcept>
#include<ranges>

class DynamicArray {
public:
std::shared_ptr<int[]> data;
int capacity;
int size;

    DynamicArray(int capacity) {
        if (capacity<=0){
            throw std::invalid_argument("Capacity must be greater than 0");
        }

        this->capacity = capacity;
        this->size = 0;
        this->data = std::shared_ptr<int[]>(new int[capacity]);

    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if (size>=capacity){
            resize();
        }
        data[size] = n;
        size++;
    }

    int popback() {
        if(capacity == 0){
            throw std::invalid_argument("empty array cant pop");
        }
        
        size--;
        return data[size];
    }

    void resize() {
        int newCapacity = capacity*2;

        std::shared_ptr<int[]> newData(new int[newCapacity]);
        for(int i = 0; i < size; i++){
            newData[i] = data[i];
        }

        data = newData;
        capacity = newCapacity;


    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
