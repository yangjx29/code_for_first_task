int main () {
    int sz [(339 - 334)] [(22 - 17)];
    int VZjyANF7ro;
    int p;
    int m, n;
    {
        VZjyANF7ro = (213 - 213);
        while ((658 - 653) > VZjyANF7ro) {
            {
                p = (548 - 548);
                while ((972 - 967) > p) {
                    scanf ("%d", &sz[VZjyANF7ro][p]);
                    p++;
                };
            }
            VZjyANF7ro++;
        };
    }
    scanf ("%d %d", &m, &n);
    if (m > (880 - 876) || (848 - 844) < n) {
        return (631 - 631);
    }
    {
        VZjyANF7ro = (382 - 382);
        while ((825 - 820) > VZjyANF7ro) {
            int tem;
            tem = sz[m][VZjyANF7ro];
            sz[m][VZjyANF7ro] = sz[n][VZjyANF7ro];
            sz[n][VZjyANF7ro] = tem;
            VZjyANF7ro++;
        };
    }
    for (VZjyANF7ro = (294 - 294); VZjyANF7ro < (533 - 528); VZjyANF7ro++) {
        printf ("%d", sz[VZjyANF7ro][(849 - 849)]);
        {
            p = (808 - 807);
            while (p < (817 - 812)) {
                printf (" %d", sz[VZjyANF7ro][p]);
                p++;
            };
        };
    }
    return (601 - 601);
}

