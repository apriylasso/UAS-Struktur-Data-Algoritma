#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void selectionSort(pair<string, string> data[], int n) {
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (data[j].first < data[min_idx].first) {
                min_idx = j;
            }
        }
        swap(data[i], data[min_idx]);
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

    selectionSort(data, n);

    cout << left << setw(10) << "Nama" << setw(15) << "Alamat" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << data[i].first << setw(15) << data[i].second << endl;
    }

    return 0;
}
