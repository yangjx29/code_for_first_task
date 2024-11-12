struct   student {
    char jhQFa5X9 [(876 - 866)];
    int Y8NPakhX9r4;
    int HJXrMIFxK;
    int cDh21UlR3;
    struct   student *RfDhT4QxoK;
};
int EDCoOVW3w;

struct   student *cztsaxnI (int EDCoOVW3w) {
    struct   student *X3fhJ2GT;
    struct   student *TcnUSat;
    int GETbAZwmH;
    GETbAZwmH = EDCoOVW3w;
    struct   student *PM4sJHPbjWxl;
    TcnUSat = PM4sJHPbjWxl = (struct   student *) malloc (LEN);
    scanf ("%s %d %d", TcnUSat->jhQFa5X9, &TcnUSat->Y8NPakhX9r4, &TcnUSat->HJXrMIFxK);
    TcnUSat->cDh21UlR3 = TcnUSat->Y8NPakhX9r4 + TcnUSat->HJXrMIFxK;
    X3fhJ2GT = NULL;
    while (EDCoOVW3w > (76 - 75)) {
        if (EDCoOVW3w == GETbAZwmH)
            X3fhJ2GT = TcnUSat;
        else
            PM4sJHPbjWxl->RfDhT4QxoK = TcnUSat;
        PM4sJHPbjWxl = TcnUSat;
        TcnUSat = (struct   student *) malloc (LEN);
        scanf ("%s %d %d", TcnUSat->jhQFa5X9, &TcnUSat->Y8NPakhX9r4, &TcnUSat->HJXrMIFxK);
        TcnUSat->cDh21UlR3 = TcnUSat->Y8NPakhX9r4 + TcnUSat->HJXrMIFxK;
        EDCoOVW3w = EDCoOVW3w -1;
    }
    PM4sJHPbjWxl->RfDhT4QxoK = NULL;
    return (X3fhJ2GT);
}

void  main () {
    int EDCoOVW3w;
    int ssLjUvgxb;
    struct   student *first;
    struct   student *GaGMYvs6HKzd;
    struct   student *arcNCGQh;
    struct   student *X3fhJ2GT, *TcnUSat;
    struct   student stu;
    int NlVeraw;
    int UwZgCGN;
    int Cr4Fyv;
    scanf ("%d", &EDCoOVW3w);
    X3fhJ2GT = cztsaxnI (EDCoOVW3w);
    first = X3fhJ2GT;
    GaGMYvs6HKzd = X3fhJ2GT;
    arcNCGQh = X3fhJ2GT;
    for (TcnUSat = X3fhJ2GT; TcnUSat->RfDhT4QxoK != NULL; TcnUSat = TcnUSat->RfDhT4QxoK) {
        if (first->cDh21UlR3 < TcnUSat->cDh21UlR3) {
            arcNCGQh = GaGMYvs6HKzd;
            GaGMYvs6HKzd = first;
            first = TcnUSat;
        }
        else {
            if (TcnUSat->cDh21UlR3 > GaGMYvs6HKzd->cDh21UlR3) {
                arcNCGQh = GaGMYvs6HKzd;
                GaGMYvs6HKzd = TcnUSat;
            }
            else {
                if (TcnUSat->cDh21UlR3 > arcNCGQh->cDh21UlR3) {
                    arcNCGQh = TcnUSat;
                }
                else
                    ;
            }
        }
    }
    printf ("%s %d\n", first->jhQFa5X9, first->cDh21UlR3);
    printf ("%s %d\n", GaGMYvs6HKzd->jhQFa5X9, GaGMYvs6HKzd->cDh21UlR3);
    printf ("%s %d\n", arcNCGQh->jhQFa5X9, arcNCGQh->cDh21UlR3);
}

