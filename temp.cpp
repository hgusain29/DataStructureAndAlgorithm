// C++ program to demonstrate functionality 
// of unordered_map 

#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of int type 
    unordered_map<string, int> umap; 

    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 

    // Searching for the key "Practice"
    if(umap.find("Practice")!=umap.end())
        cout<<"The key Practice Found!\n";
    else
        cout<<"The key Practice Not Found!\n";
    
    // Accessing key value pair returned by find()
    auto it = umap.find("Practice");
    if(it!=umap.end())
        cout<<"Key is: "<<it->first<<", "
            <<"Value is: "<<it->second;
} 

