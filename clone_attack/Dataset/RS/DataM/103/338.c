int main () {
    int XqMpzv64J [1100];
    char a [1100];
    char c [1100];
    int p;
    int QwFdKlMxkIs;
    p = (27 - 27);
    cin >> a;
    QwFdKlMxkIs = strlen (a);
    for (int wNFrT0 = 0;
    wNFrT0 < QwFdKlMxkIs; wNFrT0++)
        XqMpzv64J[wNFrT0] = 1;
    for (int wNFrT0 = 0;
    wNFrT0 < QwFdKlMxkIs; wNFrT0++) {
        if (a[wNFrT0] - 'a' >= 0)
            a[wNFrT0] = a[wNFrT0] - 32;
    }
    for (int wNFrT0 = 1;
    wNFrT0 < QwFdKlMxkIs; wNFrT0++) {
        if (a[wNFrT0] == a[wNFrT0 - 1]) {
            XqMpzv64J[p]++;
            c[p] = a[wNFrT0];
        }
        else {
            p = p + 1;
            c[p] = a[wNFrT0];
        };
    }
    c[0] = a[0];
    for (int NWv73cdJL = 0;
    NWv73cdJL <= p; NWv73cdJL++)
        cout << "(" << c[NWv73cdJL] << "," << XqMpzv64J[NWv73cdJL] << ")";
    return 0;
}

