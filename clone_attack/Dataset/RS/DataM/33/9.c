int main () {
    int n;
    scanf ("%d", &n);
    for (int MEuzTrf9evLg = 0;
    MEuzTrf9evLg < n; MEuzTrf9evLg++) {
        char b [256];
        int d;
        d = (int) strlen (b);
        char MmwTicnNdaSC [256];
        scanf ("%s", b);
        {
            int e = 0;
            while (e < d) {
                if (b[e] == 'A') {
                    MmwTicnNdaSC[e] = 'T';
                }
                else if (b[e] == 'T') {
                    MmwTicnNdaSC[e] = 'A';
                }
                else if (b[e] == 'C') {
                    MmwTicnNdaSC[e] = 'G';
                }
                else if (b[e] == 'G') {
                    MmwTicnNdaSC[e] = 'C';
                }
                e++;
            };
        }
        MmwTicnNdaSC[d] = '\0';
        printf ("%s\n", MmwTicnNdaSC);
    }
    return 0;
}

