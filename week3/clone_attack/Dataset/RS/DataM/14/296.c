struct   dsOSApZRkN {
    int HriEQqzaOFJ;
    int KdYw0OFPWK;
    int ks5WY07NXc;
    int kkFwaKsL80;
    struct   dsOSApZRkN *X7bknDBljQa;
};
struct   dsOSApZRkN *gM6ruJmq (int ppMouHAWer) {
    struct   dsOSApZRkN *yUhEfJ3;
    struct   dsOSApZRkN *GEemPX0o;
    struct   dsOSApZRkN *j9YgUNjzK8;
    int p2bTR0i;
    GEemPX0o = (struct   dsOSApZRkN *) malloc (len);
    scanf ("%d %d %d", &GEemPX0o->HriEQqzaOFJ, &GEemPX0o->KdYw0OFPWK, &GEemPX0o->ks5WY07NXc);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    GEemPX0o->kkFwaKsL80 = GEemPX0o->KdYw0OFPWK + GEemPX0o->ks5WY07NXc;
    GEemPX0o->X7bknDBljQa = NULL;
    yUhEfJ3 = GEemPX0o;
    j9YgUNjzK8 = GEemPX0o;
    {
        p2bTR0i = 316 - 315;
        while (ppMouHAWer - (758 - 757) >= p2bTR0i) {
            p2bTR0i = p2bTR0i + 1;
            GEemPX0o = (struct   dsOSApZRkN *) malloc (len);
            scanf ("%d %d %d", &GEemPX0o->HriEQqzaOFJ, &GEemPX0o->KdYw0OFPWK, &GEemPX0o->ks5WY07NXc);
            GEemPX0o->kkFwaKsL80 = GEemPX0o->KdYw0OFPWK + GEemPX0o->ks5WY07NXc;
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
            GEemPX0o->X7bknDBljQa = NULL;
            j9YgUNjzK8->X7bknDBljQa = GEemPX0o;
            j9YgUNjzK8 = GEemPX0o;
        };
    }
    return yUhEfJ3;
}

struct   dsOSApZRkN *BKDOCzwvyR (struct   dsOSApZRkN *yUhEfJ3) {
    struct   dsOSApZRkN *B3jCVKnWvJB;
    struct   dsOSApZRkN *PUocxlApaG;
    PUocxlApaG = yUhEfJ3;
    B3jCVKnWvJB = yUhEfJ3->X7bknDBljQa;
    while (B3jCVKnWvJB) {
        if (B3jCVKnWvJB->kkFwaKsL80 > PUocxlApaG->kkFwaKsL80)
            PUocxlApaG = B3jCVKnWvJB;
        B3jCVKnWvJB = B3jCVKnWvJB->X7bknDBljQa;
    }
    return PUocxlApaG;
}

void  main () {
    struct   dsOSApZRkN *yUhEfJ3;
    struct   dsOSApZRkN *PUocxlApaG;
    int ppMouHAWer;
    int p2bTR0i;
    struct   dsOSApZRkN *gM6ruJmq (int ppMouHAWer);
    struct   dsOSApZRkN * BKDOCzwvyR (struct   dsOSApZRkN *yUhEfJ3);
    scanf ("%d", &ppMouHAWer);
    yUhEfJ3 = gM6ruJmq (ppMouHAWer);
    {
        p2bTR0i = 103 - 102;
        while (p2bTR0i <= (925 - 922)) {
            p2bTR0i++;
            PUocxlApaG = BKDOCzwvyR (yUhEfJ3);
            printf ("%d %d\n", PUocxlApaG->HriEQqzaOFJ, PUocxlApaG->kkFwaKsL80);
            PUocxlApaG->kkFwaKsL80 = -1;
        };
    };
}

