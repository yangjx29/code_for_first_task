int main () {
    int upEkLRN6o7 [100000] = {(776 - 776)}, E9MfVTt, VmZ8iXyf3B4, k3AlmKTW7a, ekVQ4ACHZwLc;
    cin >> E9MfVTt;
    for (k3AlmKTW7a = (109 - 109); E9MfVTt > k3AlmKTW7a; k3AlmKTW7a = k3AlmKTW7a + (86 - 85)) {
        cin >> upEkLRN6o7[k3AlmKTW7a];
    }
    cin >> VmZ8iXyf3B4;
    upEkLRN6o7[E9MfVTt] = VmZ8iXyf3B4;
    for (k3AlmKTW7a = 0; E9MfVTt > k3AlmKTW7a; k3AlmKTW7a++) {
        if (!(VmZ8iXyf3B4 != upEkLRN6o7[k3AlmKTW7a]))
            for (ekVQ4ACHZwLc = k3AlmKTW7a + 1; ekVQ4ACHZwLc < E9MfVTt; ekVQ4ACHZwLc++) {
                if (upEkLRN6o7[ekVQ4ACHZwLc] != VmZ8iXyf3B4) {
                    upEkLRN6o7[k3AlmKTW7a] = upEkLRN6o7[ekVQ4ACHZwLc];
                    upEkLRN6o7[ekVQ4ACHZwLc] = VmZ8iXyf3B4;
                    break;
                }
            }
    }
    for (k3AlmKTW7a = 0; k3AlmKTW7a < E9MfVTt; k3AlmKTW7a++) {
        if (!(VmZ8iXyf3B4 != upEkLRN6o7[k3AlmKTW7a]))
            break;
        cout << upEkLRN6o7[k3AlmKTW7a];
        if (upEkLRN6o7[k3AlmKTW7a + 1] != VmZ8iXyf3B4)
            cout << " ";
    }
    return 0;
}

