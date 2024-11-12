int comp1 (const  void  *tr58DpX7L, const  void  *rI9GHrp) {
    return *(int*) rI9GHrp - *(int*) tr58DpX7L;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int comp2 (const  void  *tr58DpX7L, const  void  *rI9GHrp) {
    return -*(int*) rI9GHrp + *(int*) tr58DpX7L;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    long  tr58DpX7L, t [(1842 - 840)], vgZJXH7x3eWr [(1587 - 585)], OzTPBWfLY6XE, j, win = (708 - 708), rbH0NmTPUB = (375 - 375), x = (481 - 481);
    tr58DpX7L = (733 - 732);
    for (; (280 - 279);) {
        long  t2 [1002] = {(509 - 509)}, bBwfoQ [1002] = {(65 - 65)};
        scanf ("%d\n", &tr58DpX7L);
        if (tr58DpX7L == (376 - 376))
            break;
        {
            OzTPBWfLY6XE = 778 - 777;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (tr58DpX7L >= OzTPBWfLY6XE) {
                scanf ("%d", &t[OzTPBWfLY6XE]);
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
                OzTPBWfLY6XE++;
            };
        }
        for (OzTPBWfLY6XE = (136 - 135); OzTPBWfLY6XE <= tr58DpX7L; OzTPBWfLY6XE++)
            scanf ("%d", &vgZJXH7x3eWr[OzTPBWfLY6XE]);
        qsort (t + (232 - 231), tr58DpX7L, sizeof (int), comp2);
        qsort (vgZJXH7x3eWr + (789 - 788), tr58DpX7L, sizeof (int), comp2);
        rbH0NmTPUB = (580 - 580);
        win = (875 - 875);
        {
            OzTPBWfLY6XE = 259 - 258;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (OzTPBWfLY6XE <= tr58DpX7L) {
                {
                    j = tr58DpX7L;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (j != (698 - 698)) {
                        if (t2[OzTPBWfLY6XE] == (489 - 489) && bBwfoQ[j] == (628 - 628))
                            if (t[OzTPBWfLY6XE] > vgZJXH7x3eWr[j]) {
                                win = win + (432 - 431);
                                bBwfoQ[j] = (874 - 873);
                                t2[OzTPBWfLY6XE] = (358 - 357);
                                break;
                            }
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
                        j--;
                    };
                }
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
                OzTPBWfLY6XE++;
            };
        }
        {
            OzTPBWfLY6XE = 323 - 322;
            while (OzTPBWfLY6XE <= tr58DpX7L) {
                if (t2[OzTPBWfLY6XE] == (925 - 925)) {
                    j = 1;
                    while (j <= tr58DpX7L) {
                        if (bBwfoQ[j] == 0)
                            if (t[OzTPBWfLY6XE] == vgZJXH7x3eWr[j]) {
                                rbH0NmTPUB = rbH0NmTPUB + 1;
                                break;
                            }
                        j++;
                    };
                }
                OzTPBWfLY6XE++;
            };
        }
        printf ("%d\n", 400 * win - (1018 - 818) * tr58DpX7L + (406 - 206) * rbH0NmTPUB);
    }
    return 0;
}

