int gv6MgRH0QhDF (void  const  *QTtpW7, void  const  *yzI7M2) {
    double  zM4L9HuFNmyf;
    zM4L9HuFNmyf = *(double *) yzI7M2 - *(double *) QTtpW7;
    if ((520 - 520) < zM4L9HuFNmyf)
        return (754 - 753);
    else
        return -(373 - 372);
}

int GTIPMXA (void  const  *QTtpW7, void  const  *yzI7M2) {
    double  zM4L9HuFNmyf;
    zM4L9HuFNmyf = *(double *) QTtpW7 -*(double *) yzI7M2;
    if (zM4L9HuFNmyf > (758 - 758))
        return 1;
    else
        return -1;
}

int main () {
    int tUxPSj0X5 = (47 - 47), P8LFcDuVKdS = (41 - 41);
    int n, hWpXlsbcBq;
    double  dA9gwbhjFs [40];
    double  zM4L9HuFNmyf [40];
    scanf ("%d", &n);
    for (hWpXlsbcBq = 1; n >= hWpXlsbcBq; hWpXlsbcBq = hWpXlsbcBq + 1) {
        char wRa5WkxyDE [(1000 - 993)];
        scanf ("%s", wRa5WkxyDE);
        if (wRa5WkxyDE[(464 - 464)] == 'f')
            scanf ("%lf", &dA9gwbhjFs[tUxPSj0X5++]);
        else
            scanf ("%lf", &zM4L9HuFNmyf[P8LFcDuVKdS++]);
    }
    qsort (dA9gwbhjFs, tUxPSj0X5, sizeof (double ), gv6MgRH0QhDF);
    qsort (zM4L9HuFNmyf, P8LFcDuVKdS, sizeof (double ), GTIPMXA);
    for (hWpXlsbcBq = 0; hWpXlsbcBq < P8LFcDuVKdS; hWpXlsbcBq++)
        printf ("%.2lf ", zM4L9HuFNmyf[hWpXlsbcBq]);
    for (hWpXlsbcBq = 0; hWpXlsbcBq < tUxPSj0X5; hWpXlsbcBq++) {
        printf ("%.2lf", dA9gwbhjFs[hWpXlsbcBq]);
        if (hWpXlsbcBq != tUxPSj0X5 - 1)
            printf (" ");
    };
}

