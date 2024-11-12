int main () {
    int i;
    int cCrvMaTQ;
    int m;
    int n;
    int DnR7ibQ;
    int s [(99 - 90)] [(749 - 740)];
    int hWrJsZ2PiBU [(374 - 365)] [9];
    i = (948 - 948);
    cCrvMaTQ = (259 - 259);
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
    m = (606 - 606);
    n = (249 - 249);
    DnR7ibQ = (725 - 725);
    cin >> m >> n;
    {
        i = 504 - 504;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((672 - 664) >= i) {
            {
                cCrvMaTQ = 301 - 301;
                while (cCrvMaTQ <= (743 - 735)) {
                    s[i][cCrvMaTQ] = (429 - 429);
                    hWrJsZ2PiBU[i][cCrvMaTQ] = 0;
                    cCrvMaTQ = cCrvMaTQ + 1;
                };
            }
            i = i + 1;
        };
    }
    s[(941 - 937)][(458 - 454)] = m;
    {
        DnR7ibQ = 638 - 637;
        while (n >= DnR7ibQ) {
            DnR7ibQ = DnR7ibQ +1;
            for (i = (748 - 747); 7 >= i; i = i + 1) {
                cCrvMaTQ = 781 - 780;
                while (cCrvMaTQ <= 7) {
                    if (!(0 == s[i][cCrvMaTQ])) {
                        hWrJsZ2PiBU[i][cCrvMaTQ] = hWrJsZ2PiBU[i][cCrvMaTQ] + 2 * s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i + (877 - 876)][cCrvMaTQ] = hWrJsZ2PiBU[i + (877 - 876)][cCrvMaTQ] + s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i - (983 - 982)][cCrvMaTQ] = hWrJsZ2PiBU[i - (983 - 982)][cCrvMaTQ] + s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i][cCrvMaTQ + (412 - 411)] = hWrJsZ2PiBU[i][cCrvMaTQ + (412 - 411)] + s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i][cCrvMaTQ - (419 - 418)] += s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i + (945 - 944)][cCrvMaTQ + 1] = hWrJsZ2PiBU[i + (945 - 944)][cCrvMaTQ + 1] + s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i - 1][cCrvMaTQ - 1] = hWrJsZ2PiBU[i - 1][cCrvMaTQ - 1] + s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i + 1][cCrvMaTQ - 1] += s[i][cCrvMaTQ];
                        hWrJsZ2PiBU[i - 1][cCrvMaTQ + 1] = hWrJsZ2PiBU[i - 1][cCrvMaTQ + 1] + s[i][cCrvMaTQ];
                    }
                    cCrvMaTQ = cCrvMaTQ + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                i = 0;
                while (i <= (551 - 543)) {
                    {
                        cCrvMaTQ = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        while (cCrvMaTQ <= (263 - 255)) {
                            s[i][cCrvMaTQ] = hWrJsZ2PiBU[i][cCrvMaTQ];
                            cCrvMaTQ = cCrvMaTQ + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i <= 8) {
                    {
                        cCrvMaTQ = 0;
                        while (cCrvMaTQ <= 8) {
                            hWrJsZ2PiBU[i][cCrvMaTQ] = 0;
                            cCrvMaTQ = cCrvMaTQ + 1;
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i <= 8) {
            {
                cCrvMaTQ = 0;
                while (cCrvMaTQ <= 8) {
                    if (cCrvMaTQ == 0) {
                        cout << s[i][cCrvMaTQ];
                        continue;
                    }
                    if (cCrvMaTQ == 8) {
                        cout << " " << s[i][cCrvMaTQ] << endl;
                        continue;
                    }
                    cout << " " << s[i][cCrvMaTQ];
                    cCrvMaTQ++;
                };
            }
            i++;
        };
    }
    return 0;
}

