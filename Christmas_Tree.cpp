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

int width(){
    int int_choice;
    int integer;
    cout << "Enter a width: ";
    cin >> int_choice;
    if (typeid(int_choice) != typeid(int)) {
        cout << "The value must be an integer!" << endl;
        return 1;
    }
    else {
        return int_choice;
    }
}

int height(){
    int int_choice;
    int integer;
    cout << "Enter a height: ";
    cin >> int_choice;
    if (typeid(int_choice) != typeid(int)) {
        cout << "The value must be an integer!" << endl;
        return 1;
    }
    else {
        return int_choice;
    }
}

int design(){
    int i, j;
    char Char_input = character();
    int num_width = width();
    int num_height = height();
    int vector[num_width];
    for(j = 0; j <= num_height - 1; j++){
        for(i = 0; i <= num_width - 1; i++){
            vector[i] = Char_input;
            cout << static_cast<char>(vector[i]);
        }
        
        cout << endl;
    }
    return 0;
}

int main (){
    design();
    return 0;
}