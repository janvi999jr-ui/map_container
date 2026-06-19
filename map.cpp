#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> myMap; // Create a map that associates strings (names) with integers (ages)
    // Insert some key-value pairs into the map
    myMap["Alice"] = 30;
    myMap["Bob"] = 25;
    myMap["Charlie"] = 35;
    myMap["David"] = 28;
    myMap["Eve"] = 22;

    myMap.insert({{"Frank", 40}, {"Grace", 38}}); // Insert a key-value pair using the insert function

    map<string, int>::iterator it; // Create an iterator to traverse the map
    cout << "Name\tAge" << endl;   // Print the header for the output
    // Iterate through the map and print each key-value pair (name and age) in a tabular format
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        // cout << it->first << "\t" << it->second << endl; // Print the name (key) and age (value) separated by a tab
        //  OR
        cout << (*it).first << "\t" << (*it).second << endl; // Print the name (key) and age (value) separated by a tab
    }
    cout << "Size of the map : " << myMap.size() << endl;                                                     // Print the size of the map (number of key-value pairs)
    cout << "Is the map empty? : " << (myMap.empty() ? "Yes" : "No") << endl;                                 // Check if the map is empty and print the result
    cout << "Count of 'Alice' in the map : " << myMap.count("Alice") << endl;                                 // Count the number of occurrences of the key "Alice" in the map and print the result
    cout << "Max size of the map : " << myMap.max_size() << endl;                                             // Print the maximum number of elements that the map can hold
    cout << "Find 'Bob' in the map : " << (myMap.find("Bob") != myMap.end() ? "Found" : "Not Found") << endl; // Check if the key "Bob" exists in the map and print the result
    myMap.erase("Charlie");                                                                                   // Remove the key-value pair with the key "Charlie" from the map
    cout << "After erasing 'Charlie' from the map : " << endl;                                                // Print a message indicating that "Charlie" has been removed from the map
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << (*it).first << "\t" << (*it).second << endl; // Print the remaining key-value pairs in the map after erasing "Charlie"
    }
    cout << "Lower bound of 'David' : " << myMap.lower_bound("David")->first << " : " << myMap.lower_bound("David")->second << endl;                                                                                                                          // Print the key and value of the lower bound for the key "David" in the map
    cout << "Upper bound of 'David' : " << myMap.upper_bound("David")->first << " : " << myMap.upper_bound("David")->second << endl;                                                                                                                          // Print the key and value of the upper bound for the key "David" in the map
    cout << "Equal range of 'David' : " << myMap.equal_range("David").first->first << " : " << myMap.equal_range("David").first->second << " and " << myMap.equal_range("David").second->first << " : " << myMap.equal_range("David").second->second << endl; // Print the key and value of the equal range for the key "David" in the map

    myMap["Grace"] = 39;                                                         // Update the value associated with the key "Grace" to 39
    myMap.at("Frank") = 41;                                                      // Update the value associated with the key "Frank" to 41 using the at() function
    cout << "After updating 'Grace' age to 39 and 'Frank' age to 41 : " << endl; // Print a message indicating that "Grace" and "Frank" ages have been updated
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << (*it).first << "\t" << (*it).second << endl; // Print the key-value pairs in the map after updating the ages
    }

    myMap.clear();                               // Remove all key-value pairs from the map
    cout << "After clearing the map : " << endl; // Print a message indicating that the map has been cleared
    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << (*it).first << "\t" << (*it).second << endl; // Print the key-value pairs in the map after clearing it (should be empty)
    }

    return 0;
}