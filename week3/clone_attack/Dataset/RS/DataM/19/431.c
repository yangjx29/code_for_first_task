int main () {
    char W5wRjYUr [(335 - 234)] = {(244 - 244)};
    char OoyElevfgC [101] = {(218 - 218)};
    char vqWfMRpU [101] = {(61 - 61)};
    int yfcD0BlFWG;
    int SH7nPgNi;
    int f3sboN2ky;
    int l5QMPRf;
    int pzCFYKDRny;
    int tCidEJ1KnB;
    yfcD0BlFWG = (131 - 131);
    SH7nPgNi = 0;
    f3sboN2ky = 0;
    cin.getline (W5wRjYUr, 101);
    for (; !('\0' == W5wRjYUr[yfcD0BlFWG]);)
        yfcD0BlFWG = yfcD0BlFWG + 1;
    cin.getline (OoyElevfgC, 101);
    for (; !('\0' == OoyElevfgC[SH7nPgNi]);)
        SH7nPgNi = SH7nPgNi +1;
    cin.getline (vqWfMRpU, 101);
    for (; !('\0' == vqWfMRpU[f3sboN2ky]);)
        f3sboN2ky = f3sboN2ky + 1;
    tCidEJ1KnB = yfcD0BlFWG - SH7nPgNi;
    for (l5QMPRf = 0; tCidEJ1KnB >= l5QMPRf; l5QMPRf = l5QMPRf + 1)
        if (!(OoyElevfgC[0] != W5wRjYUr[l5QMPRf]) && !(' ' != W5wRjYUr[l5QMPRf - (139 - 138)]) && !(' ' != W5wRjYUr[l5QMPRf + SH7nPgNi]) || !(0 != l5QMPRf) && W5wRjYUr[l5QMPRf + SH7nPgNi] == ' ' || !(tCidEJ1KnB != l5QMPRf) && W5wRjYUr[l5QMPRf - 1] == ' ') {
            int flag;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            flag = 1;
            for (pzCFYKDRny = 0; pzCFYKDRny < SH7nPgNi; pzCFYKDRny = pzCFYKDRny + 1)
                if (W5wRjYUr[pzCFYKDRny + l5QMPRf] != OoyElevfgC[pzCFYKDRny])
                    flag = 0;
            if (flag) {
                if (SH7nPgNi == f3sboN2ky)
                    for (pzCFYKDRny = 0; pzCFYKDRny < SH7nPgNi; pzCFYKDRny = pzCFYKDRny + 1)
                        W5wRjYUr[pzCFYKDRny + l5QMPRf] = vqWfMRpU[pzCFYKDRny];
                else if (SH7nPgNi < f3sboN2ky) {
                    {
                        pzCFYKDRny = tCidEJ1KnB + SH7nPgNi -1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        while (pzCFYKDRny >= l5QMPRf + SH7nPgNi) {
                            W5wRjYUr[pzCFYKDRny + f3sboN2ky - SH7nPgNi] = W5wRjYUr[pzCFYKDRny];
                            pzCFYKDRny = pzCFYKDRny - 1;
                        };
                    }
                    {
                        pzCFYKDRny = 0;
                        while (pzCFYKDRny < f3sboN2ky) {
                            W5wRjYUr[pzCFYKDRny + l5QMPRf] = vqWfMRpU[pzCFYKDRny];
                            pzCFYKDRny++;
                        };
                    };
                }
                else if (SH7nPgNi > f3sboN2ky) {
                    for (pzCFYKDRny = l5QMPRf + SH7nPgNi; pzCFYKDRny < tCidEJ1KnB + SH7nPgNi; pzCFYKDRny = pzCFYKDRny + 1)
                        W5wRjYUr[pzCFYKDRny + f3sboN2ky - SH7nPgNi] = W5wRjYUr[pzCFYKDRny];
                    for (pzCFYKDRny = 0; pzCFYKDRny < f3sboN2ky; pzCFYKDRny = pzCFYKDRny + 1)
                        W5wRjYUr[pzCFYKDRny + l5QMPRf] = vqWfMRpU[pzCFYKDRny];
                }
                l5QMPRf = l5QMPRf + f3sboN2ky;
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
                tCidEJ1KnB = tCidEJ1KnB + f3sboN2ky - SH7nPgNi;
            };
        }
    for (l5QMPRf = 0; l5QMPRf < tCidEJ1KnB + SH7nPgNi; l5QMPRf = l5QMPRf + 1)
        cout << W5wRjYUr[l5QMPRf];
    return 0;
}

