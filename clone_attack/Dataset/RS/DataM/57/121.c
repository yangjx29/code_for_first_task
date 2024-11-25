int main () {
    char zfc [33];
    int APDXMZ1GapoS, j, n, len;
    scanf ("%d", &n);
    {
        APDXMZ1GapoS = 0;
        while (APDXMZ1GapoS <= n) {
            gets (zfc);
            APDXMZ1GapoS = APDXMZ1GapoS +1;
            len = strlen (zfc);
            if (zfc[len - 1] == 'r') {
                if (!('e' != zfc[len - 2])) {
                    zfc[len - 2] = '\0';
                };
            }
            else if (zfc[len - 1] == 'g') {
                if (zfc[len - 2] == 'n') {
                    if (zfc[len - 3] == 'i') {
                        zfc[len - 3] = '\0';
                    };
                };
            }
            else if (zfc[len - 1] == 'y') {
                if (zfc[len - 2] == 'l') {
                    zfc[len - 2] = '\0';
                };
            }
            printf ("%s\n", zfc);
        };
    }
    return 0;
}

