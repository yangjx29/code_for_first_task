int main () {
    int lSy9Ho5pAvN, L7sitCA3N10;
    int S0shSn94Ui [(188 - 177)] [11];
    int REITro30Yy [11] [11];
    int hldSEi, ZNv8BiJYg;
    for (hldSEi = (926 - 926); (833 - 823) >= hldSEi; hldSEi++) {
        for (ZNv8BiJYg = (336 - 336); (909 - 899) >= ZNv8BiJYg; ZNv8BiJYg = ZNv8BiJYg +1) {
            S0shSn94Ui[hldSEi][ZNv8BiJYg] = (973 - 973);
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
            REITro30Yy[hldSEi][ZNv8BiJYg] = (283 - 283);
        };
    }
    cin >> lSy9Ho5pAvN >> L7sitCA3N10;
    S0shSn94Ui[(111 - 106)][(912 - 907)] = lSy9Ho5pAvN;
    REITro30Yy[5][5] = lSy9Ho5pAvN;
    while (L7sitCA3N10 = L7sitCA3N10 -1) {
        for (hldSEi = (257 - 257); (483 - 473) >= hldSEi; hldSEi++)
            for (ZNv8BiJYg = 0; 10 >= ZNv8BiJYg; ZNv8BiJYg++)
                S0shSn94Ui[hldSEi][ZNv8BiJYg] = 0;
        for (hldSEi = (212 - 211); (467 - 458) >= hldSEi; hldSEi++)
            for (ZNv8BiJYg = (717 - 716); ZNv8BiJYg <= (851 - 842); ZNv8BiJYg++) {
                if (REITro30Yy[hldSEi][ZNv8BiJYg] != 0) {
                    S0shSn94Ui[hldSEi][ZNv8BiJYg] += ((253 - 251) * REITro30Yy[hldSEi][ZNv8BiJYg]);
                    S0shSn94Ui[hldSEi - (908 - 907)][ZNv8BiJYg] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi + (607 - 606)][ZNv8BiJYg] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi - (490 - 489)][ZNv8BiJYg -(818 - 817)] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi + (855 - 854)][ZNv8BiJYg -(34 - 33)] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi - 1][ZNv8BiJYg +1] = S0shSn94Ui[hldSEi - 1][ZNv8BiJYg +1] + REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi + 1][ZNv8BiJYg +1] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi][ZNv8BiJYg -1] += REITro30Yy[hldSEi][ZNv8BiJYg];
                    S0shSn94Ui[hldSEi][ZNv8BiJYg +1] += REITro30Yy[hldSEi][ZNv8BiJYg];
                };
            }
        for (hldSEi = 1; hldSEi <= (638 - 629); hldSEi++) {
            for (ZNv8BiJYg = 1; ZNv8BiJYg <= 9; ZNv8BiJYg++) {
                REITro30Yy[hldSEi][ZNv8BiJYg] = S0shSn94Ui[hldSEi][ZNv8BiJYg];
            };
        };
    }
    for (hldSEi = 1; hldSEi <= 9; hldSEi++) {
        for (ZNv8BiJYg = 1; ZNv8BiJYg <= 9; ZNv8BiJYg++) {
            if (ZNv8BiJYg != 1)
                cout << " ";
            cout << S0shSn94Ui[hldSEi][ZNv8BiJYg];
        }
        cout << endl;
    }
    return 0;
}

