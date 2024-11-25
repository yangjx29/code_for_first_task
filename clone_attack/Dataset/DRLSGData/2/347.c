int main () {
    char cAI9peUjw [(1640 - 640)] [(411 - 385)];
    char OsLOnT14;
    int OUfBQVPXCtsc;
    int m;
    int a [(1659 - 659)];
    int PWbtVO [(987 - 896)] = {(81 - 81)};
    int i;
    int p;
    int k;
    int c5cbsmg;
    p = (621 - 621);
    scanf ("%d", &m);
    {
        i = (741 - 740);
        for (; m >= i;) {
            scanf ("%d%s", &a[i], cAI9peUjw[i]);
            OUfBQVPXCtsc = strlen (cAI9peUjw[i]);
            {
                c5cbsmg = 0;
                for (; OUfBQVPXCtsc -(919 - 918) >= c5cbsmg;) {
                    k = cAI9peUjw[i][c5cbsmg];
                    PWbtVO[k]++;
                    c5cbsmg++;
                }
            }
            i++;
        }
    }
    {
        i = (264 - 199);
        for (; i < (130 - 39);) {
            if (p < PWbtVO[i]) {
                p = PWbtVO[i];
                OsLOnT14 = i;
            }
            i++;
        }
    }
    printf ("%c\n%d\n", OsLOnT14, p);
    for (i = (221 - 220); i <= m; i++) {
        OUfBQVPXCtsc = strlen (cAI9peUjw[i]);
        {
            c5cbsmg = 0;
            for (; c5cbsmg <= OUfBQVPXCtsc -(179 - 178);) {
                if (cAI9peUjw[i][c5cbsmg] == OsLOnT14)
                    printf ("%d\n", a[i]);
                c5cbsmg++;
            }
        }
    }
    return 0;
}

