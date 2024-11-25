char a [(1088 - 788)], b [(583 - 283)];
int cPJL3m6 [(804 - 504)] = {(805 - 805)};

int main () {
    int a9TzhnHoX4d, xNYeK0, lAkV35WS = (306 - 306), flag = (900 - 900);
    cin.getline (a, 300);
    a9TzhnHoX4d = strlen (a);
    cin.getline (b, 300);
    xNYeK0 = strlen (b);
    if (a9TzhnHoX4d >= xNYeK0) {
        {
            int aKesjA6pL = xNYeK0 - (858 - 857);
            while (aKesjA6pL >= (928 - 928)) {
                cPJL3m6[lAkV35WS] = cPJL3m6[lAkV35WS] + a[aKesjA6pL + a9TzhnHoX4d - xNYeK0] - '0' + b[aKesjA6pL] - '0';
                aKesjA6pL--;
                if (cPJL3m6[lAkV35WS] >= (461 - 451)) {
                    cPJL3m6[lAkV35WS] = cPJL3m6[lAkV35WS] - (1005 - 995);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    cPJL3m6[lAkV35WS + (100 - 99)] = cPJL3m6[lAkV35WS + (100 - 99)] + (473 - 472);
                }
                lAkV35WS = lAkV35WS + 1;
            };
        }
        {
            int iRj1bi2tJM = a9TzhnHoX4d - xNYeK0 - (174 - 173);
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
            while (0 <= iRj1bi2tJM) {
                cPJL3m6[lAkV35WS] = cPJL3m6[lAkV35WS] + a[iRj1bi2tJM] - '0';
                iRj1bi2tJM = iRj1bi2tJM - 1;
                if (cPJL3m6[lAkV35WS] >= (544 - 534)) {
                    cPJL3m6[lAkV35WS] = cPJL3m6[lAkV35WS] - 10;
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
                    cPJL3m6[lAkV35WS + (477 - 476)] = cPJL3m6[lAkV35WS + (477 - 476)] + (265 - 264);
                }
                lAkV35WS = lAkV35WS + 1;
            };
        }
        if (cPJL3m6[lAkV35WS] == 0) {
            for (int iRj1bi2tJM = (lAkV35WS - 1);
            0 <= iRj1bi2tJM; iRj1bi2tJM--) {
                if (cPJL3m6[iRj1bi2tJM] != 0)
                    flag = 1;
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
                if (flag == 1)
                    cout << cPJL3m6[iRj1bi2tJM];
            }
            if (flag == 0)
                cout << "0" << endl;
        }
        else {
            int iRj1bi2tJM = (lAkV35WS);
            while (iRj1bi2tJM >= 0) {
                cout << cPJL3m6[iRj1bi2tJM];
                iRj1bi2tJM = iRj1bi2tJM - 1;
            };
        };
    }
    else {
        {
            int aKesjA6pL = a9TzhnHoX4d - 1;
            while (aKesjA6pL >= 0) {
                cPJL3m6[lAkV35WS] += b[aKesjA6pL + xNYeK0 - a9TzhnHoX4d] - '0' + a[aKesjA6pL] - '0';
                aKesjA6pL--;
                if (cPJL3m6[lAkV35WS] >= 10) {
                    cPJL3m6[lAkV35WS] -= 10;
                    cPJL3m6[lAkV35WS + 1] = cPJL3m6[lAkV35WS + 1] + 1;
                }
                lAkV35WS = lAkV35WS + 1;
            };
        }
        for (int iRj1bi2tJM = xNYeK0 - a9TzhnHoX4d - 1;
        iRj1bi2tJM >= 0; iRj1bi2tJM--) {
            cPJL3m6[lAkV35WS] += b[iRj1bi2tJM] - '0';
            if (cPJL3m6[lAkV35WS] >= 10) {
                cPJL3m6[lAkV35WS] -= 10;
                cPJL3m6[lAkV35WS + 1] += 1;
            }
            lAkV35WS++;
        }
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
        if (cPJL3m6[lAkV35WS] == 0)
            for (int iRj1bi2tJM = (lAkV35WS - 1);
            iRj1bi2tJM >= 0; iRj1bi2tJM--) {
                if (cPJL3m6[iRj1bi2tJM] != 0)
                    flag = 1;
                if (flag == 1)
                    cout << cPJL3m6[iRj1bi2tJM];
            }
        else
            for (int iRj1bi2tJM = (lAkV35WS);
            iRj1bi2tJM >= 0; iRj1bi2tJM--)
                cout << cPJL3m6[iRj1bi2tJM];
    }
    return 0;
}

