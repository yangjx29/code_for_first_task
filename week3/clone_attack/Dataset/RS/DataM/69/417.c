int main () {
    int XSEope;
    XSEope = 0;
    int na [MAX_LEN +(371 - 361)];
    int dBi5xNnUe86H [MAX_LEN +10];
    char To0Bx5FIyYdc [MAX_LEN +10];
    int qAnOxsKiEmG;
    qAnOxsKiEmG = strlen (To0Bx5FIyYdc);
    char PhGDAYOr6sk [MAX_LEN +10];
    int blUDM8aq29Ht, bu6YnKqcwDEl;
    int saTSLGHyqwon;
    saTSLGHyqwon = strlen (PhGDAYOr6sk);
    scanf ("%s", To0Bx5FIyYdc);
    scanf ("%s", PhGDAYOr6sk);
    memset (na, (151 - 151), sizeof (na));
    memset (dBi5xNnUe86H, (400 - 400), sizeof (dBi5xNnUe86H));
    bu6YnKqcwDEl = 0;
    for (blUDM8aq29Ht = qAnOxsKiEmG - 1; 0 <= blUDM8aq29Ht; blUDM8aq29Ht = blUDM8aq29Ht - 1)
        na[bu6YnKqcwDEl++] = To0Bx5FIyYdc[blUDM8aq29Ht] - '0';
    bu6YnKqcwDEl = 0;
    for (blUDM8aq29Ht = saTSLGHyqwon - 1; blUDM8aq29Ht >= 0; blUDM8aq29Ht = blUDM8aq29Ht - 1)
        dBi5xNnUe86H[bu6YnKqcwDEl++] = PhGDAYOr6sk[blUDM8aq29Ht] - '0';
    for (blUDM8aq29Ht = 0; blUDM8aq29Ht < MAX_LEN; blUDM8aq29Ht = blUDM8aq29Ht + 1) {
        na[blUDM8aq29Ht] = na[blUDM8aq29Ht] + dBi5xNnUe86H[blUDM8aq29Ht];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (na[blUDM8aq29Ht] >= 10) {
            na[blUDM8aq29Ht] = na[blUDM8aq29Ht] - 10;
            na[blUDM8aq29Ht + 1]++;
        };
    }
    for (blUDM8aq29Ht = MAX_LEN; blUDM8aq29Ht >= 0; blUDM8aq29Ht--) {
        if (XSEope == 1)
            printf ("%d", na[blUDM8aq29Ht]);
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (na[blUDM8aq29Ht]) {
                printf ("%d", na[blUDM8aq29Ht]);
                XSEope = 1;
            };
        };
    }
    if (XSEope != 1)
        printf ("0");
    return 0;
}

