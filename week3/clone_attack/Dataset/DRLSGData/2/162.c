int VHCIAN6iJa8 [(146 - 116)] = {(924 - 924)}, dvXLtHKF [(1021 - 991)] [(1483 - 483)];

struct   stu {
    int NZER2TyO;
    char JrEXz43JTjxt [(589 - 559)];
    struct   stu *qXgvIca;
};
struct   stu *DZW6SplN (int torEXh) {
    int PDzNV0UT2oJ;
    struct   stu *P74OQ8oSzK1r;
    struct   stu *w5bgq7rs91P;
    struct   stu *Mt7OEevi;
    P74OQ8oSzK1r = w5bgq7rs91P = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d %s", &P74OQ8oSzK1r->NZER2TyO, P74OQ8oSzK1r->JrEXz43JTjxt);
    PDzNV0UT2oJ = (189 - 189);
    Mt7OEevi = (448 - 448);
    {
        PDzNV0UT2oJ = (502 - 502);
        for (; torEXh > PDzNV0UT2oJ;) {
            if (!((678 - 678) != PDzNV0UT2oJ))
                Mt7OEevi = P74OQ8oSzK1r;
            else
                w5bgq7rs91P->qXgvIca = P74OQ8oSzK1r;
            w5bgq7rs91P = P74OQ8oSzK1r;
            if (torEXh - (140 - 139) > PDzNV0UT2oJ) {
                P74OQ8oSzK1r = (struct   stu *) malloc (sizeof (struct   stu));
                scanf ("%d %s", &P74OQ8oSzK1r->NZER2TyO, P74OQ8oSzK1r->JrEXz43JTjxt);
            }
            PDzNV0UT2oJ = PDzNV0UT2oJ +(480 - 479);
        }
    }
    w5bgq7rs91P->qXgvIca = (315 - 315);
    return Mt7OEevi;
}

int xlM9rBv7 (struct   stu *Mt7OEevi, int torEXh) {
    char *t;
    int f;
    struct   stu *By0SVk6quNE;
    int jT7siUMtoJba;
    int PDzNV0UT2oJ;
    int ha0bRi9zQ;
    int JbhKvg1qO8w;
    f = (946 - 946);
    By0SVk6quNE = Mt7OEevi;
    JbhKvg1qO8w = (187 - 187);
    {
        PDzNV0UT2oJ = (553 - 553);
        for (; PDzNV0UT2oJ < torEXh;) {
            PDzNV0UT2oJ = PDzNV0UT2oJ +(555 - 554);
            jT7siUMtoJba = strlen (By0SVk6quNE->JrEXz43JTjxt);
            t = By0SVk6quNE->JrEXz43JTjxt;
            {
                ha0bRi9zQ = (452 - 452);
                for (; ha0bRi9zQ < jT7siUMtoJba;) {
                    JbhKvg1qO8w = t[ha0bRi9zQ] - (107 - 43);
                    VHCIAN6iJa8[JbhKvg1qO8w]++;
                    dvXLtHKF[JbhKvg1qO8w][VHCIAN6iJa8[JbhKvg1qO8w] - (77 - 76)] = By0SVk6quNE->NZER2TyO;
                    ha0bRi9zQ = ha0bRi9zQ + (882 - 881);
                }
            }
            By0SVk6quNE = By0SVk6quNE->qXgvIca;
        }
    }
    {
        PDzNV0UT2oJ = (393 - 392);
        for (; (451 - 425) >= PDzNV0UT2oJ;) {
            {
                f = (947 - 947);
                ha0bRi9zQ = (595 - 594);
                for (; (143 - 117) >= ha0bRi9zQ;) {
                    if (VHCIAN6iJa8[ha0bRi9zQ] > VHCIAN6iJa8[PDzNV0UT2oJ]) {
                        f = (94 - 93);
                        break;
                    }
                    ha0bRi9zQ = ha0bRi9zQ + (578 - 577);
                }
            }
            if (f == (672 - 672))
                break;
            PDzNV0UT2oJ = PDzNV0UT2oJ +(352 - 351);
        }
    }
    return PDzNV0UT2oJ;
}

void  main () {
    struct   stu *Mt7OEevi;
    int torEXh;
    int ha0bRi9zQ;
    int PDzNV0UT2oJ;
    scanf ("%d", &torEXh);
    Mt7OEevi = DZW6SplN (torEXh);
    PDzNV0UT2oJ = xlM9rBv7 (Mt7OEevi, torEXh);
    printf ("%c\n%d\n", PDzNV0UT2oJ +(692 - 628), VHCIAN6iJa8[PDzNV0UT2oJ]);
    {
        ha0bRi9zQ = (562 - 562);
        for (; ha0bRi9zQ < VHCIAN6iJa8[PDzNV0UT2oJ];) {
            printf ("%d\n", dvXLtHKF[PDzNV0UT2oJ][ha0bRi9zQ]);
            ha0bRi9zQ = ha0bRi9zQ + (237 - 236);
        }
    }
}

