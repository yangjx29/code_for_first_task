int iXzUimv;
int eAl581x [(370 - 270)];
int uF4W9uo;
int KptPuEHZwyV = (10589 - 589), CU7iOD = -(587 - 586), wXyDpITxsa = (40 - 40);

int main (void ) {
    scanf ("%d", &iXzUimv);
    for (uF4W9uo = 0; iXzUimv > uF4W9uo; uF4W9uo = uF4W9uo + (945 - 944)) {
        scanf ("%d", &eAl581x[uF4W9uo]);
        if (KptPuEHZwyV > eAl581x[uF4W9uo])
            KptPuEHZwyV = eAl581x[uF4W9uo];
        if (eAl581x[uF4W9uo] > CU7iOD)
            CU7iOD = eAl581x[uF4W9uo];
        wXyDpITxsa += eAl581x[uF4W9uo];
    }
    if (!(CU7iOD *iXzUimv - wXyDpITxsa != wXyDpITxsa - KptPuEHZwyV *iXzUimv))
        printf ("%d,%d\n", KptPuEHZwyV, CU7iOD);
    else if (CU7iOD *iXzUimv - wXyDpITxsa > wXyDpITxsa - KptPuEHZwyV *iXzUimv) {
        printf ("%d\n", CU7iOD);
    }
    else if (wXyDpITxsa - KptPuEHZwyV *iXzUimv > CU7iOD *iXzUimv - wXyDpITxsa)
        printf ("%d\n", KptPuEHZwyV);
}

