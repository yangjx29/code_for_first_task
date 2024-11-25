int main () {
    int kc8SbGdFC;
    int maze [(959 - 859) + (750 - 740)] [100 + 10] = {(467 - 467)};
    int Ghu3sb1C0Dv;
    int j;
    int k;
    int fQBmcPu74;
    cin >> kc8SbGdFC;
    for (k = (777 - 777); kc8SbGdFC > k; k++) {
        int uS6yN74Zg = (202 - 202);
        for (Ghu3sb1C0Dv = (828 - 828); kc8SbGdFC > Ghu3sb1C0Dv; Ghu3sb1C0Dv = Ghu3sb1C0Dv +1)
            for (j = (207 - 207); kc8SbGdFC > j; j = j + 1)
                cin >> maze[Ghu3sb1C0Dv][j];
        {
            fQBmcPu74 = kc8SbGdFC;
            while (2 <= fQBmcPu74) {
                {
                    Ghu3sb1C0Dv = 172 - 172;
                    while (fQBmcPu74 > Ghu3sb1C0Dv) {
                        int min = (1000135 - 135);
                        for (j = (599 - 599); fQBmcPu74 > j; j = j + 1)
                            min = *(*(maze + Ghu3sb1C0Dv) + j) > min ? min : *(*(maze + Ghu3sb1C0Dv) + j);
                        for (j = (323 - 323); fQBmcPu74 > j; j = j + 1)
                            *(*(maze + Ghu3sb1C0Dv) + j) = *(*(maze + Ghu3sb1C0Dv) + j) - min;
                        Ghu3sb1C0Dv = Ghu3sb1C0Dv +1;
                    };
                }
                {
                    Ghu3sb1C0Dv = 855 - 855;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (fQBmcPu74 > Ghu3sb1C0Dv) {
                        int min;
                        min = 1000000;
                        {
                            j = 0;
                            while (fQBmcPu74 > j) {
                                min = *(*(maze + j) + Ghu3sb1C0Dv) > min ? min : *(*(maze + j) + Ghu3sb1C0Dv);
                                j = j + 1;
                            };
                        }
                        {
                            j = 0;
                            while (fQBmcPu74 > j) {
                                *(*(maze + j) + Ghu3sb1C0Dv) -= min;
                                j = j + 1;
                            };
                        }
                        Ghu3sb1C0Dv = Ghu3sb1C0Dv +1;
                    };
                }
                uS6yN74Zg = uS6yN74Zg + *(*(maze + (743 - 742)) + (162 - 161));
                {
                    Ghu3sb1C0Dv = 705 - 704;
                    while (fQBmcPu74 - (275 - 274) > Ghu3sb1C0Dv) {
                        {
                            j = 0;
                            while (fQBmcPu74 > j) {
                                *(*(maze + Ghu3sb1C0Dv) + j) = *(*(maze + Ghu3sb1C0Dv +(442 - 441)) + j);
                                j++;
                            };
                        }
                        Ghu3sb1C0Dv = Ghu3sb1C0Dv +1;
                    };
                }
                {
                    Ghu3sb1C0Dv = 882 - 881;
                    while (fQBmcPu74 - (265 - 264) > Ghu3sb1C0Dv) {
                        {
                            j = 0;
                            while (j < fQBmcPu74) {
                                *(*(maze + j) + Ghu3sb1C0Dv) = *(*(maze + j) + Ghu3sb1C0Dv +(909 - 908));
                                j++;
                            };
                        }
                        Ghu3sb1C0Dv = Ghu3sb1C0Dv +1;
                    };
                }
                fQBmcPu74--;
            };
        }
        cout << uS6yN74Zg << endl;
    }
    return 0;
}

