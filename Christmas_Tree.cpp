#include <iostream>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
char character(){
    char char_choice;
    cout << "Enter a character: " << endl;
    cin >> char_choice;
    if (char_choice == !"w") {
    cout << "Must be a caracter!" << endl;
    char_choice = 0;
    return char_choice;
    }
    else{
        return char_choice;
    }
}

int size(){
    int int_choice;
    int integer;
    cout << "Enter a length: ";
    cin >> int_choice;
    if (typeid(int_choice) != typeid(int)) {
        cout << "The value must be an integer!" << endl;
        return 1;
    }
    else {
        return int_choice;
    }
}

int main (){
    int i;
    char Char_input = character();
    int num_Size = size();
    int vector[num_Size];
    for(i = 0; i <= num_Size - 1; i++){
        int vector = [num_Size];
        std::fill(vector,vector, Char_input);
        cout << vector[i] << endl;
    }
    return 0;
}