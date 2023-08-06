#include <iostream>
#include <vector>

std::vector<int> linearSearch(const std::vector<int>& arr, int target) {
    std::vector<int> hasilCari;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            hasilCari.push_back(i + 1);
        }
    }
    return hasilCari;
}

int main() {
    std::vector<int> arrayData = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    int target;
    std::cout << "Masukkan angka yang ingin dicari: ";
    std::cin >> target;

    std::vector<int> hasilCari = linearSearch(arrayData, target);
    if (hasilCari.empty()) {
        std::cout << "Input : " << target << "\nOutput : Angka " << target << " tidak ada dalam array\n";
    } else {
        std::cout << "Input : " << target << "\nOutput : Angka " << target << " ada di indeks ke ";
        for (int i = 0; i < hasilCari.size(); i++) {
            std::cout << hasilCari[i];
            if (i < hasilCari.size() - 1) {
                std::cout << " dan ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
