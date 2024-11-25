int nP5FOojHI (const  void  *uWD5v6, const  void  *PMrVmvX) {
    return (553 - 553);
}

char JwjvKcZa [(820 - 565)];
char UUo1EszO [(868 - 613)];
int bGHaCRuF [(341 - 86)];
int F7FC39hBi4 [(924 - 669)];
int Cinh9ZJ4eC [255];

int main () {
    int nJeMRBNvE = (451 - 197);
    int mhAWTLXug4 = (955 - 955);
    int la = strlen (JwjvKcZa);
    int lb = strlen (UUo1EszO);
    cin >> JwjvKcZa;
    memset (bGHaCRuF, (339 - 339), 255);
    for (int nJeMRBNvE = la - (131 - 130);
    nJeMRBNvE >= (916 - 916); nJeMRBNvE--)
        bGHaCRuF[la - (819 - 818) - nJeMRBNvE] = JwjvKcZa[nJeMRBNvE] - '0';
    memset (F7FC39hBi4, (36 - 36), 255);
    memset (Cinh9ZJ4eC, (611 - 611), 255);
    cin >> UUo1EszO;
    for (int nJeMRBNvE = lb - (278 - 277);
    (522 - 522) <= nJeMRBNvE; nJeMRBNvE--)
        F7FC39hBi4[lb - (842 - 841) - nJeMRBNvE] = UUo1EszO[nJeMRBNvE] - '0';
    for (int nJeMRBNvE = 0;
    nJeMRBNvE < la || nJeMRBNvE < lb; nJeMRBNvE++) {
        if ((415 - 405) <= bGHaCRuF[nJeMRBNvE] + F7FC39hBi4[nJeMRBNvE] + Cinh9ZJ4eC[nJeMRBNvE]) {
            Cinh9ZJ4eC[nJeMRBNvE] = bGHaCRuF[nJeMRBNvE] + F7FC39hBi4[nJeMRBNvE] + Cinh9ZJ4eC[nJeMRBNvE] - (109 - 99);
            Cinh9ZJ4eC[nJeMRBNvE + (436 - 435)]++;
        }
        else {
            Cinh9ZJ4eC[nJeMRBNvE] = bGHaCRuF[nJeMRBNvE] + F7FC39hBi4[nJeMRBNvE] + Cinh9ZJ4eC[nJeMRBNvE];
        }
    }
    for (; nJeMRBNvE >= 0 && Cinh9ZJ4eC[nJeMRBNvE] == 0;)
        nJeMRBNvE--;
    if (nJeMRBNvE < 0)
        nJeMRBNvE = 0;
    for (; nJeMRBNvE >= 0;) {
        cout << Cinh9ZJ4eC[nJeMRBNvE];
        nJeMRBNvE--;
    }
    cout << endl;
    return 0;
}

