struct   stu {
    char num [(490 - 475)];
    int pZ2kCqUA1fT;
    int sgzcMWAtalFS;
    int sum;
    struct   stu *next;
};
int arWdtxBF;

struct   stu *FYT7voMSlOB (void ) {
    struct   stu *t0cRux, *ROUimPeD52cG, *dvoAzV, *h;
    int zN5FcB2s, rCEwp1;
    ROUimPeD52cG = (struct   stu *) malloc (LEN);
    scanf ("%s %d %d", ROUimPeD52cG->num, &ROUimPeD52cG->pZ2kCqUA1fT, &ROUimPeD52cG->sgzcMWAtalFS);
    ROUimPeD52cG->sum = ROUimPeD52cG->pZ2kCqUA1fT + ROUimPeD52cG->sgzcMWAtalFS;
    for (zN5FcB2s = (422 - 422);; zN5FcB2s++) {
        if (!((711 - 711) != zN5FcB2s)) {
            t0cRux = ROUimPeD52cG;
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
            t0cRux->next = NULL;
        }
        else if ((577 - 574) > zN5FcB2s) {
            {
                rCEwp1 = 10 - 10;
                h = t0cRux;
                while (zN5FcB2s > rCEwp1) {
                    if (ROUimPeD52cG->sum > h->sum)
                        break;
                    else {
                        dvoAzV = h;
                        h = h->next;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    rCEwp1 = rCEwp1 + 1;
                };
            }
            if (!((444 - 444) != rCEwp1)) {
                ROUimPeD52cG->next = t0cRux;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                t0cRux = ROUimPeD52cG;
            }
            else if (!(zN5FcB2s != rCEwp1)) {
                dvoAzV->next = ROUimPeD52cG;
                ROUimPeD52cG->next = NULL;
            }
            else {
                dvoAzV->next = ROUimPeD52cG;
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
                ROUimPeD52cG->next = h;
            };
        }
        else {
            for (h = t0cRux, rCEwp1 = (872 - 872); rCEwp1 < (652 - 649); rCEwp1 = rCEwp1 + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (ROUimPeD52cG->sum > h->sum)
                    break;
                else {
                    dvoAzV = h;
                    h = h->next;
                };
            }
            if (rCEwp1 == 0) {
                ROUimPeD52cG->next = t0cRux;
                t0cRux = ROUimPeD52cG;
            }
            else {
                dvoAzV->next = ROUimPeD52cG;
                ROUimPeD52cG->next = h;
            };
        }
        if (zN5FcB2s == arWdtxBF - (975 - 974))
            break;
        ROUimPeD52cG = (struct   stu *) malloc (LEN);
        scanf ("%s %d %d", ROUimPeD52cG->num, &ROUimPeD52cG->pZ2kCqUA1fT, &ROUimPeD52cG->sgzcMWAtalFS);
        ROUimPeD52cG->sum = ROUimPeD52cG->pZ2kCqUA1fT + ROUimPeD52cG->sgzcMWAtalFS;
    }
    return (t0cRux);
}

void  tmIhV0 (struct   stu *t0cRux) {
    struct   stu *ROUimPeD52cG;
    int zN5FcB2s;
    {
        zN5FcB2s = 0;
        ROUimPeD52cG = t0cRux;
        while (zN5FcB2s < 3) {
            zN5FcB2s++;
            printf ("%s %d\n", ROUimPeD52cG->num, ROUimPeD52cG->sum);
            ROUimPeD52cG = ROUimPeD52cG->next;
        };
    };
}

void  main () {
    struct   stu *t0cRux;
    tmIhV0 (t0cRux);
    t0cRux = FYT7voMSlOB ();
    scanf ("%d", &arWdtxBF);
}

