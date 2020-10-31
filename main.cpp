#include <iostream>
#include <vector>

using namespace std;

void print_contents_by_pointer(vector<int> *input) {
    for(int i = 0; i < input->size(); i++) {
        cout << input->at(i) << endl;
    }
}

void print_contents_by_refference(vector<int> &input) {
    for(int i = 0; i < input.size(); i++) {
        cout << input[i] << endl;
    }
}

int main() {

    int size;

    cout << "Provide a size for your array: " << endl;
    cin >> size;

    vector<int> numbers;

    for (int i = 0; i <= size; i++) {
        numbers.push_back(i);

    }

    //print_contents_by_pointer(&numbers);
    print_contents_by_refference(numbers);
    
    return 0;
}