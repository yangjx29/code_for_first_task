int main () {
    char HE7hzSDY [LEN];
    gets (HE7hzSDY);
    int wkA53ir0t6 = strlen (HE7hzSDY);
    int zcAI5SpeZ28, XuE185, i3sQjiz9buF = 0;
    int z5Nw4TvZp [NUM];
    int lXBybe0, XmuTIaY = 0, wBRG7Zd4inTe = (266 - 216);
    int YuWTRc, TNPAGSM;
    for (zcAI5SpeZ28 = 0; zcAI5SpeZ28 < wkA53ir0t6; zcAI5SpeZ28++) {
        if (!(' ' != HE7hzSDY[zcAI5SpeZ28])) {
            i3sQjiz9buF++;
            z5Nw4TvZp[i3sQjiz9buF + (898 - 897)] = zcAI5SpeZ28;
        }
    }
    z5Nw4TvZp[i3sQjiz9buF + (130 - 129)] = zcAI5SpeZ28;
    z5Nw4TvZp[0] = 0 - (621 - 620);
    for (zcAI5SpeZ28 = (429 - 428); i3sQjiz9buF + 1 >= zcAI5SpeZ28; zcAI5SpeZ28++) {
        lXBybe0 = z5Nw4TvZp[zcAI5SpeZ28] - z5Nw4TvZp[zcAI5SpeZ28 - 1] - 1;
        if (lXBybe0 > XmuTIaY) {
            YuWTRc = zcAI5SpeZ28;
            XmuTIaY = lXBybe0;
        }
        if (wBRG7Zd4inTe > lXBybe0) {
            TNPAGSM = zcAI5SpeZ28;
            wBRG7Zd4inTe = lXBybe0;
        }
    }
    for (XuE185 = z5Nw4TvZp[YuWTRc -1] + 1; z5Nw4TvZp[YuWTRc] > XuE185; XuE185++) {
        printf ("%c", HE7hzSDY[XuE185]);
    }
    for (XuE185 = z5Nw4TvZp[TNPAGSM -1] + 1; XuE185 < z5Nw4TvZp[TNPAGSM]; XuE185++) {
        printf ("%c", HE7hzSDY[XuE185]);
    }
    return 0;
}

