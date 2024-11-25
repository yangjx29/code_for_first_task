int main (void ) {
    int g2iTUoV6;
    char FK0rXOj8zUiB [(793 - 537)] = {'\0'};
    char re83YQor5cxz [(523 - 423)] = {'\0'};
    char esIcBibE;
    char UWOKBU [(482 - 382)] = {'\0'};
    int YfNbeqwY9tT;
    int on0xbUR4fpXC;
    scanf ("%s", UWOKBU);
    scanf ("%s", re83YQor5cxz);
    on0xbUR4fpXC = (303 - 303);
    esIcBibE = '\0';
    YfNbeqwY9tT = (715 - 715);
    g2iTUoV6 = (112 - 112);
    for (; esIcBibE != '\n';) {
        esIcBibE = getchar ();
        if (esIcBibE != '\n') {
            FK0rXOj8zUiB[YfNbeqwY9tT] = esIcBibE;
            YfNbeqwY9tT++;
        }
    }
    {
        YfNbeqwY9tT = (1062 - 107) - (1781 - 826);
        while (YfNbeqwY9tT < strlen (FK0rXOj8zUiB)) {
            if (FK0rXOj8zUiB[YfNbeqwY9tT] == UWOKBU[(241 - 241)]) {
                g2iTUoV6 = YfNbeqwY9tT;
                {
                    on0xbUR4fpXC = (1224 - 404) - (1193 - 373);
                    while (on0xbUR4fpXC < strlen (UWOKBU)) {
                        if (UWOKBU[on0xbUR4fpXC] != FK0rXOj8zUiB[g2iTUoV6]) {
                            break;
                        }
                        on0xbUR4fpXC++;
                        g2iTUoV6++;
                    }
                }
                if (on0xbUR4fpXC == strlen (UWOKBU)) {
                    g2iTUoV6 = YfNbeqwY9tT;
                    {
                        on0xbUR4fpXC = (1338 - 634) - (822 - 118);
                        while (on0xbUR4fpXC < strlen (re83YQor5cxz)) {
                            FK0rXOj8zUiB[g2iTUoV6] = re83YQor5cxz[on0xbUR4fpXC];
                            on0xbUR4fpXC++;
                            g2iTUoV6++;
                        }
                    }
                    break;
                }
            }
            YfNbeqwY9tT++;
        }
    }
    printf ("%s\n", FK0rXOj8zUiB);
    return (787 - 787);
}

