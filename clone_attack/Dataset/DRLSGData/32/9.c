void  main () {
    int svB8JSMch;
    int vEPIOD2N7k;
    int BpBamTQb;
    int k;
    int HY937ZNorn0M;
    int QVFv3cBNMa;
    int R5onzVb2I;
    char b [100];
    char Tm2ej4ikhb6 [(388 - 288)];
    char MulKFW2;
    int WMw8sQHyvxE;
    QVFv3cBNMa = (873 - 873);
    scanf ("%d", &vEPIOD2N7k);
    R5onzVb2I = 0;
    for (svB8JSMch = (250 - 249); svB8JSMch <= vEPIOD2N7k; svB8JSMch = svB8JSMch + (631 - 630)) {
        if (R5onzVb2I)
            MulKFW2 = getchar ();
        else
            R5onzVb2I = 1;
        scanf ("%s", Tm2ej4ikhb6);
        WMw8sQHyvxE = strlen (Tm2ej4ikhb6);
        scanf ("%s", b);
        BpBamTQb = strlen (b);
        for (HY937ZNorn0M = 1; HY937ZNorn0M <= BpBamTQb; HY937ZNorn0M++) {
            Tm2ej4ikhb6[WMw8sQHyvxE -HY937ZNorn0M] = Tm2ej4ikhb6[WMw8sQHyvxE -HY937ZNorn0M] - b[BpBamTQb -HY937ZNorn0M] + 48;
            k = WMw8sQHyvxE -HY937ZNorn0M;
            for (; Tm2ej4ikhb6[k] < 48;) {
                Tm2ej4ikhb6[k] = Tm2ej4ikhb6[k] + (86 - 76);
                Tm2ej4ikhb6[k - 1]--;
                k--;
            }
        }
        printf ("%s", Tm2ej4ikhb6);
        if (QVFv3cBNMa)
            ;
        else
            QVFv3cBNMa = (420 - 419);
    }
}

