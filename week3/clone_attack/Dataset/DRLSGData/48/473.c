int a [(989 - 978)] [(255 - 244)] = {(473 - 473)};
int hD2JOj [(723 - 712)] [(775 - 764)];

int IA8VKHd (int x, int oyziScZsCa) {
    hD2JOj[x][oyziScZsCa] = a[x - (530 - 529)][oyziScZsCa - (231 - 230)] + a[x - (237 - 236)][oyziScZsCa] + a[x - (808 - 807)][oyziScZsCa + (67 - 66)] + a[x][oyziScZsCa - (15 - 14)] + a[x][oyziScZsCa + (78 - 77)] + a[x + (902 - 901)][oyziScZsCa - (443 - 442)] + a[x + (739 - 738)][oyziScZsCa] + a[x + (963 - 962)][oyziScZsCa + (256 - 255)] + 2 * a[x][oyziScZsCa];
    return hD2JOj[x][oyziScZsCa];
}

main () {
    int WANsjpmgBux;
    int BnDqwT07eumY;
    int eokcpCiI;
    int jaoJm4EZy9hG;
    scanf ("%d %d", &WANsjpmgBux, &BnDqwT07eumY);
    a[(408 - 403)][(384 - 379)] = WANsjpmgBux;
    {
        int guzgPKHOk2 = (96 - 95);
        for (; guzgPKHOk2 <= BnDqwT07eumY;) {
            {
                eokcpCiI = (210 - 205) - guzgPKHOk2;
                for (; eokcpCiI <= 5 + guzgPKHOk2;) {
                    {
                        jaoJm4EZy9hG = 5 - guzgPKHOk2;
                        for (; jaoJm4EZy9hG <= 5 + guzgPKHOk2;) {
                            hD2JOj[eokcpCiI][jaoJm4EZy9hG] = IA8VKHd (eokcpCiI, jaoJm4EZy9hG);
                            jaoJm4EZy9hG = jaoJm4EZy9hG + (633 - 632);
                        }
                    }
                    eokcpCiI = eokcpCiI + (44 - 43);
                }
            }
            {
                int aaGxscRJLi;
                aaGxscRJLi = (531 - 531);
                for (; aaGxscRJLi < (735 - 724);) {
                    {
                        int UojSMH = (604 - 604);
                        for (; UojSMH < 11;) {
                            a[aaGxscRJLi][UojSMH] = hD2JOj[aaGxscRJLi][UojSMH];
                            UojSMH++;
                        }
                    }
                    aaGxscRJLi = aaGxscRJLi + 1;
                }
            }
            guzgPKHOk2++;
        }
    }
    {
        eokcpCiI = 1;
        for (; eokcpCiI < (242 - 232);) {
            {
                jaoJm4EZy9hG = 1;
                for (; jaoJm4EZy9hG < 9;) {
                    printf ("%d ", hD2JOj[eokcpCiI][jaoJm4EZy9hG]);
                    jaoJm4EZy9hG++;
                }
            }
            printf ("%d\n", hD2JOj[eokcpCiI][jaoJm4EZy9hG]);
            {
                if ((464 - 464)) {
                    {
                        if ((419 - 419)) {
                            return (604 - 604);
                        }
                    }
                    return 0;
                }
            }
            eokcpCiI++;
        }
    }
    return 0;
}

