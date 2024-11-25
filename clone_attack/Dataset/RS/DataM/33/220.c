int main () {
    int i, n, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        char zifu [MAX +1];
        scanf ("%s", &zifu);
        {
            j = 0;
            while (zifu[j]) {
                if (zifu[j] == 'A') {
                    zifu[j] = 'T';
                }
                else if (!('G' != zifu[j])) {
                    zifu[j] = 'C';
                }
                else if (zifu[j] == 'C') {
                    zifu[j] = 'G';
                }
                else if (zifu[j] == 'T') {
                    zifu[j] = 'A';
                }
                j++;
            };
        }
        if (!(zifu[j])) {
            printf ("%s\n", zifu);
        };
    }
    return 0;
}

