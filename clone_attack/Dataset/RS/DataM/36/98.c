int main () {
    int i, VvTYPn, k = (324 - 324);
    char DD5HCAl1P [100], PfhoW53 [100];
    scanf ("%s %s", DD5HCAl1P, PfhoW53);
    if (!(strlen (PfhoW53) != strlen (DD5HCAl1P))) {
        int m = strlen (DD5HCAl1P);
        {
            i = 0;
            while (m > i) {
                for (VvTYPn = 0; VvTYPn < m; VvTYPn = VvTYPn +1) {
                    if (PfhoW53[VvTYPn] == '0')
                        continue;
                    else if (DD5HCAl1P[i] == PfhoW53[VvTYPn]) {
                        PfhoW53[VvTYPn] = '0';
                        k = k + 1;
                        break;
                    };
                }
                i = i + 1;
            };
        }
        if (k == m)
            printf ("YES");
        else
            printf ("NO");
    }
    else {
        if (strlen (DD5HCAl1P) != strlen (PfhoW53))
            printf ("NO");
    };
}

