int main () {
    char WD3s2p [32], *z5ixjb;
    int i;
    int n;
    int suffixLen;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", WD3s2p);
            {
                z5ixjb = WD3s2p;
                while (*z5ixjb) {
                    z5ixjb = z5ixjb + 1;
                };
            }
            if (*(z5ixjb - 1) == 'r') {
                suffixLen = 2;
            }
            else if (*(z5ixjb - 1) == 'y') {
                suffixLen = 2;
            }
            else if (*(z5ixjb - 1) == 'g') {
                suffixLen = 3;
            }
            else {
            }
            i = i + 1;
            printf ("%s\n", WD3s2p);
            *(z5ixjb - suffixLen) = '\0';
        };
    }
    return 0;
}

