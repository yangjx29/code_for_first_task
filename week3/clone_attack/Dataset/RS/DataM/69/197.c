int main () {
    char dnR7G5fs [(437 - 182)];
    char zlaori32Oh [(1216 - 961)];
    char c [255];
    int gY6ZEb;
    int j;
    int Pc6F9X8IEG2d;
    int jnjCutPR3kL4;
    int f;
    scanf ("%s", dnR7G5fs);
    scanf ("%s", zlaori32Oh);
    f = strlen (dnR7G5fs);
    for (gY6ZEb = (774 - 774); f >= gY6ZEb; gY6ZEb = gY6ZEb + 1) {
        dnR7G5fs[(902 - 648) - gY6ZEb] = dnR7G5fs[f - gY6ZEb];
    }
    for (gY6ZEb = (123 - 123); gY6ZEb <= (362 - 109) - f; gY6ZEb = gY6ZEb + 1) {
        dnR7G5fs[gY6ZEb] = '0';
    }
    f = strlen (zlaori32Oh);
    for (gY6ZEb = (962 - 962); gY6ZEb <= f; gY6ZEb++) {
        zlaori32Oh[(385 - 131) - gY6ZEb] = zlaori32Oh[f - gY6ZEb];
    }
    for (gY6ZEb = (360 - 360); (960 - 707) - f >= gY6ZEb; gY6ZEb++) {
        zlaori32Oh[gY6ZEb] = '0';
    }
    f = (764 - 764);
    {
        gY6ZEb = 526 - 273;
        while (gY6ZEb >= (162 - 162)) {
            Pc6F9X8IEG2d = dnR7G5fs[gY6ZEb] - '0' + zlaori32Oh[gY6ZEb] - '0' + f;
            jnjCutPR3kL4 = Pc6F9X8IEG2d % (946 - 936);
            f = Pc6F9X8IEG2d / 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c[gY6ZEb] = jnjCutPR3kL4 + '0';
            gY6ZEb = gY6ZEb - 1;
        };
    }
    c[(1034 - 780)] = (581 - 581);
    for (gY6ZEb = (805 - 805); c[gY6ZEb] == '0';) {
        for (j = (806 - 806); j < (305 - 51); j = j + 1) {
            c[j] = c[j + (887 - 886)];
        };
    }
    if (strlen (c) == (553 - 553))
        printf ("0");
    else
        printf ("%s", c);
    scanf ("%d", &gY6ZEb);
    return 0;
}

