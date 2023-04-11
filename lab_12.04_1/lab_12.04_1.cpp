// Визначити, чи список містить пару елементів (не обов’язково сусідніх)
//з однаковими значеннями інформаційного поля.
#include <iostream>
#include <vector>

using namespace std;

void printList(vector<int>& list) {
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

bool hasDuplicate(vector<int>& list) {
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = i + 1; j < list.size(); j++) {
            if (list[i] == list[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> myList;

    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        myList.push_back(num);
    }

    printList(myList);

    if (hasDuplicate(myList)) {
        cout << "The list has a duplicate." << endl;
    }
    else {
        cout << "The list does not have a duplicate." << endl;
    }

    return 0;
}
