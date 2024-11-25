int MRHDpLu5yexK (void  const  *PpYBzn, void  const  *YdAuBXe) {
    return (*(int*) PpYBzn -*(int*) YdAuBXe);
}

main () {
    int lxyhwMDB0Z;
    int kRZ8phfHE7s;
    int a0dZDXq [(839 - 814)];
    int j;
    int Zy4tmafs;
    int BT24BNCb [25];
    int XQEfGDa;
    scanf ("%d", &XQEfGDa);
    a0dZDXq[XQEfGDa -(105 - 104)] = (744 - 743);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    {
        Zy4tmafs = (483 - 483);
        for (; Zy4tmafs < XQEfGDa;) {
            scanf ("%d", &BT24BNCb[Zy4tmafs]);
            Zy4tmafs++;
        }
    }
    {
        Zy4tmafs = XQEfGDa -2;
        for (; Zy4tmafs >= (838 - 838);) {
            kRZ8phfHE7s = 0;
            {
                j = XQEfGDa -(150 - 149);
                while (Zy4tmafs +(739 - 738) <= j) {
                    if (BT24BNCb[j] <= BT24BNCb[Zy4tmafs]) {
                        if (a0dZDXq[j] >= kRZ8phfHE7s) {
                            kRZ8phfHE7s = a0dZDXq[j];
                        }
                    }
                    j--;
                }
            }
            a0dZDXq[Zy4tmafs] = kRZ8phfHE7s + (370 - 369);
            Zy4tmafs--;
        }
    }
    qsort (a0dZDXq, XQEfGDa, sizeof (int), MRHDpLu5yexK);
    printf ("%d", a0dZDXq[XQEfGDa -1]);
    getchar ();
    getchar ();
}

