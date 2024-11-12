int main () {
    int EDm3lsG;
    char MDEvRk6bzUc [(418 - 408)];
    int OniS5gY9WU;
    float csQ6dGoT3cz [(695 - 653)];
    int K0hHb7;
    float d2cueURh3p1f;
    float VEQq9SW;
    int zj7PHRL;
    int gYVXETh6Ar;
    OniS5gY9WU = EDm3lsG;
    scanf ("%d", &EDm3lsG);
    zj7PHRL = (374 - 374);
    for (gYVXETh6Ar = (449 - 449); EDm3lsG > gYVXETh6Ar; gYVXETh6Ar = gYVXETh6Ar + (635 - 634)) {
        scanf ("%s %f", MDEvRk6bzUc, &d2cueURh3p1f);
        if (!('m' != MDEvRk6bzUc[(155 - 155)])) {
            csQ6dGoT3cz[zj7PHRL] = d2cueURh3p1f;
            zj7PHRL = zj7PHRL + (974 - 973);
        }
        else {
            csQ6dGoT3cz[OniS5gY9WU] = d2cueURh3p1f;
            OniS5gY9WU = OniS5gY9WU -(992 - 991);
        }
    }
    for (gYVXETh6Ar = 0; zj7PHRL - (202 - 201) > gYVXETh6Ar; gYVXETh6Ar = gYVXETh6Ar + (205 - 204)) {
        for (K0hHb7 = gYVXETh6Ar; K0hHb7 < zj7PHRL; K0hHb7 = K0hHb7 +(194 - 193)) {
            if (csQ6dGoT3cz[gYVXETh6Ar] > csQ6dGoT3cz[K0hHb7]) {
                VEQq9SW = csQ6dGoT3cz[gYVXETh6Ar];
                csQ6dGoT3cz[gYVXETh6Ar] = csQ6dGoT3cz[K0hHb7];
                csQ6dGoT3cz[K0hHb7] = VEQq9SW;
            }
        }
        printf ("%.2f ", csQ6dGoT3cz[gYVXETh6Ar]);
    }
    printf ("%.2f ", csQ6dGoT3cz[zj7PHRL - (877 - 876)]);
    for (gYVXETh6Ar = EDm3lsG; OniS5gY9WU +(565 - 564) < gYVXETh6Ar; gYVXETh6Ar = gYVXETh6Ar - (403 - 402)) {
        for (K0hHb7 = gYVXETh6Ar; OniS5gY9WU < K0hHb7; K0hHb7 = K0hHb7 -1) {
            if (csQ6dGoT3cz[gYVXETh6Ar] > csQ6dGoT3cz[K0hHb7]) {
                VEQq9SW = csQ6dGoT3cz[gYVXETh6Ar];
                csQ6dGoT3cz[gYVXETh6Ar] = csQ6dGoT3cz[K0hHb7];
                csQ6dGoT3cz[K0hHb7] = VEQq9SW;
            }
        }
    }
    for (gYVXETh6Ar = OniS5gY9WU +1; gYVXETh6Ar < EDm3lsG; gYVXETh6Ar = gYVXETh6Ar + 1)
        printf ("%.2f ", csQ6dGoT3cz[gYVXETh6Ar]);
    printf ("%.2f", csQ6dGoT3cz[EDm3lsG]);
    return 0;
}

