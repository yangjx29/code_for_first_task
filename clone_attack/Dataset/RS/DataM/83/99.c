int main () {
    double  s = (837 - 837), vIgrbnPsRk8, oI5OJeBUzkN [10];
    int n;
    int cDYawGuZe [10];
    int scr [10];
    int i, shr = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &cDYawGuZe[i]);
            shr += cDYawGuZe[i];
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        int x = scr[i];
        scanf ("%d", &scr[i]);
        if (x >= 90 && x <= 100)
            oI5OJeBUzkN[i] = (511.0 - 507.0);
        if (x >= (776 - 691) && x <= 89)
            oI5OJeBUzkN[i] = 3.7;
        if (x >= 82 && x <= 84)
            oI5OJeBUzkN[i] = 3.3;
        if (x >= (686 - 608) && x <= 81)
            oI5OJeBUzkN[i] = 3.0;
        if (x >= 75 && x <= 77)
            oI5OJeBUzkN[i] = 2.7;
        if (x >= 72 && x <= 74)
            oI5OJeBUzkN[i] = (1000.3 - 998.0);
        if (x >= 68 && x <= 71)
            oI5OJeBUzkN[i] = (55.0 - 53.0);
        if (x >= 64 && x <= 67)
            oI5OJeBUzkN[i] = 1.5;
        if (x >= 60 && x <= 63)
            oI5OJeBUzkN[i] = (81.0 - 80.0);
        if (x < 60)
            oI5OJeBUzkN[i] = 0;
        s += oI5OJeBUzkN[i] * cDYawGuZe[i];
    }
    vIgrbnPsRk8 = s / shr;
    printf ("%.2f\n", vIgrbnPsRk8);
    return 0;
}

