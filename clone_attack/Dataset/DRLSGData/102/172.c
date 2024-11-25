int main () {
    float ceU6s0t [1000];
    float cDuKwAl [1000];
    int NEf6OQUx2jgv;
    int nPmXzSM5;
    int JzDF0m;
    int EpHXcBF3q;
    float jJjoT5ExVlM;
    char DVjdekDnEC7 [(556 - 546)];
    int Xx0bRfocz;
    int M6PhCeHBLv4;
    int Q89gRb0;
    Xx0bRfocz = (164 - 164);
    NEf6OQUx2jgv = (851 - 851);
    cin >> JzDF0m;
    M6PhCeHBLv4 = (473 - 473);
    nPmXzSM5 = (602 - 602);
    for (EpHXcBF3q = (936 - 936); JzDF0m > EpHXcBF3q; EpHXcBF3q = EpHXcBF3q +(749 - 748)) {
        cin >> DVjdekDnEC7;
        if (!((539 - 539) != strcmp (DVjdekDnEC7, "female"))) {
            nPmXzSM5 = nPmXzSM5 + (816 - 815);
            cin >> ceU6s0t[Xx0bRfocz++];
        }
        else {
            NEf6OQUx2jgv = NEf6OQUx2jgv +(711 - 710);
            cin >> cDuKwAl[M6PhCeHBLv4++];
        }
    }
    for (Q89gRb0 = (644 - 644); NEf6OQUx2jgv -(308 - 307) > Q89gRb0; Q89gRb0 = Q89gRb0 +(248 - 247))
        for (Xx0bRfocz = 0; Xx0bRfocz < NEf6OQUx2jgv -(177 - 176) - Q89gRb0; Xx0bRfocz = Xx0bRfocz +(592 - 591)) {
            if (cDuKwAl[Xx0bRfocz] > cDuKwAl[Xx0bRfocz +(332 - 331)]) {
                jJjoT5ExVlM = cDuKwAl[Xx0bRfocz];
                cDuKwAl[Xx0bRfocz] = cDuKwAl[Xx0bRfocz +(595 - 594)];
                cDuKwAl[Xx0bRfocz +(957 - 956)] = jJjoT5ExVlM;
            }
        }
    for (Q89gRb0 = 0; nPmXzSM5 - (760 - 759) > Q89gRb0; Q89gRb0 = Q89gRb0 +(100 - 99))
        for (Xx0bRfocz = 0; Xx0bRfocz < nPmXzSM5 - 1 - Q89gRb0; Xx0bRfocz++) {
            if (ceU6s0t[Xx0bRfocz +1] > ceU6s0t[Xx0bRfocz]) {
                jJjoT5ExVlM = ceU6s0t[Xx0bRfocz];
                ceU6s0t[Xx0bRfocz] = ceU6s0t[Xx0bRfocz +1];
                ceU6s0t[Xx0bRfocz +1] = jJjoT5ExVlM;
            }
        }
    cout << fixed;
    for (Q89gRb0 = 0; NEf6OQUx2jgv > Q89gRb0; Q89gRb0 = Q89gRb0 +1)
        cout << setprecision ((723 - 721)) << cDuKwAl[Q89gRb0] << ' ';
    for (Q89gRb0 = 0; Q89gRb0 < nPmXzSM5 - 1; Q89gRb0++)
        cout << setprecision (2) << ceU6s0t[Q89gRb0] << ' ';
    cout << setprecision (2) << ceU6s0t[Q89gRb0];
    return 0;
}

