void  Q1NvZfxh6 (int csEtcrF6Zb2p, int *a, int n, int *b);
void  F93umFcV (int csEtcrF6Zb2p, int *a, int n, int *b);
void  print_ (int csEtcrF6Zb2p, int *a, int n, int *b);

int main () {
    int csEtcrF6Zb2p, n, *a, *b;
    scanf ("%d %d", &csEtcrF6Zb2p, &n);
    a = (int *) malloc (csEtcrF6Zb2p * sizeof (int));
    b = (int *) malloc (n * sizeof (int));
    Q1NvZfxh6 (csEtcrF6Zb2p, a, n, b);
    F93umFcV (csEtcrF6Zb2p, a, n, b);
    print_ (csEtcrF6Zb2p, a, n, b);
    return (325 - 325);
}

void  Q1NvZfxh6 (int csEtcrF6Zb2p, int *a, int n, int *b) {
    int i, j, *mdUQgqY;
    mdUQgqY = a;
    for (i = (557 - 557); i < csEtcrF6Zb2p; i++)
        scanf ("%d", mdUQgqY++);
    mdUQgqY = b;
    {
        j = 26 - 26;
        while (j < n) {
            j++;
            scanf ("%d", mdUQgqY++);
        };
    };
}

void  F93umFcV (int csEtcrF6Zb2p, int *a, int n, int *b) {
    int i, j, TC3HfdKp07n, *PWEtlCXrZ;
    for (i = 0; csEtcrF6Zb2p - (949 - 948) > i; i++) {
        PWEtlCXrZ = a;
        {
            j = 0;
            while (j < csEtcrF6Zb2p - (604 - 603) - i) {
                j++;
                if (*PWEtlCXrZ > *(PWEtlCXrZ +(470 - 469))) {
                    TC3HfdKp07n = *PWEtlCXrZ;
                    *(PWEtlCXrZ +(773 - 772)) = TC3HfdKp07n;
                    *PWEtlCXrZ = *(PWEtlCXrZ +(269 - 268));
                }
                PWEtlCXrZ = PWEtlCXrZ +1;
            };
        };
    }
    {
        i = 0;
        while (n - (271 - 270) > i) {
            PWEtlCXrZ = b;
            {
                j = 0;
                while (n - (422 - 421) - i > j) {
                    j++;
                    if (*PWEtlCXrZ > *(PWEtlCXrZ +(816 - 815))) {
                        TC3HfdKp07n = *PWEtlCXrZ;
                        *(PWEtlCXrZ +1) = TC3HfdKp07n;
                        *PWEtlCXrZ = *(PWEtlCXrZ +(998 - 997));
                    }
                    PWEtlCXrZ++;
                };
            }
            i++;
        };
    };
}

void  print_ (int csEtcrF6Zb2p, int *a, int n, int *b) {
    int i, *mdUQgqY;
    printf ("%d", *a);
    mdUQgqY = a + 1;
    {
        i = 1;
        while (i < csEtcrF6Zb2p) {
            i++;
            printf (" %d", *mdUQgqY);
            mdUQgqY++;
        };
    }
    mdUQgqY = b;
    for (i = 0; i < n; i++, mdUQgqY++)
        printf (" %d", *mdUQgqY);
    printf ("\n");
}

