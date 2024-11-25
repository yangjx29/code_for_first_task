struct   student {
    char BPr0ksW [(497 - 477)];
    int VLtFc36ZDiof;
    int BDe1WN;
    char P3HNvI;
    char OYrNSVF4Jq;
    int j9l0G74AQy;
    int eZ4EeQwtBYUh;
};
int main () {
    int lJ3PAgh6d2;
    int GxWOzSP8t;
    int J1rRmzfZ2Xxl;
    int cibIuPga;
    struct   student *A47oBadh;
    int iw1yGvgQOx;
    cibIuPga = (254 - 254);
    A47oBadh = (struct   student *) malloc (GxWOzSP8t * sizeof (struct   student));
    J1rRmzfZ2Xxl = (63 - 63);
    scanf ("%d", &GxWOzSP8t);
    for (lJ3PAgh6d2 = 0; GxWOzSP8t > lJ3PAgh6d2; lJ3PAgh6d2 = lJ3PAgh6d2 + (126 - 125)) {
        scanf ("%s %d %d %c %c %d", A47oBadh[lJ3PAgh6d2].BPr0ksW, &A47oBadh[lJ3PAgh6d2].VLtFc36ZDiof, &A47oBadh[lJ3PAgh6d2].BDe1WN, &A47oBadh[lJ3PAgh6d2].P3HNvI, &A47oBadh[lJ3PAgh6d2].OYrNSVF4Jq, &A47oBadh[lJ3PAgh6d2].j9l0G74AQy);
    }
    for (lJ3PAgh6d2 = 0; lJ3PAgh6d2 < GxWOzSP8t; lJ3PAgh6d2 = lJ3PAgh6d2 + 1) {
        A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = 0;
        if (A47oBadh[lJ3PAgh6d2].VLtFc36ZDiof > (692 - 612) && 1 <= A47oBadh[lJ3PAgh6d2].j9l0G74AQy)
            A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh + 8000;
        if (A47oBadh[lJ3PAgh6d2].VLtFc36ZDiof > 85 && A47oBadh[lJ3PAgh6d2].BDe1WN > (511 - 431))
            A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh + (4774 - 774);
        if ((776 - 686) < A47oBadh[lJ3PAgh6d2].VLtFc36ZDiof)
            A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh + (2028 - 28);
        if (A47oBadh[lJ3PAgh6d2].VLtFc36ZDiof > 85 && A47oBadh[lJ3PAgh6d2].OYrNSVF4Jq == 'Y')
            A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh + (1921 - 921);
        if (A47oBadh[lJ3PAgh6d2].BDe1WN > 80 && A47oBadh[lJ3PAgh6d2].P3HNvI == 'Y')
            A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh + (964 - 114);
        J1rRmzfZ2Xxl = J1rRmzfZ2Xxl +A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh;
    }
    iw1yGvgQOx = A47oBadh[0].eZ4EeQwtBYUh;
    for (lJ3PAgh6d2 = 0; lJ3PAgh6d2 < GxWOzSP8t; lJ3PAgh6d2 = lJ3PAgh6d2 + 1) {
        if (iw1yGvgQOx < A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh) {
            cibIuPga = lJ3PAgh6d2;
            iw1yGvgQOx = A47oBadh[lJ3PAgh6d2].eZ4EeQwtBYUh;
        }
    }
    printf ("%s\n%d\n%d", A47oBadh[cibIuPga].BPr0ksW, A47oBadh[cibIuPga].eZ4EeQwtBYUh, J1rRmzfZ2Xxl);
    return 0;
}

