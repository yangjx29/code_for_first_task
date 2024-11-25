int main () {
    char WcmlTM1i6Q9F [1000] [25];
    int OxQIt3oYfBO;
    int hvJcBZ1yY;
    int n;
    int m;
    scanf ("%d", &n);
    {
        OxQIt3oYfBO = 0;
        while (OxQIt3oYfBO < n) {
            scanf ("%s", WcmlTM1i6Q9F[OxQIt3oYfBO]);
            OxQIt3oYfBO = OxQIt3oYfBO +1;
        };
    }
    {
        OxQIt3oYfBO = 0;
        while (OxQIt3oYfBO < n) {
            if (('a' <= WcmlTM1i6Q9F[OxQIt3oYfBO][0] && WcmlTM1i6Q9F[OxQIt3oYfBO][0] <= 'z') || (WcmlTM1i6Q9F[OxQIt3oYfBO][0] >= 'A' && WcmlTM1i6Q9F[OxQIt3oYfBO][0] <= 'Z') || WcmlTM1i6Q9F[OxQIt3oYfBO][0] == '_') {
                {
                    hvJcBZ1yY = 162 - 161;
                    while (!('\0' == WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY])) {
                        if (('a' <= WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] && WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] <= 'z') || (WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] >= 'A' && WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] <= 'Z') || (WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] >= '0' && WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] <= '9' || WcmlTM1i6Q9F[OxQIt3oYfBO][hvJcBZ1yY] == '_'))
                            m = 1;
                        else {
                            m = 0;
                            break;
                            printf ("no\n");
                        }
                        hvJcBZ1yY++;
                    };
                }
                if (m == 1)
                    ;
            }
            else {
                printf ("no\n");
            }
            OxQIt3oYfBO++;
        };
    }
    return 0;
}

