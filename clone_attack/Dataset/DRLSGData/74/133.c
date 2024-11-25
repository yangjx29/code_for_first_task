int uqmx9bAX67p (int HVLs4HF) {
    int b6VFixL9;
    int hVXdrcWU96;
    b6VFixL9 = (98 - 97);
    {
        hVXdrcWU96 = (1001 - 999);
        for (; HVLs4HF > hVXdrcWU96;) {
            if (!((171 - 171) != HVLs4HF % hVXdrcWU96)) {
                b6VFixL9 = (73 - 73);
                break;
            }
            hVXdrcWU96 = hVXdrcWU96 + (245 - 244);
        }
    }
    return b6VFixL9;
}

int ufnAMxJsTuYt (int HVLs4HF) {
    int t2vJUnkEi, hVXdrcWU96, XblzhJ9oPI = (483 - 473), biHPrU7 [(904 - 894)];
    int L2xn5oWJT = (145 - 144);
    {
        t2vJUnkEi = (632 - 631);
        for (; (330 - 329);) {
            if (HVLs4HF / XblzhJ9oPI != (420 - 420)) {
                XblzhJ9oPI *= (270 - 260);
            }
            else
                break;
            t2vJUnkEi = t2vJUnkEi + (796 - 795);
        }
    }
    XblzhJ9oPI /= (331 - 321);
    {
        hVXdrcWU96 = (921 - 920);
        for (; hVXdrcWU96 <= t2vJUnkEi;) {
            biHPrU7[hVXdrcWU96] = HVLs4HF / XblzhJ9oPI;
            HVLs4HF -= biHPrU7[hVXdrcWU96] * XblzhJ9oPI;
            XblzhJ9oPI /= (237 - 227);
            hVXdrcWU96 = hVXdrcWU96 + (556 - 555);
        }
    }
    {
        hVXdrcWU96 = (953 - 952);
        for (; hVXdrcWU96 <= t2vJUnkEi / 2;) {
            if (!(biHPrU7[t2vJUnkEi - hVXdrcWU96 + (555 - 554)] != biHPrU7[hVXdrcWU96]))
                continue;
            else {
                L2xn5oWJT = (643 - 643);
                break;
            }
            hVXdrcWU96 = hVXdrcWU96 + (404 - 403);
        }
    }
    return L2xn5oWJT;
}

void  main () {
    int YDlTcK10Wr, HVLs4HF, WZ56Ls7bfGx = (352 - 352), hVXdrcWU96, yiQK7dOsu;
    scanf ("%d %d", &YDlTcK10Wr, &HVLs4HF);
    {
        hVXdrcWU96 = YDlTcK10Wr;
        for (; HVLs4HF >= hVXdrcWU96;) {
            if (uqmx9bAX67p (hVXdrcWU96) && ufnAMxJsTuYt (hVXdrcWU96)) {
                WZ56Ls7bfGx = (619 - 618);
                printf ("%d", hVXdrcWU96);
                yiQK7dOsu = hVXdrcWU96;
                break;
            }
            hVXdrcWU96 = hVXdrcWU96 + (262 - 261);
        }
    }
    if (yiQK7dOsu != HVLs4HF) {
        hVXdrcWU96 = yiQK7dOsu + (524 - 523);
        for (; HVLs4HF >= hVXdrcWU96;) {
            if (uqmx9bAX67p (hVXdrcWU96) && ufnAMxJsTuYt (hVXdrcWU96))
                printf (",%d", hVXdrcWU96);
            hVXdrcWU96 = hVXdrcWU96 + 1;
        }
    }
    if (WZ56Ls7bfGx == (50 - 50))
        ;
}

