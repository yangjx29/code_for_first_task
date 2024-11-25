struct   student {
    char WKLo8tyk7 [(678 - 643)];
    int final;
    int fpOyxP56la;
    char Gzx90NSbT8c;
    char RTx1ydn;
    int PkgVP2lbFC;
    int u5IzjRer;
    struct   student *vErWZQix;
};
struct   student *XTgLO45YirQ6 (void ) {
    struct   student *OpBzaP95;
    struct   student *q;
    struct   student *NwEif84;
    int merApYf5;
    int bmNMbkEvwSg9;
    merApYf5 = (451 - 451);
    NwEif84 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d", &bmNMbkEvwSg9);
    scanf ("%s %d %d %c %c %d", &NwEif84->WKLo8tyk7, &NwEif84->final, &NwEif84->fpOyxP56la, &NwEif84->Gzx90NSbT8c, &NwEif84->RTx1ydn, &NwEif84->PkgVP2lbFC);
    q = NwEif84;
    OpBzaP95 = NwEif84;
    {
        merApYf5 = 295 - 295;
        while (bmNMbkEvwSg9 > merApYf5) {
            q = OpBzaP95;
            q->u5IzjRer = 0;
            if ((q->final > (651 - 571)) && (0 < q->PkgVP2lbFC))
                q->u5IzjRer = q->u5IzjRer + (8973 - 973);
            if ((q->final > (747 - 662)) && ((877 - 797) < q->fpOyxP56la))
                q->u5IzjRer = q->u5IzjRer + 4000;
            if (90 < q->final)
                q->u5IzjRer = q->u5IzjRer + (2589 - 589);
            if ((q->final > (471 - 386)) && (q->RTx1ydn == 'Y'))
                q->u5IzjRer = q->u5IzjRer + 1000;
            if ((q->fpOyxP56la > 80) && (q->Gzx90NSbT8c == 'Y'))
                q->u5IzjRer = q->u5IzjRer + 850;
            if (merApYf5 < bmNMbkEvwSg9 - 1) {
                OpBzaP95 = (struct   student *) malloc (sizeof (struct   student));
                scanf ("%s %d %d %c %c %d", &OpBzaP95->WKLo8tyk7, &OpBzaP95->final, &OpBzaP95->fpOyxP56la, &OpBzaP95->Gzx90NSbT8c, &OpBzaP95->RTx1ydn, &OpBzaP95->PkgVP2lbFC);
                q->vErWZQix = OpBzaP95;
            }
            merApYf5++;
        };
    }
    q->vErWZQix = NULL;
    return (NwEif84);
}

void  main () {
    int hOHRUuQY01C;
    int I2t0x4S7;
    hOHRUuQY01C = 0;
    I2t0x4S7 = 0;
    struct   student *OpBzaP95;
    struct   student *q;
    struct   student *yRkKuOlq;
    OpBzaP95 = XTgLO45YirQ6 ();
    for (q = OpBzaP95; q != NULL;) {
        if (q->u5IzjRer > I2t0x4S7) {
            I2t0x4S7 = q->u5IzjRer;
            yRkKuOlq = q;
        }
        hOHRUuQY01C = hOHRUuQY01C + q->u5IzjRer;
        q = q->vErWZQix;
    }
    printf ("%s\n%d\n", yRkKuOlq->WKLo8tyk7, yRkKuOlq->u5IzjRer);
    printf ("%d", hOHRUuQY01C);
}

