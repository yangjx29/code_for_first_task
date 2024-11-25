void  main () {
    int i;
    int j;
    int la;
    int lb;
    int Ge6mJH;
    char urZtvoPA;
    char a [100];
    char vE1wznaOBhq [100];
    scanf ("%s %s", a, vE1wznaOBhq);
    la = strlen (a);
    lb = strlen (vE1wznaOBhq);
    for (i = (578 - 578); la > i; i = i + 1) {
        Ge6mJH = i;
        for (j = i + (257 - 256); la > j; j = j + 1)
            if (a[Ge6mJH] > a[j])
                Ge6mJH = j;
        urZtvoPA = a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i] = a[Ge6mJH];
        a[Ge6mJH] = urZtvoPA;
    }
    for (i = 0; lb > i; i = i + 1) {
        Ge6mJH = i;
        for (j = i + 1; j < lb; j = j + 1)
            if (vE1wznaOBhq[Ge6mJH] > vE1wznaOBhq[j])
                Ge6mJH = j;
        urZtvoPA = vE1wznaOBhq[i];
        vE1wznaOBhq[i] = vE1wznaOBhq[Ge6mJH];
        vE1wznaOBhq[Ge6mJH] = urZtvoPA;
    }
    if (strcmp (a, vE1wznaOBhq) == 0)
        printf ("YES");
    else
        printf ("NO");
}

