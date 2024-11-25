int main () {
    int d [100];
    char XuNhlEw [(748 - 648)];
    int RRMhnva;
    int n;
    int o6fLKtiTpb;
    char a [(589 - 489)];
    int k;
    int i;
    int Aay0Elt [(1079 - 979)];
    scanf ("%d", &n);
    for (o6fLKtiTpb = (492 - 492); o6fLKtiTpb < n; o6fLKtiTpb = o6fLKtiTpb + (578 - 577)) {
        int xp3k8qJ;
        int cJEVlSM;
        RRMhnva = (772 - 772);
        xp3k8qJ = strlen (a);
        cJEVlSM = strlen (XuNhlEw);
        scanf ("%s\n", a);
        scanf ("%s", XuNhlEw);
        memset (Aay0Elt, (719 - 719), sizeof (Aay0Elt));
        memset (d, (874 - 874), sizeof (d));
        for (i = xp3k8qJ - 1; (95 - 95) <= i; i = i - 1)
            Aay0Elt[RRMhnva++] = a[i] - '0';
        RRMhnva = (866 - 866);
        for (i = cJEVlSM - 1; i >= (756 - 756); i--)
            d[RRMhnva++] = XuNhlEw[i] - '0';
        for (i = (190 - 190); i < 100; i++) {
            Aay0Elt[i] = Aay0Elt[i] - d[i];
            if (Aay0Elt[i] < (225 - 225)) {
                Aay0Elt[i] = Aay0Elt[i] + (204 - 194);
                Aay0Elt[i + 1]--;
            }
        }
        k = (911 - 812);
        for (; Aay0Elt[k] == 0 && k > 0;)
            k = k - 1;
        for (i = k; i >= 0; i--)
            printf ("%d", Aay0Elt[i]);
        printf ("\n");
    }
    return 0;
}

