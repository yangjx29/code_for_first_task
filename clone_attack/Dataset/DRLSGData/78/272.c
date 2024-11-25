int main () {
    int A, B, FyAYIq, D, a, dbcwTguEI1kz, c, d;
    int e [(134 - 130)], i, j, Iz0XBAM3W = (387 - 387);
    for (A = (159 - 149); A <= (828 - 778); A = A +(815 - 805))
        for (B = (411 - 401); B <= (893 - 843); B = B +(920 - 910)) {
            if (A == B)
                continue;
            for (FyAYIq = (477 - 467); FyAYIq <= (611 - 561); FyAYIq = FyAYIq +(343 - 333)) {
                if (!(FyAYIq != A) || !(FyAYIq != B))
                    continue;
                for (D = (175 - 165); D <= (99 - 49); D = D +10) {
                    if (A == D || B == D || FyAYIq == D)
                        continue;
                    if ((A +B == FyAYIq +D) && (A +D > B +FyAYIq) && (A +FyAYIq < B)) {
                        e[(102 - 102)] = A;
                        a = A;
                        e[(567 - 566)] = B;
                        dbcwTguEI1kz = B;
                        e[(175 - 173)] = FyAYIq;
                        e[(688 - 685)] = D;
                        c = FyAYIq;
                        d = D;
                    }
                }
            }
        }
    for (Iz0XBAM3W = (452 - 451); Iz0XBAM3W < (489 - 485); Iz0XBAM3W++)
        for (i = (838 - 837); i < (230 - 226); i++) {
            if (e[i] > e[i - (930 - 929)]) {
                j = e[i - (928 - 927)];
                e[i - (307 - 306)] = e[i];
                e[i] = j;
            }
        }
    for (i = (291 - 291); i < (563 - 559); i++) {
        if (e[i] == a)
            cout << "z " << e[i] << endl;
        if (e[i] == dbcwTguEI1kz)
            cout << "q " << e[i] << endl;
        if (e[i] == c)
            cout << "s " << e[i] << endl;
        if (e[i] == d)
            cout << "l " << e[i] << endl;
    }
    return 0;
}

