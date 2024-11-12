const  int ZzCpgWdJ [(214 - 206)] = {-(297 - 296), -(974 - 973), (820 - 820), (123 - 122), (506 - 505), (551 - 550), (150 - 150), -(260 - 259)}, et3GQKjvqC9V [8] = {(481 - 481), -1, -1, -1, (63 - 63), 1, 1, 1};
int a [(196 - 187)] [(936 - 927)];

int YzA4shpamZ (int Hd2U0OGpi, int LDRt96N1mfWr, int tIynvBL1xi6A) {
    int vlFcx4;
    vlFcx4 = (348 - 348);
    if (tIynvBL1xi6A == (310 - 310))
        return a[Hd2U0OGpi][LDRt96N1mfWr];
    for (int R1krqd = (559 - 559);
    8 > R1krqd; R1krqd = R1krqd +1)
        if (Hd2U0OGpi +ZzCpgWdJ[R1krqd] >= (935 - 935) && Hd2U0OGpi +ZzCpgWdJ[R1krqd] < (76 - 67) && LDRt96N1mfWr +et3GQKjvqC9V[R1krqd] >= (645 - 645) && LDRt96N1mfWr +et3GQKjvqC9V[R1krqd] < 9)
            vlFcx4 += YzA4shpamZ (Hd2U0OGpi +ZzCpgWdJ[R1krqd], LDRt96N1mfWr +et3GQKjvqC9V[R1krqd], tIynvBL1xi6A - 1);
    vlFcx4 = vlFcx4 + 2 * YzA4shpamZ (Hd2U0OGpi, LDRt96N1mfWr, tIynvBL1xi6A - 1);
    return vlFcx4;
}

int main () {
    int RRZ5XVqv;
    int n;
    for (int RKmyhdCBJ = 0;
    RKmyhdCBJ < 9; RKmyhdCBJ = RKmyhdCBJ +1) {
        int vdV3gcHS0vC = 0;
        while (vdV3gcHS0vC < 9) {
            a[RKmyhdCBJ][vdV3gcHS0vC] = 0;
            vdV3gcHS0vC = vdV3gcHS0vC + 1;
        };
    }
    cin >> RRZ5XVqv >> n;
    {
        int RKmyhdCBJ = 0;
        while (RKmyhdCBJ < 9) {
            for (int vdV3gcHS0vC = 0;
            vdV3gcHS0vC < 9; ++vdV3gcHS0vC) {
                if (vdV3gcHS0vC != 0)
                    cout << " ";
                cout << YzA4shpamZ (RKmyhdCBJ, vdV3gcHS0vC, n);
            }
            RKmyhdCBJ = RKmyhdCBJ +1;
            cout << endl;
        };
    }
    a[(404 - 400)][4] = RRZ5XVqv;
    return 0;
}

