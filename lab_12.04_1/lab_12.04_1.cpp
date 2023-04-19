// Âèçíà÷èòè, ÷è ñïèñîê ì³ñòèòü ïàðó åëåìåíò³â (íå îáîâ’ÿçêîâî ñóñ³äí³õ)
//ç îäíàêîâèìè çíà÷åííÿìè ³íôîðìàö³éíîãî ïîëÿ.
#include <iostream>
using namespace std;

struct Elem {
    int data;
    Elem* next;
};

void printList(Elem* head) {
    if (head == nullptr) {
        return;
    }

    Elem* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

bool hasDuplicate(Elem* head) {
    if (head == nullptr) {
        return false;
    }

    for (Elem* i = head; i->next != head; i = i->next) {
        for (Elem* j = i->next; j != head; j = j->next) {
            if (i->data == j->data) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter numbers of elements: ";
    cin >> n;

    Elem* head = nullptr;
    Elem* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;

        Elem* newElem = new Elem{ value, nullptr };
        if (head == nullptr) {
            head = newElem;
            tail = newElem;
            tail->next = head;
        }
        else {
            tail->next = newElem;
            tail = newElem;
            tail->next = head;
        }
    }

    cout << "List witout changes: ";
    printList(head);

    cout << "Has a double number: " << boolalpha << hasDuplicate(head) << endl;

    return 0;
}
