int main () {
    char rTvpSyagq2Y0 [(1223 - 973)] [(833 - 583)];
    int Z9Gz3c7R0Vnh = (302 - 302), min = (125 - 25);
    int n, Hbt8RZF1yu, j;
    scanf ("%d", &n);
    for (Hbt8RZF1yu = (535 - 535); n > Hbt8RZF1yu; Hbt8RZF1yu++) {
        scanf ("%s", rTvpSyagq2Y0[Hbt8RZF1yu]);
    }
    for (Hbt8RZF1yu = (389 - 389); Hbt8RZF1yu < n; Hbt8RZF1yu++) {
        if (Z9Gz3c7R0Vnh < strlen (rTvpSyagq2Y0[Hbt8RZF1yu]))
            Z9Gz3c7R0Vnh = strlen (rTvpSyagq2Y0[Hbt8RZF1yu]);
        if (strlen (rTvpSyagq2Y0[Hbt8RZF1yu]) < min)
            min = strlen (rTvpSyagq2Y0[Hbt8RZF1yu]);
    }
    for (j = (496 - 496); j < n; j++) {
        if (strlen (rTvpSyagq2Y0[j]) == Z9Gz3c7R0Vnh) {
            printf ("%s\n", rTvpSyagq2Y0[j]);
            break;
        };
    }
    for (j = 0; j < n; j++) {
        if (strlen (rTvpSyagq2Y0[j]) == min) {
            printf ("%s\n", rTvpSyagq2Y0[j]);
            break;
        };
    }
    return 0;
}

