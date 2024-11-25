main () {
    int l24OxJjsNl, m, fBbjOmkE2MKZ, UPkU2g, jbvQlugdM [1000];
    memset (jbvQlugdM, 0, sizeof (jbvQlugdM));
    for (UPkU2g = 0; UPkU2g < 1000; UPkU2g = UPkU2g +1) {
        scanf ("%d %d", &l24OxJjsNl, &m);
        for (fBbjOmkE2MKZ = 2; fBbjOmkE2MKZ <= l24OxJjsNl; fBbjOmkE2MKZ = fBbjOmkE2MKZ + 1)
            jbvQlugdM[fBbjOmkE2MKZ] = (jbvQlugdM[fBbjOmkE2MKZ - 1] + m) % fBbjOmkE2MKZ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (m == 0)
            break;
        if (l24OxJjsNl == 1)
            ;
        else
            printf ("%d\n", jbvQlugdM[l24OxJjsNl] + 1);
    };
}

