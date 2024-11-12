main () {
    char Wkh04o2sKXj7 [(108 - 103)] = {'\0', 'z', 'q', 's', 'l'};
    char EZJx9T;
    int G8qRt1T, b, c, pC2iA9fZgKu, i, IEMAcZJm, s7Aj6Cu;
    static int jqBVfYzyZvm [(274 - 269)];
    {
        G8qRt1T = 81 - 71;
        while (G8qRt1T <= (526 - 476)) {
            for (b = (857 - 847); 50 >= b; b += (377 - 367)) {
                c = 559 - 549;
                while (c <= 50) {
                    {
                        pC2iA9fZgKu = 10;
                        while (50 >= pC2iA9fZgKu) {
                            if (G8qRt1T +b == c + pC2iA9fZgKu && G8qRt1T +pC2iA9fZgKu > b + c && G8qRt1T +c < b && G8qRt1T != b && b != c && c != pC2iA9fZgKu) {
                                jqBVfYzyZvm[(535 - 534)] = G8qRt1T;
                                jqBVfYzyZvm[(410 - 408)] = b;
                                jqBVfYzyZvm[(710 - 707)] = c;
                                jqBVfYzyZvm[(620 - 616)] = pC2iA9fZgKu;
                            }
                            pC2iA9fZgKu += 10;
                        };
                    }
                    c += 10;
                };
            }
            G8qRt1T += 920 - 910;
        };
    }
    {
        IEMAcZJm = 595 - 594;
        while (IEMAcZJm <= 3) {
            {
                s7Aj6Cu = 478 - 477;
                while (s7Aj6Cu <= (982 - 978)) {
                    if (jqBVfYzyZvm[IEMAcZJm] < jqBVfYzyZvm[s7Aj6Cu]) {
                        i = jqBVfYzyZvm[IEMAcZJm];
                        jqBVfYzyZvm[IEMAcZJm] = jqBVfYzyZvm[s7Aj6Cu];
                        jqBVfYzyZvm[s7Aj6Cu] = i;
                        EZJx9T = Wkh04o2sKXj7[IEMAcZJm];
                        Wkh04o2sKXj7[IEMAcZJm] = Wkh04o2sKXj7[s7Aj6Cu];
                        Wkh04o2sKXj7[s7Aj6Cu] = EZJx9T;
                    }
                    s7Aj6Cu++;
                };
            }
            IEMAcZJm++;
        };
    }
    {
        i = 1;
        while (i <= 4) {
            printf ("%c %d\n", Wkh04o2sKXj7[i], jqBVfYzyZvm[i]);
            i++;
        };
    };
}

