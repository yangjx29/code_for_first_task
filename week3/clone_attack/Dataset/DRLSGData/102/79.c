int main () {
    char pQeSvjZnJq1L [(166 - 125)] [(427 - 417)];
    int A9UMQR;
    int QNeqlKpTmAUh;
    int i;
    int luG1OQ;
    double  a [(565 - 524)] = {(566 - 566)};
    int k8sgMh2l1FVY;
    double  QD5qjAmUSXb [(1035 - 994)] = {(148 - 148)};
    luG1OQ = (728 - 728);
    scanf ("%d", &QNeqlKpTmAUh);
    k8sgMh2l1FVY = (824 - 824);
    for (i = (168 - 167); i <= QNeqlKpTmAUh; i = i + (260 - 259)) {
        char SUhAyLsRX3i [(707 - 697)];
        gets (SUhAyLsRX3i);
        scanf ("%s %lf", pQeSvjZnJq1L[i], &a[i]);
    }
    for (i = (330 - 329); QNeqlKpTmAUh >= i; i = i + (701 - 700)) {
        if (!('m' != pQeSvjZnJq1L[i][(218 - 218)])) {
            a[luG1OQ] = a[i];
            luG1OQ++;
        }
        if (!('f' != pQeSvjZnJq1L[i][(204 - 204)])) {
            QD5qjAmUSXb[k8sgMh2l1FVY] = a[i];
            k8sgMh2l1FVY = k8sgMh2l1FVY + 1;
        }
    }
    for (i = (496 - 496); i < luG1OQ; i++) {
        for (A9UMQR = i + (653 - 652); A9UMQR < luG1OQ; A9UMQR++) {
            if (a[i] > a[A9UMQR]) {
                double  p;
                p = a[i];
                a[i] = a[A9UMQR];
                a[A9UMQR] = p;
            }
        }
    }
    printf ("%.2f", a[(798 - 798)]);
    for (i = (754 - 754); k8sgMh2l1FVY > i; i++) {
        for (A9UMQR = i + (553 - 552); A9UMQR < k8sgMh2l1FVY; A9UMQR++) {
            if (QD5qjAmUSXb[A9UMQR] > QD5qjAmUSXb[i]) {
                double  p;
                p = QD5qjAmUSXb[i];
                QD5qjAmUSXb[i] = QD5qjAmUSXb[A9UMQR];
                QD5qjAmUSXb[A9UMQR] = p;
            }
        }
    }
    for (i = (831 - 830); i < luG1OQ; i++) {
        printf (" %.2f", a[i]);
    }
    for (i = (856 - 856); i < k8sgMh2l1FVY; i++) {
        printf (" %.2f", QD5qjAmUSXb[i]);
    }
}

