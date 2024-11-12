main () {
    int t [(876 - 872)] = {(171 - 170), (74 - 72), (742 - 739), (710 - 706)}, wPD4831 [(462 - 458)];
    int eAoJrl, CE1v7QoAx, cOciIH9n, FYWb58dFEkR, T8w6Amr, j, n;
    char ZUvCDJo1 [4] [(930 - 920)];
    {
        eAoJrl = 90 - 80;
        while (50 >= eAoJrl) {
            {
                CE1v7QoAx = 10;
                while (CE1v7QoAx <= 50) {
                    {
                        cOciIH9n = 10;
                        while (cOciIH9n <= 50) {
                            {
                                FYWb58dFEkR = 10;
                                while (50 >= FYWb58dFEkR) {
                                    if (eAoJrl + CE1v7QoAx == cOciIH9n + FYWb58dFEkR &&eAoJrl + FYWb58dFEkR > cOciIH9n + CE1v7QoAx &&eAoJrl + cOciIH9n < CE1v7QoAx) {
                                        wPD4831[(16 - 16)] = eAoJrl;
                                        wPD4831[(341 - 340)] = CE1v7QoAx;
                                        wPD4831[(324 - 322)] = cOciIH9n;
                                        wPD4831[(990 - 987)] = FYWb58dFEkR;
                                        t[(853 - 853)] = eAoJrl;
                                        t[1] = CE1v7QoAx;
                                        t[(667 - 665)] = cOciIH9n;
                                        t[3] = FYWb58dFEkR;
                                    }
                                    FYWb58dFEkR = FYWb58dFEkR +10;
                                };
                            }
                            cOciIH9n = cOciIH9n + 10;
                        };
                    }
                    CE1v7QoAx = CE1v7QoAx +10;
                };
            }
            eAoJrl = eAoJrl + 10;
        };
    }
    {
        j = 0;
        while (3 > j) {
            {
                T8w6Amr = 0;
                while (T8w6Amr < 3 - j) {
                    if (wPD4831[T8w6Amr] < wPD4831[T8w6Amr +1]) {
                        n = wPD4831[T8w6Amr +1];
                        wPD4831[T8w6Amr +1] = wPD4831[T8w6Amr];
                        wPD4831[T8w6Amr] = n;
                    }
                    T8w6Amr++;
                };
            }
            j++;
        };
    }
    {
        T8w6Amr = 0;
        while (T8w6Amr < 4) {
            for (j = 0; 4 > j; j++) {
                if (t[j] == wPD4831[T8w6Amr]) {
                    if (j == 0) {
                        printf ("z %d\n", t[0]);
                    }
                    else if (j == 1) {
                        printf ("q %d\n", t[1]);
                    }
                    else if (j == 2) {
                        printf ("s %d\n", t[2]);
                    }
                    else if (j == 3) {
                        printf ("l %d\n", t[3]);
                    }
                    else {
                    };
                };
            }
            T8w6Amr++;
        };
    };
}

