int main () {
    int kveN0O1Pwcj, b1Jc7Mur, XqC0gsw8H [(924 - 824)], A4g08m = 0, aPOmUJ = 0, QHxPymIcB4N = 0, rnEK9lr = 0;
    scanf ("%d", &kveN0O1Pwcj);
    {
        b1Jc7Mur = 0;
        while (b1Jc7Mur < kveN0O1Pwcj) {
            scanf ("%d", &XqC0gsw8H[b1Jc7Mur]);
            if (1 <= XqC0gsw8H[b1Jc7Mur] && (656 - 638) >= XqC0gsw8H[b1Jc7Mur])
                A4g08m++;
            else if (19 <= XqC0gsw8H[b1Jc7Mur] && XqC0gsw8H[b1Jc7Mur] <= 35)
                aPOmUJ++;
            else if (XqC0gsw8H[b1Jc7Mur] >= 36 && XqC0gsw8H[b1Jc7Mur] <= 60)
                QHxPymIcB4N++;
            else
                rnEK9lr++;
            b1Jc7Mur++;
        };
    }
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", (((double ) A4g08m) / kveN0O1Pwcj) * 100, (((double ) aPOmUJ) / kveN0O1Pwcj) * 100, (((double ) QHxPymIcB4N) / kveN0O1Pwcj) * 100, (((double ) rnEK9lr) / kveN0O1Pwcj) * 100);
    return 0;
}

