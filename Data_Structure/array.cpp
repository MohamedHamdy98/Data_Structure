#include <iostream>
using namespace std;


class Array
{
    private:
        int size_array;
        int length;
        int* ptr_array;
    public:
        Array(int size_arr)
        {
            size_array = size_arr;
            length = 0;
            ptr_array = new int[size_arr];
        }
    void Fill()
    {
        int number_of_items;
        cout << "how many items you want to fill? \n";
        cin >> number_of_items;
        if (number_of_items > size_array)
        {
            cout << "You cannot exceed the array size \n";
            return;
        }  
        else
        {
            for (int i = 0; i < number_of_items; i++)
            {
                cout << "Enter item no " << i << ":";
                cin >> ptr_array[i];
                length++;
            }
        }      
    }
    void Display()
    {
        cout << "Display array content: \n";
        for (int i = 0; i < length; i++)
        {
            cout << ptr_array[i] <<"\t";
        }
        
    }
    int get_size()
    {
        // cout<<"\n"<<"Size of array: " << size_array << "\n";
        return size_array;
    }
    int get_length()
    {
        // cout<<"Length of array: " << length << "\n";
        return length;
    }

void Search(int key)
{
    int index = -1;
    for (int i = 0; i < length; i++)
    {
        if (ptr_array[i] == key)
        {
            index = i;
            cout << "The key at position : " << index;
            break;
        }
    }
}
void Append(int newItem)
{
    // ptr_array[newItem]
    if (length < size_array)
    {
        ptr_array[length] = newItem;
        length++;
    }
    else { cout << "Array is full";}
}
void Insert(int index, int newItem)
{
    for (int i = length; i > index; i--)
    {
        ptr_array[i] = ptr_array[i - 1];
    }
    ptr_array[index] = ptr_array[newItem];
    length++;
}
void Delete(int index)
{
    for (int i = index; i < length-1; i++)
    {
        ptr_array[i] = ptr_array[i + 1];
    }
    length--;
}
void Enlarge(int newSize)
{
    if (size_array > newSize)
    {
        cout << "New size must be larger than current size \n";
    }
    else
    {
        size_array = newSize;
        int* ptr_old = ptr_array;
        ptr_array = new int[newSize];
        for (int i = 0; i < length; i++)
        {
            ptr_array[i] = ptr_old[i];
        }
        delete[]ptr_old;
    }
}
void Merge(Array other)
{
    int newSize =  size_array + other.get_size();
    size_array = newSize;
    int *ptr_old = ptr_array;
    ptr_array = new int[newSize];
    for (int i = 0; i < length; i++)
    {
        ptr_array[i] = ptr_old[i];
    }
    delete[]ptr_old;
    int j = i;
    for (int i = 0; i < other.get_length(); i++)
    {
        ptr_array[j++] = other.ptr_array[i];
        length++;
    }
}
};

int main()
{
    // int size;
    // cout << "Enter the size of array: ";
    // cin >> size;
    // Array array(size);
    // array.Fill();
    // array.Display();
    // array.get_size();
    // array.get_length();
    // int key;
    // cout << "Enter your key: ";
    // cin >> key;
    // array.Search(key);
    // int newValue;
    // cout << "Enter your new item: ";
    // cin >> newValue;
    // array.Append(newValue);
    // array.Display();
    // array.Insert(2,70);
    // array.Display();
    // array.Delete(2);
    // array.Display();
    // array.Enlarge(6);
    // array.get_size();
    // array.Fill();
    // array.Display();
    return 0;
}
