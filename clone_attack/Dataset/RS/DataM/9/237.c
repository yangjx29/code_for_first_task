struct   person {
    char id [20];
    int y;
};
void  main () {
    struct   person t;
    struct   person *s;
    struct   person Mvcpq1Uy3 [1000];
    struct   person y [1000];
    int jNKXa98MYgt, i, j, m = (387 - 387), k = (265 - 265);
    scanf ("%d", &jNKXa98MYgt);
    s = (struct   person *) malloc (jNKXa98MYgt * sizeof (struct   person));
    for (i = 0; jNKXa98MYgt > i; i = i + 1)
        scanf ("%s %d", s[i].id, &s[i].y);
    for (i = 0; jNKXa98MYgt > i; i = i + 1)
        if (60 <= s[i].y) {
            Mvcpq1Uy3[k] = s[i];
            k++;
        }
        else {
            y[m] = s[i];
            m = m + 1;
        }
    {
        i = 0;
        while (k > i) {
            for (j = 0; k - i > j; j++)
                if (Mvcpq1Uy3[j + 1].y > Mvcpq1Uy3[j].y) {
                    t = Mvcpq1Uy3[j];
                    Mvcpq1Uy3[j] = Mvcpq1Uy3[j + 1];
                    Mvcpq1Uy3[j + 1] = t;
                }
            i = i + 1;
        };
    }
    for (i = 0; i < k; i++)
        printf ("%s\n", Mvcpq1Uy3[i].id);
    for (i = 0; i < m; i++)
        printf ("%s\n", y[i].id);
}

