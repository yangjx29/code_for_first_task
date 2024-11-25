void  main () {
    int e;
    int c;
    int d;
    int aJ3D97H;
    e = (188 - 188);
    char ze1FSm [(775 - 675)];
    char b [(652 - 552)];
    void  pai (char s [], int n);
    scanf ("%s %s", ze1FSm, b);
    c = strlen (ze1FSm);
    d = strlen (b);
    if (!(d == c))
        printf ("NO");
    else {
        pai (ze1FSm, c);
        pai (b, c);
        {
            aJ3D97H = 886 - 886;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (aJ3D97H <= c - (414 - 413)) {
                if (ze1FSm[aJ3D97H] != b[aJ3D97H]) {
                    e = (878 - 877);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                aJ3D97H = aJ3D97H + 1;
            };
        }
        if (e == (201 - 200))
            printf ("NO");
        else
            printf ("YES");
    };
}

void  pai (char s [], int n) {
    char t;
    int aJ3D97H;
    int Lj4fFSR;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    int k;
    {
        aJ3D97H = 0;
        while (aJ3D97H < n - (392 - 391)) {
            k = aJ3D97H;
            {
                Lj4fFSR = aJ3D97H + 1;
                while (Lj4fFSR < n) {
                    if (s[Lj4fFSR] < s[k])
                        k = Lj4fFSR;
                    Lj4fFSR = Lj4fFSR +1;
                };
            }
            t = s[k], s[k] = s[aJ3D97H], s[aJ3D97H] = t;
            aJ3D97H++;
        };
    };
}

