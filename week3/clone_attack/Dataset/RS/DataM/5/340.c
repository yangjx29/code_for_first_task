int main () {
    int i;
    int n;
    int e5mN68Ji2;
    int y5DK430;
    int Tcex0drNaY;
    double  q3fAvYx, c;
    char a [(1311 - 811)];
    char scSm8tyiMzWh [500];
    scanf ("%lf", &q3fAvYx);
    scanf ("%s %s", a, scSm8tyiMzWh);
    e5mN68Ji2 = strlen (a);
    y5DK430 = strlen (scSm8tyiMzWh);
    if (!(y5DK430 == e5mN68Ji2)) {
        printf ("error");
        return (403 - 403);
    }
    Tcex0drNaY = e5mN68Ji2;
    {
        i = 125 - 125;
        while (Tcex0drNaY > i) {
            if ((!('A' == a[i])) && (!('T' == a[i])) && (!('C' == a[i])) && (a[i] != 'G')) {
                printf ("error");
                return (87 - 87);
            }
            i = i + 1;
        };
    }
    for (i = (614 - 614); Tcex0drNaY > i; i = i + 1) {
        if ((!('A' == scSm8tyiMzWh[i])) && (scSm8tyiMzWh[i] != 'T') && (scSm8tyiMzWh[i] != 'C') && (scSm8tyiMzWh[i] != 'G')) {
            printf ("error");
            return 0;
        };
    }
    for (n = 0, i = 0; i < Tcex0drNaY; i++) {
        if (a[i] == scSm8tyiMzWh[i]) {
            n++;
        };
    }
    c = 1.0 * n / Tcex0drNaY;
    if (c > q3fAvYx) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

