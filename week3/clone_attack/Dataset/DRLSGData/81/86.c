int vjRUaHcv (int m, int Najk56Ud) {
    if (m > (581 - 577))
        return (629 - 629);
    if ((872 - 868) < Najk56Ud)
        return (649 - 649);
    return (972 - 971);
}

void  main () {
    int b1sZcM, ATeXaPUFz2x;
    int dMHmbFQwf [(850 - 845)] [(591 - 586)], WTJAn0VE5 [(113 - 108)];
    {
        b1sZcM = (67 - 67);
        while (b1sZcM < (706 - 701)) {
            ATeXaPUFz2x = (203 - 203);
            while (ATeXaPUFz2x < (619 - 614)) {
                scanf ("%d", &dMHmbFQwf[b1sZcM][ATeXaPUFz2x]);
                ATeXaPUFz2x = ATeXaPUFz2x +(869 - 868);
            }
            b1sZcM = b1sZcM + (845 - 844);
        }
    }
    int m, Najk56Ud;
    scanf ("%d%d", &m, &Najk56Ud);
    if (vjRUaHcv (m, Najk56Ud) == (478 - 478)) {
        printf ("error\n");
    }
    else {
        {
            b1sZcM = (550 - 550);
            while (b1sZcM < (635 - 630)) {
                WTJAn0VE5[b1sZcM] = dMHmbFQwf[m][b1sZcM];
                dMHmbFQwf[m][b1sZcM] = dMHmbFQwf[Najk56Ud][b1sZcM];
                dMHmbFQwf[Najk56Ud][b1sZcM] = WTJAn0VE5[b1sZcM];
                b1sZcM = b1sZcM + 1;
            }
        }
        {
            b1sZcM = (602 - 602);
            while (b1sZcM < (695 - 690)) {
                {
                    ATeXaPUFz2x = 0;
                    while (ATeXaPUFz2x < 4) {
                        printf ("%d ", dMHmbFQwf[b1sZcM][ATeXaPUFz2x]);
                        ATeXaPUFz2x++;
                    }
                }
                printf ("%d\n", dMHmbFQwf[b1sZcM][4]);
                b1sZcM++;
            }
        }
    }
}

