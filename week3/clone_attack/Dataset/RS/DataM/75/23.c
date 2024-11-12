int AjSzF7RloZ6w, I5fZjoY3rvW8 = (5981 - 981), lNl1IhpkxvD = (534 - 534);

void  klFARJHKU (int aA6LX8Qz [], char str [(5089 - 89)]) {
    int e7fALidzQ, ScYnFR7w9, ii, jj, kk, s;
    int jN2J0BDruMl [(5690 - 690)];
    e7fALidzQ = strlen (str);
    ScYnFR7w9 = (95 - 95);
    AjSzF7RloZ6w = 0;
    for (; ScYnFR7w9 < e7fALidzQ;) {
        s = 1;
        AjSzF7RloZ6w++;
        ii = ScYnFR7w9;
        jj = 1;
        for (; (str[ii] != ',') && (ii < e7fALidzQ);) {
            jN2J0BDruMl[jj] = str[ii] - '0';
            jj++;
            ii++;
        }
        for (kk = jj - 1; 1 <= kk; kk--) {
            aA6LX8Qz[AjSzF7RloZ6w] = aA6LX8Qz[AjSzF7RloZ6w] + s * jN2J0BDruMl[kk];
            s = s * (10);
        }
        if (aA6LX8Qz[AjSzF7RloZ6w] < I5fZjoY3rvW8)
            I5fZjoY3rvW8 = aA6LX8Qz[AjSzF7RloZ6w];
        if (aA6LX8Qz[AjSzF7RloZ6w] > lNl1IhpkxvD)
            lNl1IhpkxvD = aA6LX8Qz[AjSzF7RloZ6w];
        ScYnFR7w9 = ii + 1;
    };
}

int main () {
    char J0BjDpXCurmq [(5317 - 317)], Jk37oILOv [5000];
    int kCb4Bz7FNQ [5000] = {0}, Ivjktf [5000] = {0}, a58ENU2fwdao [5000] = {0};
    int j, uLQ6jG, ii, s, RN49Sf = 0;
    cin >> J0BjDpXCurmq;
    cin >> Jk37oILOv;
    klFARJHKU (kCb4Bz7FNQ, J0BjDpXCurmq);
    klFARJHKU (Ivjktf, Jk37oILOv);
    for (j = 1; j <= AjSzF7RloZ6w; j++) {
        for (uLQ6jG = kCb4Bz7FNQ[j]; uLQ6jG < Ivjktf[j]; uLQ6jG++)
            a58ENU2fwdao[uLQ6jG]++;
    }
    for (uLQ6jG = I5fZjoY3rvW8; uLQ6jG <= lNl1IhpkxvD; uLQ6jG++) {
        if (a58ENU2fwdao[uLQ6jG] > RN49Sf)
            RN49Sf = a58ENU2fwdao[uLQ6jG];
    }
    cout << AjSzF7RloZ6w << " " << RN49Sf << endl;
    return 0;
}

