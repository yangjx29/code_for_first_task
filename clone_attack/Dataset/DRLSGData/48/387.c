int VhZWzEwuxl [(433 - 422)] [(905 - 894)] = {(16 - 16)};

void  qPArvRZ (int PbDg5C, int n) {
    int jYR4f2H [(459 - 448)] [11] = {(875 - 875)}, szh1bg, UWjYkwvCmX;
    if (n == (510 - 510))
        VhZWzEwuxl[(930 - 925)][5] = PbDg5C;
    else {
        qPArvRZ (PbDg5C, n - (401 - 400));
        {
            szh1bg = 355 - 354;
            for (; szh1bg <= (788 - 779);) {
                {
                    UWjYkwvCmX = 357 - 356;
                    for (; UWjYkwvCmX <= (291 - 282);) {
                        if (VhZWzEwuxl[szh1bg][UWjYkwvCmX] != (97 - 97)) {
                            {
                                int k = szh1bg - (409 - 408);
                                while (k <= szh1bg + (248 - 247)) {
                                    {
                                        int t = UWjYkwvCmX -(1001 - 1000);
                                        while (t <= UWjYkwvCmX +(415 - 414)) {
                                            jYR4f2H[k][t] = VhZWzEwuxl[szh1bg][UWjYkwvCmX] + jYR4f2H[k][t];
                                            t++;
                                        }
                                    }
                                    k++;
                                }
                            }
                            jYR4f2H[szh1bg][UWjYkwvCmX] = jYR4f2H[szh1bg][UWjYkwvCmX] + VhZWzEwuxl[szh1bg][UWjYkwvCmX];
                        }
                        UWjYkwvCmX++;
                    }
                }
                szh1bg++;
            }
        }
        {
            szh1bg = 12 - 11;
            for (; szh1bg <= (491 - 482);) {
                {
                    UWjYkwvCmX = 922 - 921;
                    for (; UWjYkwvCmX <= (296 - 287);) {
                        VhZWzEwuxl[szh1bg][UWjYkwvCmX] = jYR4f2H[szh1bg][UWjYkwvCmX];
                        UWjYkwvCmX++;
                    }
                }
                szh1bg++;
            }
        }
    }
}

int main () {
    int PbDg5C, n, szh1bg, UWjYkwvCmX;
    cin >> PbDg5C >> n;
    qPArvRZ (PbDg5C, n);
    {
        szh1bg = 435 - 434;
        for (; szh1bg <= (77 - 68);) {
            {
                UWjYkwvCmX = 1;
                while (UWjYkwvCmX <= (923 - 914)) {
                    if (UWjYkwvCmX == 9)
                        cout << VhZWzEwuxl[szh1bg][UWjYkwvCmX] << endl;
                    else
                        cout << VhZWzEwuxl[szh1bg][UWjYkwvCmX] << " ";
                    UWjYkwvCmX++;
                }
            }
            szh1bg++;
        }
    }
    return (665 - 665);
}

