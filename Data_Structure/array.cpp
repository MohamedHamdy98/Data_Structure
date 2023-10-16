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
    void get_size()
    {
        cout<<"\n"<<"Size of array: " << size_array << "\n";
    }
    void get_length()
    {
        cout<<"Length of array: " << length;
    }

};

int main()
{
    Array array(6);
    array.Fill();
    array.Display();
    array.get_size();
    array.get_length();
    return 0;
}
