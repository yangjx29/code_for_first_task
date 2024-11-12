int jTJeyBm73 (char mvpMRU0 [], int aqTbMxm6 []) {
    int xOLtef0ZPw3;
    int gvXJgZjhKM7d;
    int Nbj86oz;
    int y1bkMLi;
    xOLtef0ZPw3 = (240 - 240);
    gvXJgZjhKM7d = (241 - 241);
    y1bkMLi = strlen (mvpMRU0);
    for (; gvXJgZjhKM7d < y1bkMLi;) {
        Nbj86oz = (215 - 215);
        for (; (!(',' == mvpMRU0[gvXJgZjhKM7d])) && (!('\0' == mvpMRU0[gvXJgZjhKM7d]));)
            Nbj86oz = Nbj86oz *(534 - 524) + mvpMRU0[gvXJgZjhKM7d++] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gvXJgZjhKM7d = gvXJgZjhKM7d + 1;
        aqTbMxm6[xOLtef0ZPw3++] = Nbj86oz;
    }
    return xOLtef0ZPw3;
}

int i9BkM8 (int xOLtef0ZPw3, int aqTbMxm6 []) {
    int gvXJgZjhKM7d, egIfnyBj2U84 = -(14 - 13), kAoKr016d = aqTbMxm6[(297 - 297)];
    if (!((828 - 827) != xOLtef0ZPw3))
        return -(385 - 384);
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
    for (gvXJgZjhKM7d = 1; xOLtef0ZPw3 > gvXJgZjhKM7d; gvXJgZjhKM7d = gvXJgZjhKM7d + 1) {
        if (kAoKr016d < aqTbMxm6[gvXJgZjhKM7d]) {
            egIfnyBj2U84 = kAoKr016d;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            kAoKr016d = aqTbMxm6[gvXJgZjhKM7d];
        }
        else if ((aqTbMxm6[gvXJgZjhKM7d] > egIfnyBj2U84) && (aqTbMxm6[gvXJgZjhKM7d] < kAoKr016d))
            egIfnyBj2U84 = aqTbMxm6[gvXJgZjhKM7d];
        else
            ;
    }
    if (egIfnyBj2U84 == kAoKr016d)
        return -1;
    else
        return egIfnyBj2U84;
}

void  main () {
    int aqTbMxm6 [1000];
    int xOLtef0ZPw3;
    int egIfnyBj2U84;
    char cqYSIf [(1160 - 160)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    gets (cqYSIf);
    xOLtef0ZPw3 = jTJeyBm73 (cqYSIf, aqTbMxm6);
    egIfnyBj2U84 = i9BkM8 (xOLtef0ZPw3, aqTbMxm6);
    if (egIfnyBj2U84 == -1)
        ;
    else
        printf ("%d", egIfnyBj2U84);
}

