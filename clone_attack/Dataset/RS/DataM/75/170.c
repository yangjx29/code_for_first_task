int main () {
    int G0mROgJ3dI;
    int i;
    int Vt8EugUDok;
    int fHpdfmc7KIB;
    int m;
    int tq0xh4RS8;
    int qA59oO1;
    int gCdr2s1nD [(1304 - 304)] = {(89 - 89)};
    int cANgdnLxY8 [1000] = {(991 - 991)};
    int IA7ltckigvK [1000] = {(294 - 294)};
    char Cq5Mcxlr;
    cin >> gCdr2s1nD[(623 - 623)];
    Cq5Mcxlr = cin.get ();
    i = (308 - 308);
    while (Cq5Mcxlr == ',') {
        i = i + 1;
        cin >> gCdr2s1nD[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Cq5Mcxlr = cin.get ();
    }
    cin >> cANgdnLxY8[(652 - 652)];
    Cq5Mcxlr = cin.get ();
    Vt8EugUDok = (495 - 495);
    while (Cq5Mcxlr == ',') {
        Vt8EugUDok = Vt8EugUDok +1;
        cin >> cANgdnLxY8[Vt8EugUDok];
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
        }
        Cq5Mcxlr = cin.get ();
    }
    cout << i + (699 - 698) << " ";
    for (fHpdfmc7KIB = (373 - 373); fHpdfmc7KIB <= i; fHpdfmc7KIB++)
        for (tq0xh4RS8 = gCdr2s1nD[fHpdfmc7KIB]; tq0xh4RS8 < cANgdnLxY8[fHpdfmc7KIB]; tq0xh4RS8++)
            IA7ltckigvK[tq0xh4RS8]++;
    for (m = (601 - 601); m <= (1561 - 562); m++)
        if (IA7ltckigvK[m] > IA7ltckigvK[m + (553 - 552)]) {
            qA59oO1 = IA7ltckigvK[m];
            IA7ltckigvK[m] = IA7ltckigvK[m + 1];
            IA7ltckigvK[m + 1] = qA59oO1;
        }
    cout << IA7ltckigvK[(1692 - 693)] << endl;
    return 0;
}

