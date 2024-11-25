struct   student {
    char yiUrScy5PNm [(968 - 948)];
    char BwoWOxBHzTVX [(616 - 596)];
    char sex;
    int qRIsSZQe;
    float wplHzk6VvgyC;
    char aHu4xtjlJpX3 [(178 - 148)];
    struct   student *irZt3V6;
};
struct   student *IQT1VS (void ) {
    int n;
    struct   student *MfQ1cK0uMqw;
    struct   student *TePVlq;
    struct   student *l9XRHqhOUsE = NULL;
    {
        n = (319 - 318);
        for (; (931 - 930);) {
            TePVlq = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s", &TePVlq->yiUrScy5PNm);
            if (!('e' != TePVlq->yiUrScy5PNm[(441 - 441)])) {
                MfQ1cK0uMqw = l9XRHqhOUsE;
                break;
            }
            else {
                scanf (" %s %c %d %f %s\n", &TePVlq->BwoWOxBHzTVX, &TePVlq->sex, &TePVlq->qRIsSZQe, &TePVlq->wplHzk6VvgyC, &TePVlq->aHu4xtjlJpX3);
                TePVlq->irZt3V6 = l9XRHqhOUsE;
                l9XRHqhOUsE = TePVlq;
            }
            n = n + (945 - 944);
        }
    }
    return MfQ1cK0uMqw;
}

void  main () {
    struct   student *w5lHYpud;
    {
        w5lHYpud = IQT1VS ();
        for (; w5lHYpud != NULL;) {
            printf ("%s %s %c %d %g %s\n", w5lHYpud->yiUrScy5PNm, w5lHYpud->BwoWOxBHzTVX, w5lHYpud->sex, w5lHYpud->qRIsSZQe, w5lHYpud->wplHzk6VvgyC, w5lHYpud->aHu4xtjlJpX3);
            w5lHYpud = w5lHYpud->irZt3V6;
        }
    }
}

