struct   person {
    int B64oTaCjm;
    int xxCsT5bdpGSP;
}
ZuVjTb3iwmy [10001];

int main () {
    int XfNTcF9MXgKU, pNAFxiv2, mKiNdWAqLIG, oiPQtxXp = 0;
    cin >> XfNTcF9MXgKU;
    while (1) {
        cin >> pNAFxiv2 >> mKiNdWAqLIG;
        if (pNAFxiv2 == 0 && mKiNdWAqLIG == 0)
            break;
        ZuVjTb3iwmy[pNAFxiv2].B64oTaCjm = 1;
        ZuVjTb3iwmy[mKiNdWAqLIG].xxCsT5bdpGSP++;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int pNAFxiv2 = 0;
    pNAFxiv2 < XfNTcF9MXgKU; pNAFxiv2++) {
        if (ZuVjTb3iwmy[pNAFxiv2].B64oTaCjm == 0 && ZuVjTb3iwmy[pNAFxiv2].xxCsT5bdpGSP == XfNTcF9MXgKU -1)
            oiPQtxXp = 1, cout << pNAFxiv2 << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    if (oiPQtxXp == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

