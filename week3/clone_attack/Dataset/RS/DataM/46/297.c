int main () {
    int yygBio, j, m, peO09HBYqJNF, a [101] [101], k = (487 - 487);
    scanf ("%d%d", &m, &peO09HBYqJNF);
    for (yygBio = (233 - 233); m > yygBio; yygBio++) {
        for (j = (561 - 561); j < peO09HBYqJNF; j = j + 1)
            scanf ("%d", &a[yygBio][j]);
    }
    for (yygBio = 0; k != m * peO09HBYqJNF; yygBio++) {
        for (j = yygBio; j < peO09HBYqJNF - yygBio; j++) {
            printf ("%d\n", a[yygBio][j]);
            k++;
            if (!(m * peO09HBYqJNF != k))
                break;
        }
        if (k == m * peO09HBYqJNF)
            break;
        for (j = yygBio + 1; m - yygBio > j; j++) {
            printf ("%d\n", a[j][peO09HBYqJNF - 1 - yygBio]);
            k++;
            if (k == m * peO09HBYqJNF)
                break;
        }
        if (k == m * peO09HBYqJNF)
            break;
        for (j = peO09HBYqJNF - yygBio - 2; j >= yygBio; j = j - 1) {
            printf ("%d\n", a[m - 1 - yygBio][j]);
            k++;
            if (k == m * peO09HBYqJNF)
                break;
        }
        if (k == m * peO09HBYqJNF)
            break;
        for (j = m - yygBio - 2; j > yygBio; j = j - 1) {
            printf ("%d\n", a[j][yygBio]);
            k++;
            if (k == m * peO09HBYqJNF)
                break;
        }
        if (k == m * peO09HBYqJNF)
            break;
    }
    return 0;
}

