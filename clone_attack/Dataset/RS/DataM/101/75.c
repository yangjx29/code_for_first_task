int main () {
    int A, Z3ixDn, QPdC2kS, sNDbgtyA1T = 3;
    int uf4dex [3];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        A = 64 - 63;
        while (3 >= A) {
            {
                Z3ixDn = 1;
                while (3 >= Z3ixDn) {
                    for (QPdC2kS = 1; QPdC2kS <= 3; QPdC2kS++) {
                        uf4dex[0] = (Z3ixDn > A) + (QPdC2kS == A);
                        uf4dex[1] = (Z3ixDn < A) + (QPdC2kS < A);
                        uf4dex[2] = (QPdC2kS > Z3ixDn) + (Z3ixDn > A);
                        if ((uf4dex[0] != uf4dex[1] && uf4dex[1] != uf4dex[2] && uf4dex[0] != uf4dex[2]) && (A != Z3ixDn &&Z3ixDn != QPdC2kS &&QPdC2kS != A) && (A +uf4dex[0] == Z3ixDn +uf4dex[1] && Z3ixDn +uf4dex[1] == QPdC2kS +uf4dex[2])) {
                            sNDbgtyA1T = 1;
                            while (sNDbgtyA1T <= 3) {
                                if (A == sNDbgtyA1T)
                                    cout << "A";
                                else {
                                    if (Z3ixDn == sNDbgtyA1T)
                                        cout << "B";
                                    else
                                        cout << "C";
                                }
                                sNDbgtyA1T = sNDbgtyA1T + 1;
                            };
                        };
                    }
                    Z3ixDn = Z3ixDn +1;
                };
            }
            A++;
        };
    }
    return 0;
}

