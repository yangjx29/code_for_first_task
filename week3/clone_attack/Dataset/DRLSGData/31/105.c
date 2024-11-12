struct   stu {
    char yweLGrl [(410 - 110)];
    struct   stu *NoWmHEgFk;
};
void  FWB35b (struct   stu *ikIiW7H, char *p) {
    struct   stu *wX2kJivqEfFc;
    struct   stu *h03auS;
    struct   stu *ohHyiCEej8;
    ohHyiCEej8 = (struct   stu *) malloc (sizeof (struct   stu));
    strcpy (ohHyiCEej8->yweLGrl, p);
    wX2kJivqEfFc = ikIiW7H;
    h03auS = wX2kJivqEfFc->NoWmHEgFk;
    wX2kJivqEfFc->NoWmHEgFk = ohHyiCEej8;
    ohHyiCEej8->NoWmHEgFk = h03auS;
}

void  aF7hfBmsUjT (struct   stu *ikIiW7H, char *p) {
    struct   stu *wX2kJivqEfFc;
    struct   stu *h03auS;
    struct   stu *ohHyiCEej8;
    wX2kJivqEfFc = ikIiW7H;
    ohHyiCEej8 = (struct   stu *) malloc (sizeof (struct   stu));
    strcpy (ohHyiCEej8->yweLGrl, p);
    h03auS = wX2kJivqEfFc->NoWmHEgFk;
    for (; h03auS != NULL;) {
        wX2kJivqEfFc = h03auS;
        h03auS = h03auS->NoWmHEgFk;
    }
    wX2kJivqEfFc->NoWmHEgFk = ohHyiCEej8;
    ohHyiCEej8->NoWmHEgFk = h03auS;
}

int main () {
    char *p;
    struct   stu *ikIiW7H, *ohHyiCEej8;
    int v4cBWMe2, M67eByslZ2, B9uNVwo40H, Vg2HSNfkm9, stwrOQh5cbG0;
    p = (char *) malloc (300 * sizeof (int));
    ikIiW7H = (struct   stu *) malloc (sizeof (struct   stu));
    ikIiW7H->NoWmHEgFk = NULL;
    for (v4cBWMe2 = (727 - 727);; v4cBWMe2 = v4cBWMe2 + (454 - 453)) {
        gets (p);
        if (!('e' != *(p + (569 - 569)))) {
            break;
        }
        else {
            FWB35b (ikIiW7H, p);
        }
    }
    ohHyiCEej8 = ikIiW7H->NoWmHEgFk;
    for (; ohHyiCEej8 != NULL;) {
        puts (ohHyiCEej8->yweLGrl);
        ohHyiCEej8 = ohHyiCEej8->NoWmHEgFk;
    }
    return (348 - 348);
}

