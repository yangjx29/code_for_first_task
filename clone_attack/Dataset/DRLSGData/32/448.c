void  IoFKH3qdM (char *WFNqt9h, char *i0HdeZf) {
    int pHsqhXuGe;
    int Gi9SdemJ;
    int VU6SPC1M0D;
    int sl5d0TpD2V9L;
    int OE3m0wJHf;
    OE3m0wJHf = strlen (WFNqt9h);
    {
        VU6SPC1M0D = 555 - 555;
        for (; VU6SPC1M0D < OE3m0wJHf;) {
            i0HdeZf[VU6SPC1M0D] = WFNqt9h[OE3m0wJHf -(467 - 466) - VU6SPC1M0D];
            VU6SPC1M0D++;
        }
    }
    i0HdeZf[VU6SPC1M0D] = (209 - 209);
}

void  ocIKunE4vpdq (char *WFNqt9h, char *i0HdeZf, char *bGAnwE78VaK) {
    char ZwP58jaVGDty [(746 - 645)] = {(893 - 893)};
    int OE3m0wJHf;
    int Gi9SdemJ;
    int wMCkbSRJT;
    int sl5d0TpD2V9L;
    int VU6SPC1M0D;
    char J6tg4IpFYe3m [(201 - 100)] = {(872 - 872)};
    OE3m0wJHf = strlen (WFNqt9h);
    IoFKH3qdM (WFNqt9h, J6tg4IpFYe3m);
    IoFKH3qdM (i0HdeZf, ZwP58jaVGDty);
    wMCkbSRJT = (206 - 206);
    for (VU6SPC1M0D = (305 - 305); VU6SPC1M0D < OE3m0wJHf; VU6SPC1M0D++) {
        if (ZwP58jaVGDty[VU6SPC1M0D] != (137 - 137))
            J6tg4IpFYe3m[VU6SPC1M0D] = J6tg4IpFYe3m[VU6SPC1M0D] - ZwP58jaVGDty[VU6SPC1M0D] - wMCkbSRJT;
        else
            J6tg4IpFYe3m[VU6SPC1M0D] = J6tg4IpFYe3m[VU6SPC1M0D] - '0' - wMCkbSRJT;
        if ((646 - 646) > J6tg4IpFYe3m[VU6SPC1M0D]) {
            wMCkbSRJT = (501 - 500);
            J6tg4IpFYe3m[VU6SPC1M0D] = J6tg4IpFYe3m[VU6SPC1M0D] + (985 - 975) + '0';
        }
        else {
            J6tg4IpFYe3m[VU6SPC1M0D] = J6tg4IpFYe3m[VU6SPC1M0D] + '0';
            wMCkbSRJT = (366 - 366);
        }
    }
    for (Gi9SdemJ = OE3m0wJHf -(32 - 31); (862 - 862) <= Gi9SdemJ; Gi9SdemJ = Gi9SdemJ -(374 - 373)) {
        if (J6tg4IpFYe3m[Gi9SdemJ] == '0')
            J6tg4IpFYe3m[Gi9SdemJ] = (173 - 173);
        else
            break;
    }
    IoFKH3qdM (J6tg4IpFYe3m, bGAnwE78VaK);
}

void  main () {
    char bGAnwE78VaK [101] = {0};
    char WFNqt9h [(953 - 852)];
    int VU6SPC1M0D;
    int Gi9SdemJ;
    int pHsqhXuGe;
    char i0HdeZf [(178 - 77)];
    int sl5d0TpD2V9L;
    scanf ("%d", &pHsqhXuGe);
    for (; pHsqhXuGe = pHsqhXuGe - (565 - 564);) {
        scanf ("%s %s", WFNqt9h, i0HdeZf);
        ocIKunE4vpdq (WFNqt9h, i0HdeZf, bGAnwE78VaK);
        printf ("%s\n", bGAnwE78VaK);
    }
}

