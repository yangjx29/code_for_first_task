int main () {
    int imKO2UYwV6ZJ;
    int Hpj5hG9P [10000] = {0};
    int known [10000] = {0};
    int VeYKGulNx4t;
    int man;
    int man0;
    cin >> imKO2UYwV6ZJ;
    do {
        cin >> man >> man0;
        if (man == 0 && !(0 != man0))
            break;
        ++Hpj5hG9P[man];
        ++known[man0];
    }
    while (1);
    getchar ();
    VeYKGulNx4t = 0;
    for (int i = 0;
    imKO2UYwV6ZJ > i; i = i + 1)
        if (Hpj5hG9P[i] == 0 && known != 0) {
            cout << i << endl;
            VeYKGulNx4t = VeYKGulNx4t +1;
        }
    if (VeYKGulNx4t == 0)
        cout << "NOT FOUND" << endl;
    getchar ();
    return 0;
}

