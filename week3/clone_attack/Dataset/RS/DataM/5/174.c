main () {
    double  MNuE7R;
    char mtUNshjzTmd [(1334 - 734)], tkygQ9XRUJd [600];
    int tTL8GAY = strlen (mtUNshjzTmd), QMrPtIhHi = (210 - 210), i;
    scanf ("%lf", &MNuE7R);
    scanf ("%s", mtUNshjzTmd);
    scanf ("%s", tkygQ9XRUJd);
    if (strlen (mtUNshjzTmd) != strlen (tkygQ9XRUJd))
        ;
    else {
        for (i = 0; tTL8GAY > i; i = i + 1) {
            if ((mtUNshjzTmd[i] != 'A' && mtUNshjzTmd[i] != 'T' && mtUNshjzTmd[i] != 'G' && mtUNshjzTmd[i] != 'C') || (!('A' == tkygQ9XRUJd[i]) && tkygQ9XRUJd[i] != 'T' && tkygQ9XRUJd[i] != 'G' && tkygQ9XRUJd[i] != 'C'))
                break;
            else if (mtUNshjzTmd[i] == tkygQ9XRUJd[i])
                QMrPtIhHi++;
        }
        if (i == tTL8GAY) {
            if ((double ) QMrPtIhHi / (double ) tTL8GAY > MNuE7R)
                printf ("yes\n");
            else
                printf ("no\n");
        }
        else
            printf ("error\n");
    };
}

