// Âèçíà÷èòè, ÷è ñïèñîê ì³ñòèòü ïàðó åëåìåíò³â (íå îáîâ’ÿçêîâî ñóñ³äí³õ)
//ç îäíàêîâèìè çíà÷åííÿìè ³íôîðìàö³éíîãî ïîëÿ.
#include <iostream>
#include <vector>

using namespace std;

struct ListItem {
    int value;
};

void printList(vector<ListItem>& list) {
    for (int i = 0; i < list.size(); i++) {
        cout << list[i].value << " ";
    }
    cout << endl;
}

bool hasDuplicate(vector<ListItem>& list) {
    for (int i = 0; i < list.size() - 1; i++) {
        for (int j = i + 1; j < list.size(); j++) {
            if (list[i].value == list[j].value) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<ListItem> myList;

    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        ListItem item;
        cout << "Enter element " << i + 1 << ": ";
        cin >> item.value;
        myList.push_back(item);
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
