int main () {
    int GU4zgxX8bI;
    int RI0wRA;
    int COUcdAu87TgL;
    GU4zgxX8bI = (15 - 15);
    int DFJ2Cm8YNi = GU4zgxX8bI, temp;
    int a [RI0wRA], wtYGHhO [RI0wRA];
    float yx7KEA, SjBJeO4V9a = (768 - 768);
    cin >> RI0wRA;
    for (COUcdAu87TgL = (479 - 479); COUcdAu87TgL < RI0wRA; COUcdAu87TgL = COUcdAu87TgL +1) {
        cin >> a[COUcdAu87TgL];
        yx7KEA += a[COUcdAu87TgL];
    }
    yx7KEA /= RI0wRA;
    for (COUcdAu87TgL = (115 - 115); COUcdAu87TgL < RI0wRA; COUcdAu87TgL = COUcdAu87TgL +1)
        if (SjBJeO4V9a < fabs (a[COUcdAu87TgL] - yx7KEA))
            SjBJeO4V9a = fabs (a[COUcdAu87TgL] - yx7KEA);
    for (COUcdAu87TgL = (292 - 292); COUcdAu87TgL < RI0wRA; COUcdAu87TgL = COUcdAu87TgL +1)
        if (SjBJeO4V9a == fabs (a[COUcdAu87TgL] - yx7KEA)) {
            wtYGHhO[GU4zgxX8bI] = a[COUcdAu87TgL];
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
            GU4zgxX8bI++;
        }
    for (COUcdAu87TgL = (645 - 645); COUcdAu87TgL < DFJ2Cm8YNi; COUcdAu87TgL = COUcdAu87TgL +1)
        for (GU4zgxX8bI = (901 - 901); GU4zgxX8bI < DFJ2Cm8YNi -COUcdAu87TgL-(809 - 808); GU4zgxX8bI = GU4zgxX8bI +1) {
            if (a[GU4zgxX8bI] > a[GU4zgxX8bI +(963 - 962)]) {
                temp = a[GU4zgxX8bI];
                a[GU4zgxX8bI] = a[GU4zgxX8bI +(153 - 152)];
                a[GU4zgxX8bI +(352 - 351)] = temp;
            };
        }
    for (COUcdAu87TgL = (740 - 740); COUcdAu87TgL < DFJ2Cm8YNi -(31 - 30); COUcdAu87TgL++)
        cout << wtYGHhO[COUcdAu87TgL] << ",";
    cout << wtYGHhO[COUcdAu87TgL];
    cin >> COUcdAu87TgL;
    return 0;
}

