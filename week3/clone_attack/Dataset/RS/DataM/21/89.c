int main () {
    double  max;
    double  tDGbtXOJjrh;
    double  p;
    int MkbACQ3FH [(836 - 736)];
    int zpTjAMm;
    int M4GePxb;
    int j;
    j = 0;
    tDGbtXOJjrh = (685 - 685);
    max = (619 - 619);
    scanf ("%d", &zpTjAMm);
    for (M4GePxb = 1; M4GePxb <= zpTjAMm; M4GePxb = M4GePxb +1) {
        scanf ("%d", &MkbACQ3FH[M4GePxb]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tDGbtXOJjrh = tDGbtXOJjrh + MkbACQ3FH[M4GePxb];
    }
    p = tDGbtXOJjrh / zpTjAMm;
    for (M4GePxb = 1; M4GePxb <= zpTjAMm; M4GePxb = M4GePxb +1)
        if (fabs (p - MkbACQ3FH[M4GePxb]) > max) {
            max = fabs (p - MkbACQ3FH[M4GePxb]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            j = M4GePxb;
        }
    if (j != 0)
        printf ("%d", MkbACQ3FH[j]);
    for (M4GePxb = 1; M4GePxb <= zpTjAMm; M4GePxb++)
        if (fabs (p - MkbACQ3FH[M4GePxb]) == max && M4GePxb != j)
            printf (",%d", MkbACQ3FH[M4GePxb]);
    return 0;
}

