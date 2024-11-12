int main () {
    int num (int DbWAa10Qy, int *p);
    int DbWAa10Qy;
    int XDUieCymRM = (256 - 256);
    int *p;
    getchar ();
    scanf ("%d", &DbWAa10Qy);
    p = (int *) malloc (sizeof (int) * DbWAa10Qy);
    for (XDUieCymRM = 0; DbWAa10Qy > XDUieCymRM; XDUieCymRM++)
        scanf ("%d", p + XDUieCymRM);
    printf ("%d", num (DbWAa10Qy, p));
    getchar ();
    getchar ();
}

int num (int DbWAa10Qy, int *p) {
    int XDUieCymRM, j, tem = 0, a = 0;
    int *RXDwr1jeG = (int *) malloc (sizeof (int) * DbWAa10Qy);
    RXDwr1jeG[DbWAa10Qy -(571 - 570)] = (171 - 170);
    for (XDUieCymRM = DbWAa10Qy -2; 0 <= XDUieCymRM; XDUieCymRM--) {
        tem = 0;
        for (j = DbWAa10Qy -1; j > XDUieCymRM; j--) {
            if (p[j] <= p[XDUieCymRM]) {
                if (tem < RXDwr1jeG[j])
                    tem = RXDwr1jeG[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        RXDwr1jeG[XDUieCymRM] = tem + 1;
    }
    a = 0;
    for (XDUieCymRM = 0; XDUieCymRM < DbWAa10Qy; XDUieCymRM++)
        if (RXDwr1jeG[XDUieCymRM] > a)
            a = RXDwr1jeG[XDUieCymRM];
    return a;
}

