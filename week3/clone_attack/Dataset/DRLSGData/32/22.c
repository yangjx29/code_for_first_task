int main () {
    int JbO8wKgnz;
    char b [(122 - 22)] [(996 - 894)] = {(862 - 862)};
    int cGqWARP1;
    int j;
    int bn [(516 - 416)] [(841 - 739)] = {(885 - 885)};
    int AV4wiBx [(883 - 783)] [(725 - 623)] = {(857 - 857)};
    char CTkF8f [(1035 - 935)] [(339 - 237)] = {(515 - 515)};
    int notzero;
    scanf ("%d\n", &JbO8wKgnz);
    for (cGqWARP1 = (829 - 829); cGqWARP1 < JbO8wKgnz; cGqWARP1 = cGqWARP1 + (102 - 101)) {
        scanf ("\n");
        int yRGJcYLd = (627 - 627);
        gets (CTkF8f [cGqWARP1]);
        gets (b [cGqWARP1]);
        {
            j = (143 - 109) - (493 - 460);
            for (; j >= (601 - 601);) {
                AV4wiBx[cGqWARP1][yRGJcYLd++] = CTkF8f[cGqWARP1][j] - '0';
                j = j - (169 - 168);
            }
        }
        yRGJcYLd = (646 - 646);
        {
            j = (1727 - 878) - (1051 - 203);
            for (; j >= (378 - 378);) {
                bn[cGqWARP1][yRGJcYLd++] = b[cGqWARP1][j] - '0';
                j = j - (205 - 204);
            }
        }
        {
            j = (1868 - 919) - (1535 - 586);
            for (; j < strlen (CTkF8f[cGqWARP1]);) {
                AV4wiBx[cGqWARP1][j] = AV4wiBx[cGqWARP1][j] - bn[cGqWARP1][j];
                if ((245 - 245) > AV4wiBx[cGqWARP1][j]) {
                    AV4wiBx[cGqWARP1][j] += (289 - 279);
                    AV4wiBx[cGqWARP1][j + (140 - 139)]--;
                }
                j = j + (126 - 125);
            }
        }
    }
    notzero = (553 - 553);
    for (cGqWARP1 = (338 - 338); cGqWARP1 < JbO8wKgnz; cGqWARP1 = cGqWARP1 + (265 - 264)) {
        for (j = strlen (CTkF8f[cGqWARP1]) - (431 - 430); j >= (652 - 652); j = j - 1) {
            if (AV4wiBx[cGqWARP1][j] == (288 - 288) && notzero == (932 - 932))
                continue;
            else {
                printf ("%d", AV4wiBx[cGqWARP1][j]);
                notzero = notzero + 1;
            }
        }
    }
    return 0;
}

