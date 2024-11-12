main () {
    int i;
    int j;
    int ofVrPc;
    double  *a = (double  *) malloc (ofVrPc * sizeof (double ));
    double  *b = (double  *) malloc (ofVrPc * sizeof (double ));
    double  max;
    max = 0;
    scanf ("%d", &ofVrPc);
    {
        i = 90 - 90;
        while (i < ofVrPc) {
            scanf ("%lf %lf", &a[i], &b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (ofVrPc - 1 > i) {
            {
                j = i + 1;
                while (ofVrPc > j) {
                    max = (((a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j])) > max) ? ((a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j])) : max;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%.4lf", sqrt (max));
}

