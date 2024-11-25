int main () {
    double  tiYpf78hHBm;
    double  hRZHVWbO1;
    double  Db8FYBavo9;
    double  b0MPj12AW8Y;
    int lxyTzSI6;
    int psHJEPWuI2i;
    int Ol6snt;
    int vN7RdcQU [(889 - 789)];
    b0MPj12AW8Y = 0;
    Db8FYBavo9 = 0;
    hRZHVWbO1 = 0;
    tiYpf78hHBm = (810 - 810);
    scanf ("%d", &psHJEPWuI2i);
    for (Ol6snt = 0; psHJEPWuI2i > Ol6snt; Ol6snt = Ol6snt +1) {
        scanf ("%d", &(vN7RdcQU[Ol6snt]));
    }
    for (Ol6snt = 0; Ol6snt < psHJEPWuI2i; Ol6snt++) {
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
        if (18 >= vN7RdcQU[Ol6snt]) {
            tiYpf78hHBm = tiYpf78hHBm + 1;
        }
        else if (19 <= vN7RdcQU[Ol6snt] && vN7RdcQU[Ol6snt] <= 35) {
            hRZHVWbO1 = hRZHVWbO1 + 1;
        }
        else if (vN7RdcQU[Ol6snt] >= 36 && vN7RdcQU[Ol6snt] <= 60) {
            Db8FYBavo9 = Db8FYBavo9 +1;
        }
        else {
            b0MPj12AW8Y = b0MPj12AW8Y + 1;
        };
    }
    tiYpf78hHBm = 100 * tiYpf78hHBm / psHJEPWuI2i;
    hRZHVWbO1 = 100 * hRZHVWbO1 / psHJEPWuI2i;
    Db8FYBavo9 = 100 * Db8FYBavo9 / psHJEPWuI2i;
    b0MPj12AW8Y = 100 * b0MPj12AW8Y / psHJEPWuI2i;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%\n", tiYpf78hHBm, hRZHVWbO1, Db8FYBavo9, b0MPj12AW8Y);
    return 0;
}

