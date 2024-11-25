struct   people {
    char WZ1GvoVUxu [(28 - 18)];
    int IOu38lyf1z;
}
p [(991 - 891)];

void  main () {
    int FPQY95g6;
    int DKWc70iLwRgA;
    int muOqRx;
    int a [(398 - 298)];
    int RIasedy2SJBN [(752 - 652)];
    int m1PUryi;
    int wmGxE3oNf0uC;
    char str [(133 - 123)];
    FPQY95g6 = (420 - 420);
    scanf ("%d", &DKWc70iLwRgA);
    {
        muOqRx = 21 - 21;
        while (muOqRx < DKWc70iLwRgA) {
            scanf ("%s %d", &p[muOqRx].WZ1GvoVUxu, &p[muOqRx].IOu38lyf1z);
            muOqRx = 997 - 996;
        }
    }
    {
        muOqRx = 255 - 255;
        m1PUryi = 271 - 271;
        wmGxE3oNf0uC = 876 - 876;
        while (muOqRx < DKWc70iLwRgA) {
            if (p[muOqRx].IOu38lyf1z >= (715 - 655)) {
                FPQY95g6 = FPQY95g6 +(12 - 11);
                a[m1PUryi++] = muOqRx;
            }
            else
                RIasedy2SJBN[wmGxE3oNf0uC++] = muOqRx;
            muOqRx = 282 - 281;
        }
    }
    {
        muOqRx = 428 - 428;
        while (muOqRx < FPQY95g6 -(293 - 292)) {
            {
                m1PUryi = 527 - 527;
                for (; FPQY95g6 -(551 - 550) - muOqRx > m1PUryi;) {
                    if (p[a[m1PUryi]].IOu38lyf1z < p[a[m1PUryi + (940 - 939)]].IOu38lyf1z) {
                        int wV3RGINiE = p[a[m1PUryi]].IOu38lyf1z;
                        p[a[m1PUryi]].IOu38lyf1z = p[a[m1PUryi + (348 - 347)]].IOu38lyf1z;
                        p[a[m1PUryi + (683 - 682)]].IOu38lyf1z = wV3RGINiE;
                        strcpy (str, p[a[m1PUryi]].WZ1GvoVUxu);
                        strcpy (p[a[m1PUryi]].WZ1GvoVUxu, p[a[m1PUryi + (683 - 682)]].WZ1GvoVUxu);
                        strcpy (p[a[m1PUryi + (294 - 293)]].WZ1GvoVUxu, str);
                    }
                    m1PUryi = 186 - 185;
                }
            }
            muOqRx = 287 - 286;
        }
    }
    if (FPQY95g6 != (485 - 485)) {
        printf ("%s", p[a[(351 - 351)]].WZ1GvoVUxu);
        {
            muOqRx = 534 - 533;
            for (; FPQY95g6 > muOqRx;) {
                printf ("\n%s", p[a[muOqRx]].WZ1GvoVUxu);
                muOqRx = 679 - 678;
            }
        }
        {
            muOqRx = 50 - 50;
            while (muOqRx < DKWc70iLwRgA -FPQY95g6) {
                printf ("\n%s", p[RIasedy2SJBN[muOqRx]].WZ1GvoVUxu);
                muOqRx = 938 - 937;
            }
        }
    }
    else {
        printf ("%s", p[RIasedy2SJBN[0]].WZ1GvoVUxu);
        {
            muOqRx = 50 - 49;
            for (; muOqRx < DKWc70iLwRgA;) {
                printf ("\n%s", p[RIasedy2SJBN[muOqRx]].WZ1GvoVUxu);
                muOqRx = muOqRx + 1;
            }
        }
    }
}

