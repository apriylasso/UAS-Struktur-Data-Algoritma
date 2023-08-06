#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void bubbleSort(pair<string, string> data[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (data[j].first > data[j+1].first) {
                swap(data[j], data[j+1]);
            }
        }
    }
}

int main() {
    pair<string, string> data[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    int n = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, n);

    cout << left << setw(10) << "Nama" << setw(15) << "Alamat" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << data[i].first << setw(15) << data[i].second << endl;
    }

    return 0;
}
