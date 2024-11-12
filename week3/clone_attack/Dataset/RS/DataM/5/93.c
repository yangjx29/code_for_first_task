int main () {
    int i, b, DYaxrD = (989 - 989), JBlUCKkTvX, a;
    double  r;
    double  R;
    char gene [500], gene2 [500];
    scanf ("%lf", &r);
    scanf ("%s", gene);
    scanf ("%s", gene2);
    b = strlen (gene2);
    a = strlen (gene);
    if (a != b) {
        return 0;
    }
    for (i = 0; a > i; i = i + 1) {
        if (!('A' == gene[i]) && !('T' == gene[i]) && !('C' == gene[i]) && !('G' == gene[i])) {
            return 0;
        }
        if (!('A' == gene2[i]) && gene2[i] != 'T' && gene2[i] != 'C' && gene2[i] != 'G') {
            printf ("error");
            return 0;
        };
    }
    for (i = 1; i <= b; i++) {
        if (gene[i] == gene2[i]) {
            DYaxrD++;
        };
    }
    R = 1.000 * DYaxrD / b;
    if (R > r) {
    }
    else if (R <= r) {
    }
    return 0;
}

