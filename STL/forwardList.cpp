#include<iostream>
#include<forward_list> 
using namespace std;
 
int main()
{
    // Initializing forward list
    forward_list<int> flist = {10, 20, 30, 40, 50};

    // Declaring a forward list iterator
    forward_list<int>::iterator ptr;
 
    // Inserting value using push_front()
    // Inserts 60 at front
    flist.push_front(60);
     
    // Displaying the forward list
    cout << "The forward list after push_front operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
     
    // Inserting value using emplace_front()
    // Inserts 70 at front
    flist.emplace_front(70);
     
    // Displaying the forward list
    cout << "The forward list after emplace_front operation : ";
    for (int&c : flist) 
       cout << c << " ";
    cout << endl;
     
    // Deleting first value using pop_front()
    // Pops 70
    flist.pop_front();
     
    // Displaying the forward list
    cout << "The forward list after pop_front operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
 

     // Inserting value using insert_after()
    // starts insertion from second position
    ptr =  flist.insert_after(flist.begin(), {1, 2, 3});
     
    // Displaying the forward list
    cout << "The forward list after insert_after operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
     
    // Inserting value using emplace_after()
    // inserts 2 after ptr
    ptr = flist.emplace_after(ptr,2);
     
    // Displaying the forward list
    cout << "The forward list after emplace_after operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
     
    // Deleting value using erase.after Deleted 2
    // after ptr
    ptr = flist.erase_after(ptr);
     
    // Displaying the forward list
    cout << "The forward list after erase_after operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
    // Removing element using remove()
    // Removes all occurrences of 40
    flist.remove(40);
     
    // Displaying the forward list
    cout << "The forward list after remove operation : ";
    for (int&c : flist) 
        cout << c << " ";
    cout << endl;
     
    // Removing according to condition. Removes 
    // elements greater than 20. Removes 25 and 30
    flist.remove_if([](int x){ return x>20;});
     
    // Displaying the forward list
    cout << "The forward list after remove_if operation : ";
    for (int&c : flist) 
       cout << c << " ";
    cout << endl;
    return 0;
}