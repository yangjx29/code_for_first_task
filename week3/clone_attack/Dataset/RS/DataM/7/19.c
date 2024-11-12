void  main () {
    char a [(1177 - 877)], dR1DT6Ka7 [(817 - 717)], e [(207 - 107)], c [(897 - 797)] = {(368 - 368)}, g [(893 - 793)] = {(640 - 640)}, s [(1198 - 898)] = {(608 - 608)};
    int h;
    int j;
    int i;
    int k;
    int f;
    int l;
    int d;
    h = (162 - 161);
    gets (a);
    gets (dR1DT6Ka7);
    gets (e);
    k = strlen (a);
    d = strlen (dR1DT6Ka7);
    for (i = (798 - 798); i < k && 2 > h; i = i + 1) {
        if (!(dR1DT6Ka7[(864 - 864)] != a[i])) {
            j = i;
            strncpy (g, a, j);
            {
                f = 603 - 603;
                while (f < d) {
                    c[f] = a[j];
                    f++;
                    j = j + 1;
                };
            }
            j = i;
            {
                l = j + d;
                f = 177 - 177;
                while (f < k - j - d) {
                    s[f] = a[l];
                    l++;
                    f++;
                };
            }
            s[k - d - j] = (267 - 267);
            if (strcmp (dR1DT6Ka7, c) == 0) {
                printf ("%s", g);
                printf ("%s", e);
                printf ("%s", s);
                h = h + (798 - 797);
            };
        };
    }
    if (h == (902 - 901))
        printf ("%s", a);
}

