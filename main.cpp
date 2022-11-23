#include <iostream>

int vettore[4] = {2, 9, 6, 46};
const int size = sizeof(vettore)/sizeof(vettore[0]);

int check_array(int v[size]) {
    if (size<3) {
        return false;
    }
    return true;
}

int __max__(int v[size]) {
    int i;
    int max = v[0];
    // while (sizeof(nuovo_vettore)/sizeof(nuovo_vettore[0])!=size) {}
    for (i = 1; i < size; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

void __sort__(int v[size]) {
    int new_arr[3];
    int z=0;
    while (z<3) {
        new_arr[z] = __max__(v);
        for (int y=0; y<size; y++) {
            if (new_arr[z] == v[y]) {
                v[y] = 0;
            }
        }
    z++;
    }
    for (int o=0; o<sizeof(new_arr)/sizeof(new_arr[0]); o++) {
        std::cout<<new_arr[o]<<"\n";
    }
}

int main() {
    if (check_array(vettore)) {
        __sort__(vettore);
    } else {
        std::cout<<"Array minore di 3";
        exit(1);
    }
    return 0;
}

