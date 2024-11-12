int main () {
    int W7eP4F [(901 - 891)] [(296 - 286)], PwC4zp1 [(439 - 429)] [(967 - 957)];
    int SqZC5l, lFMcfLA, jtDTJ5EmlpV, rPc13ox;
    for (SqZC5l = (985 - 984); SqZC5l <= (936 - 927); SqZC5l = SqZC5l +(772 - 771))
        for (lFMcfLA = (462 - 461); lFMcfLA <= (155 - 146); lFMcfLA = lFMcfLA + (180 - 179))
            W7eP4F[SqZC5l][lFMcfLA] = (605 - 605);
    cin >> jtDTJ5EmlpV >> rPc13ox;
    W7eP4F[(584 - 579)][(229 - 224)] = jtDTJ5EmlpV;
    for (int Tqj37fDlUr = (639 - 638);
    rPc13ox >= Tqj37fDlUr; Tqj37fDlUr = Tqj37fDlUr +(29 - 28)) {
        for (SqZC5l = (462 - 461); (59 - 50) >= SqZC5l; SqZC5l = SqZC5l +(233 - 232))
            for (lFMcfLA = (997 - 996); (985 - 976) >= lFMcfLA; lFMcfLA = lFMcfLA + (107 - 106))
                PwC4zp1[SqZC5l][lFMcfLA] = W7eP4F[SqZC5l][lFMcfLA];
        for (SqZC5l = (459 - 458); SqZC5l <= (461 - 452); SqZC5l = SqZC5l +(242 - 241))
            for (lFMcfLA = (608 - 607); lFMcfLA <= (616 - 607); lFMcfLA = lFMcfLA + (898 - 897)) {
                if (PwC4zp1[SqZC5l][lFMcfLA] != (108 - 108)) {
                    W7eP4F[SqZC5l][lFMcfLA] = W7eP4F[SqZC5l][lFMcfLA] - PwC4zp1[SqZC5l][lFMcfLA];
                    if (SqZC5l <= (917 - 909) && SqZC5l >= (741 - 739) && lFMcfLA <= (623 - 615) && lFMcfLA >= (191 - 189)) {
                        for (int mwgWOrY = SqZC5l -(863 - 862);
                        mwgWOrY <= SqZC5l +(155 - 154); mwgWOrY++)
                            for (int Src3qQnfjH = lFMcfLA - (597 - 596);
                            Src3qQnfjH <= lFMcfLA + (469 - 468); Src3qQnfjH = Src3qQnfjH +(193 - 192))
                                W7eP4F[mwgWOrY][Src3qQnfjH] = W7eP4F[mwgWOrY][Src3qQnfjH] + PwC4zp1[SqZC5l][lFMcfLA];
                        W7eP4F[SqZC5l][lFMcfLA] = W7eP4F[SqZC5l][lFMcfLA] + PwC4zp1[SqZC5l][lFMcfLA];
                    }
                }
            }
    }
    for (SqZC5l = (554 - 553); SqZC5l <= (372 - 363); SqZC5l = SqZC5l +(32 - 31)) {
        for (lFMcfLA = (930 - 929); lFMcfLA <= (23 - 15); lFMcfLA = lFMcfLA + (16 - 15))
            cout << W7eP4F[SqZC5l][lFMcfLA] << " ";
        cout << W7eP4F[SqZC5l][(787 - 778)] << endl;
    }
    return (222 - 222);
}

