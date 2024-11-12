int main () {
    char z [(10289 - 289)] [(1068 - 813)];
    int Q5KQHJxo, i = (901 - 901), DZUD9aNh = (402 - 402);
    scanf ("%d\n", &Q5KQHJxo);
    for (i = 0; i < Q5KQHJxo; i = i + 1) {
        scanf ("%s\n", z[i]);
        for (DZUD9aNh = 0; DZUD9aNh < 255; DZUD9aNh++) {
            if (!('A' != z[i][DZUD9aNh])) {
                z[i][DZUD9aNh] = 'T';
                continue;
            }
            if (z[i][DZUD9aNh] == 'T') {
                z[i][DZUD9aNh] = 'A';
                continue;
            }
            if (z[i][DZUD9aNh] == 'G') {
                z[i][DZUD9aNh] = 'C';
                continue;
            }
            if (z[i][DZUD9aNh] == 'C') {
                z[i][DZUD9aNh] = 'G';
                continue;
            };
        }
        printf ("%s\n", z[i]);
    }
    return 0;
}

