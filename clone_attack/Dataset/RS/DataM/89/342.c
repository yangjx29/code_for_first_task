int main () {
    int zIOJRydCn;
    int Bdcfmi;
    int HTxYWXwifE;
    int TwtxT5JDzk [100000] = {0};
    int *lxj3fSk5Nv9 = TwtxT5JDzk;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> zIOJRydCn;
    for (; cin >> Bdcfmi &&cin >> HTxYWXwifE &&(Bdcfmi != 0 || HTxYWXwifE != 0);) {
        (*(lxj3fSk5Nv9 + HTxYWXwifE))++;
    }
    for (Bdcfmi = 0; Bdcfmi < zIOJRydCn; Bdcfmi++) {
        if (*(lxj3fSk5Nv9 + Bdcfmi) == zIOJRydCn - 1) {
            cout << Bdcfmi;
            break;
        };
    }
    if (Bdcfmi == zIOJRydCn) {
        cout << "NOT FOUND";
    }
    return 0;
}

