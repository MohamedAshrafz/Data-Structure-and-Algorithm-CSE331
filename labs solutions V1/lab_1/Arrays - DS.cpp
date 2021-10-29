//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename item>
//class list {
//
//private:
//
//    item* elements;
//    int maxsize;
//    int size;
//
//    void resize(int newsize)
//    {
//        this->maxsize = newsize;
//        item* copy = new item[newsize];
//        for (int i = 0; i < size; i++)
//            copy[i] = elements[i];
//
//        delete[] elements;
//        this->elements = copy;
//    }
//
//public:
//
//    list(item maxsize)
//    {
//        this->maxsize = maxsize;
//        elements = new item[maxsize];
//        size = 0;
//    }
//
//    item getsize()
//    {
//        return this->size;
//    }
//
//    void add(item element)
//    {
//        if (size > maxsize)
//            resize(maxsize * 2);
//        elements[size] = element;
//        size++;
//    }
//
//    void insert(item  index, item element)
//    {
//        if (index >= size)
//        {
//            elements[index] = element;
//        }
//    }
//
//
//};
//
//
//int main()
//{
//    cout << "hello world!\n";
//    list<int> integers(5);
//}