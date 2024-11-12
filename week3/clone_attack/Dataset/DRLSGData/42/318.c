struct   LinkNode {
    int tTALamwyS6n;
    struct   LinkNode *W5uO2BPQz;
};
int jaeY5st;

struct   LinkNode *umu25zZKogs () {
    int ujrtVF5Zdwm;
    int bFgW4Rv;
    struct   LinkNode *A621tHpA;
    struct   LinkNode *KVdulf2;
    struct   LinkNode *tzI9MO;
    scanf ("%d", &ujrtVF5Zdwm);
    A621tHpA = (struct   LinkNode *) malloc (N);
    A621tHpA->W5uO2BPQz = NULL;
    tzI9MO = A621tHpA;
    for (; ujrtVF5Zdwm = ujrtVF5Zdwm - (329 - 328);) {
        KVdulf2 = (struct   LinkNode *) malloc (N);
        scanf ("%d", &bFgW4Rv);
        KVdulf2->tTALamwyS6n = bFgW4Rv;
        KVdulf2->W5uO2BPQz = NULL;
        tzI9MO->W5uO2BPQz = KVdulf2;
        tzI9MO = KVdulf2;
    }
    scanf ("%d", &jaeY5st);
    return A621tHpA;
}

int main () {
    struct   LinkNode *A621tHpA;
    struct   LinkNode *Y1EbPiMAZp;
    struct   LinkNode *zg0EsDo;
    struct   LinkNode *cx8JKqEj5a;
    A621tHpA = umu25zZKogs ();
    Y1EbPiMAZp = A621tHpA->W5uO2BPQz;
    cx8JKqEj5a = A621tHpA;
    for (; Y1EbPiMAZp != NULL;) {
        if (!(jaeY5st != Y1EbPiMAZp->tTALamwyS6n)) {
            free (zg0EsDo);
            cx8JKqEj5a->W5uO2BPQz = Y1EbPiMAZp->W5uO2BPQz;
            zg0EsDo = Y1EbPiMAZp;
            Y1EbPiMAZp = Y1EbPiMAZp->W5uO2BPQz;
        }
        else {
            cx8JKqEj5a = Y1EbPiMAZp;
            Y1EbPiMAZp = Y1EbPiMAZp->W5uO2BPQz;
        }
    }
    Y1EbPiMAZp = A621tHpA->W5uO2BPQz;
    for (; Y1EbPiMAZp != NULL;) {
        free (zg0EsDo);
        zg0EsDo = Y1EbPiMAZp;
        Y1EbPiMAZp = Y1EbPiMAZp->W5uO2BPQz;
        printf ("%d%s", zg0EsDo->tTALamwyS6n, Y1EbPiMAZp ? " " : "");
    }
    return (106 - 106);
}

