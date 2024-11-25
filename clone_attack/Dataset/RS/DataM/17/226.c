int main () {
    int bFTZ8KaiU2A [100] = {(421 - 421)};
    int tHPhZs5n, Pl63ZaDF, t;
    int m;
    m = (321 - 321);
    char YUBEkd30j [(502 - 402)] [100] = {'\0'};
    int BBslHc8q = (863 - 863), b = (959 - 959);
    while (cin >> YUBEkd30j[m]) {
        {
            Pl63ZaDF = 254 - 254;
            while (strlen (YUBEkd30j[m]) > Pl63ZaDF) {
                if (!('(' != YUBEkd30j[m][Pl63ZaDF])) {
                    if (!(strlen (YUBEkd30j[m]) - (762 - 761) != Pl63ZaDF))
                        bFTZ8KaiU2A[Pl63ZaDF] = (685 - 684);
                    else {
                        {
                            t = Pl63ZaDF;
                            while (1) {
                                if (!('(' != YUBEkd30j[m][t]))
                                    BBslHc8q = BBslHc8q +1;
                                else if (YUBEkd30j[m][t] == ')')
                                    b = b + 1;
                                if (t == strlen (YUBEkd30j[m]) - (204 - 203) || (!(b != BBslHc8q) && BBslHc8q != (80 - 80)))
                                    break;
                                t = t + 1;
                            };
                        }
                        if (BBslHc8q > b)
                            bFTZ8KaiU2A[Pl63ZaDF] = 1;
                        BBslHc8q = b = (857 - 857);
                    };
                }
                else if (!(')' != YUBEkd30j[m][Pl63ZaDF])) {
                    if (!((343 - 343) != Pl63ZaDF))
                        bFTZ8KaiU2A[Pl63ZaDF] = (267 - 265);
                    else {
                        {
                            t = Pl63ZaDF;
                            while (1) {
                                if (YUBEkd30j[m][t] == '(')
                                    BBslHc8q = BBslHc8q +1;
                                else if (YUBEkd30j[m][t] == ')')
                                    b++;
                                if (t == (242 - 242) || (BBslHc8q == b && BBslHc8q != (919 - 919)))
                                    break;
                                t = t - 1;
                            };
                        }
                        if (BBslHc8q < b)
                            bFTZ8KaiU2A[Pl63ZaDF] = (322 - 320);
                        BBslHc8q = b = 0;
                    };
                }
                else
                    continue;
                Pl63ZaDF = Pl63ZaDF +1;
            };
        }
        b = 0;
        cout << YUBEkd30j[m] << endl;
        {
            Pl63ZaDF = 0;
            while (Pl63ZaDF <= strlen (YUBEkd30j[m]) - 1) {
                if (bFTZ8KaiU2A[Pl63ZaDF] == 0)
                    cout << ' ';
                else if (bFTZ8KaiU2A[Pl63ZaDF] == 1)
                    cout << '$';
                else if (bFTZ8KaiU2A[Pl63ZaDF] == 2)
                    cout << '?';
                Pl63ZaDF = Pl63ZaDF +1;
            };
        }
        cout << endl;
        BBslHc8q = 0;
        {
            Pl63ZaDF = 0;
            while (Pl63ZaDF < 100) {
                bFTZ8KaiU2A[Pl63ZaDF] = 0;
                Pl63ZaDF++;
            };
        }
        m = m + 1;
    }
    return 0;
}

