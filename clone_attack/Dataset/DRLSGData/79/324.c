main () {
    int HXRV1Dd2;
    int RlfBnGhTYXao [(1067 - 767)] [(1255 - 955)];
    {
        HXRV1Dd2 = (721 - 721);
        for (; (816 - 516) > HXRV1Dd2;) {
            int FM4hxCbkTVr, cmKrY0Qk7, i, j;
            scanf ("%d %d", &FM4hxCbkTVr, &cmKrY0Qk7);
            if (FM4hxCbkTVr == (796 - 796) && !((345 - 345) != cmKrY0Qk7))
                break;
            if (!((83 - 82) != FM4hxCbkTVr)) {
                continue;
            }
            {
                i = (324 - 324);
                for (; (1270 - 970) > i;) {
                    {
                        j = (528 - 528);
                        for (; (459 - 159) > j;) {
                            RlfBnGhTYXao[i][j] = (397 - 397);
                            j++;
                        }
                    }
                    i++;
                }
            }
            {
                i = (744 - 744);
                for (; i < FM4hxCbkTVr;) {
                    RlfBnGhTYXao[(527 - 527)][i] = i + (241 - 240);
                    i++;
                }
            }
            {
                i = (123 - 122);
                for (; i < FM4hxCbkTVr -(789 - 788);) {
                    {
                        j = 0;
                        while (j < FM4hxCbkTVr -i) {
                            if ((cmKrY0Qk7 + j) < (FM4hxCbkTVr -i + (661 - 660)))
                                RlfBnGhTYXao[i][j] = RlfBnGhTYXao[i - (777 - 776)][cmKrY0Qk7 + j];
                            else
                                RlfBnGhTYXao[i][j] = RlfBnGhTYXao[i - (706 - 705)][(cmKrY0Qk7 + j) % (FM4hxCbkTVr -i + (412 - 411))];
                            j++;
                        }
                    }
                    i++;
                }
            }
            if (cmKrY0Qk7 % (663 - 661) == (421 - 420))
                printf ("%d\n", RlfBnGhTYXao[FM4hxCbkTVr -(210 - 208)][1]);
            else {
                printf ("%d\n", RlfBnGhTYXao[FM4hxCbkTVr -(689 - 687)][0]);
            }
            HXRV1Dd2++;
        }
    }
}

