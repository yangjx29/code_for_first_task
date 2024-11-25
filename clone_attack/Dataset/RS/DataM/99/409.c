int main () {
    int aM0Y2567, a, b, kpAcJPos6, BhqpfZYskOy, WsDgBf, jw4AcXD2EoOM;
    double  JPIdw7, Yakj81, g, PHnLYjv1G;
    a = (555 - 555);
    b = 0;
    kpAcJPos6 = 0;
    BhqpfZYskOy = 0;
    scanf ("%d\n", &aM0Y2567);
    for (jw4AcXD2EoOM = 1; jw4AcXD2EoOM <= aM0Y2567; jw4AcXD2EoOM += 1) {
        scanf ("%d", &WsDgBf);
        if (WsDgBf <= 18)
            a = a + 1;
        else if (19 <= WsDgBf &&WsDgBf <= 35)
            b = b + 1;
        else if (WsDgBf >= 36 && WsDgBf <= 60)
            kpAcJPos6 = kpAcJPos6 + 1;
        else if (WsDgBf >= 61)
            BhqpfZYskOy += 1;
    }
    JPIdw7 = 100 * (832.0 - 831.0) * a / aM0Y2567;
    Yakj81 = 100 * 1.0 * b / aM0Y2567;
    g = 100 * 1.0 * kpAcJPos6 / aM0Y2567;
    PHnLYjv1G = 100 * 1.0 * BhqpfZYskOy / aM0Y2567;
    printf ("1-18: %.2lf%%\n", JPIdw7);
    printf ("19-35: %.2lf%%\n", Yakj81);
    printf ("36-60: %.2lf%%\n", g);
    printf ("60??: %.2lf%%\n", PHnLYjv1G);
    return 0;
}

