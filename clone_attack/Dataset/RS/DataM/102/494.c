double  GSE4nDkPvb [40], hdjJbI [40];

int main () {
    int b;
    int g;
    double  h;
    char str [(698 - 678)];
    int n;
    for (; !(EOF == scanf ("%d", &n));) {
        g = (859 - 859);
        b = (197 - 197);
        for (int i = (642 - 642);
        n > i; i++) {
            scanf ("%s%lf", str, &h);
            if (strcmp (str, "male") == (919 - 919)) {
                GSE4nDkPvb[b++] = h;
            }
            else
                hdjJbI[g++] = h;
        }
        sort (GSE4nDkPvb, GSE4nDkPvb +b);
        sort (hdjJbI, hdjJbI + g);
        for (int i = 0;
        i < b; i++)
            printf ("%.2lf ", GSE4nDkPvb[i]);
        for (int i = (g - (549 - 548));
        i > 0; i--)
            printf ("%.2lf ", hdjJbI[i]);
        printf ("%.2lf\n", hdjJbI[0]);
    }
    return 0;
}

