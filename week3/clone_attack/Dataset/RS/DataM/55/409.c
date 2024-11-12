int main () {
    double  Se7KdbO1H;
    double  tSxh73QVqg1;
    double  WT1cupn3;
    Se7KdbO1H = 0.0;
    int k0PqoETh;
    int lybsRjAKpMIL;
    int YcDWCyH1;
    int l2;
    int gHIYy3wtcJvV;
    int jmVbDWIP3;
    int mAnCDbmsz [200];
    char AYDqk4n [200];
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
    char EYtPClh3vS [36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    cin >> tSxh73QVqg1 >> AYDqk4n >> WT1cupn3;
    YcDWCyH1 = strlen (AYDqk4n);
    for (k0PqoETh = (579 - 579); YcDWCyH1 > k0PqoETh; k0PqoETh++) {
        if ('a' <= AYDqk4n[k0PqoETh] && 'z' >= AYDqk4n[k0PqoETh])
            AYDqk4n[k0PqoETh] = AYDqk4n[k0PqoETh] - 'a' - 'A';
    }
    lybsRjAKpMIL = (860 - 860);
    for (k0PqoETh = YcDWCyH1 -1; k0PqoETh >= (836 - 836); k0PqoETh--)
        mAnCDbmsz[lybsRjAKpMIL++] = AYDqk4n[k0PqoETh];
    for (k0PqoETh = 0; k0PqoETh < YcDWCyH1; k0PqoETh++) {
        for (lybsRjAKpMIL = 0; lybsRjAKpMIL < 36; lybsRjAKpMIL++) {
            if (mAnCDbmsz[k0PqoETh] == EYtPClh3vS[lybsRjAKpMIL])
                Se7KdbO1H = Se7KdbO1H +lybsRjAKpMIL * pow (tSxh73QVqg1, k0PqoETh);
        };
    }
    lybsRjAKpMIL = 0;
    for (; (int) Se7KdbO1H >= (int) WT1cupn3;) {
        mAnCDbmsz[lybsRjAKpMIL++] = (int) Se7KdbO1H % (int) WT1cupn3;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Se7KdbO1H = (int) Se7KdbO1H / (int) WT1cupn3;
    }
    mAnCDbmsz[lybsRjAKpMIL] = (int) Se7KdbO1H;
    for (; lybsRjAKpMIL >= 0; lybsRjAKpMIL--)
        cout << EYtPClh3vS[mAnCDbmsz[lybsRjAKpMIL]];
    cout << endl;
    return 0;
}

