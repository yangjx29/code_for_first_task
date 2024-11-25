int main () {
    int a [(776 - 676)] [(270 - 170)], lYIHqv8dDi, PkWFKVEBv, SBYoMxUPlbA, Df8V4Mqx = (467 - 467), rhR5Ak6FZvY, k46CeL, lz8pRtYnOQZi;
    cin >> SBYoMxUPlbA;
    for (rhR5Ak6FZvY = (428 - 427); rhR5Ak6FZvY <= SBYoMxUPlbA; rhR5Ak6FZvY++) {
        for (lYIHqv8dDi = (276 - 276); lYIHqv8dDi < SBYoMxUPlbA; lYIHqv8dDi++)
            for (PkWFKVEBv = (299 - 299); PkWFKVEBv < SBYoMxUPlbA; PkWFKVEBv = PkWFKVEBv +1) {
                cin >> a[lYIHqv8dDi][PkWFKVEBv];
            }
        {
            k46CeL = 918 - 917;
            while (k46CeL < SBYoMxUPlbA) {
                k46CeL = k46CeL + 1;
                {
                    lYIHqv8dDi = 202 - 202;
                    while (lYIHqv8dDi < SBYoMxUPlbA) {
                        lz8pRtYnOQZi = a[lYIHqv8dDi][(794 - 794)];
                        {
                            PkWFKVEBv = 132 - 131;
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
                            while (PkWFKVEBv < SBYoMxUPlbA) {
                                if (a[lYIHqv8dDi][PkWFKVEBv] < lz8pRtYnOQZi)
                                    lz8pRtYnOQZi = a[lYIHqv8dDi][PkWFKVEBv];
                                PkWFKVEBv = PkWFKVEBv +1;
                            };
                        }
                        {
                            PkWFKVEBv = 0;
                            while (PkWFKVEBv < SBYoMxUPlbA) {
                                a[lYIHqv8dDi][PkWFKVEBv] = a[lYIHqv8dDi][PkWFKVEBv] - lz8pRtYnOQZi;
                                PkWFKVEBv = PkWFKVEBv +1;
                            };
                        }
                        lYIHqv8dDi = lYIHqv8dDi + 1;
                    };
                }
                {
                    PkWFKVEBv = 0;
                    while (PkWFKVEBv < SBYoMxUPlbA) {
                        lz8pRtYnOQZi = a[0][PkWFKVEBv];
                        {
                            lYIHqv8dDi = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            while (lYIHqv8dDi < SBYoMxUPlbA) {
                                if (a[lYIHqv8dDi][PkWFKVEBv] < lz8pRtYnOQZi)
                                    lz8pRtYnOQZi = a[lYIHqv8dDi][PkWFKVEBv];
                                lYIHqv8dDi = lYIHqv8dDi + 1;
                            };
                        }
                        {
                            lYIHqv8dDi = 0;
                            while (lYIHqv8dDi < SBYoMxUPlbA) {
                                a[lYIHqv8dDi][PkWFKVEBv] -= lz8pRtYnOQZi;
                                lYIHqv8dDi++;
                            };
                        }
                        PkWFKVEBv++;
                    };
                }
                Df8V4Mqx += a[1][1];
                for (lYIHqv8dDi = 2; lYIHqv8dDi < SBYoMxUPlbA; lYIHqv8dDi++) {
                    PkWFKVEBv = 0;
                    while (PkWFKVEBv < SBYoMxUPlbA) {
                        a[lYIHqv8dDi - 1][PkWFKVEBv] = a[lYIHqv8dDi][PkWFKVEBv];
                        PkWFKVEBv++;
                    };
                }
                for (PkWFKVEBv = 2; PkWFKVEBv < SBYoMxUPlbA; PkWFKVEBv++) {
                    lYIHqv8dDi = 0;
                    while (lYIHqv8dDi < SBYoMxUPlbA) {
                        a[lYIHqv8dDi][PkWFKVEBv -1] = a[lYIHqv8dDi][PkWFKVEBv];
                        lYIHqv8dDi++;
                    };
                };
            };
        }
        cout << Df8V4Mqx << endl;
        Df8V4Mqx = 0;
    }
    return 0;
}

