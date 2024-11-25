int main () {
    int eGMnLiq7mXvt;
    int GwHO8G7WpR9A;
    int *ALonVNKvtF8 = (int *) malloc (sizeof (int) * GwHO8G7WpR9A);
    int *qmiPU7DTC = (int *) malloc (sizeof (int) * GwHO8G7WpR9A);
    int i1hOf4N0IUx;
    i1hOf4N0IUx = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &GwHO8G7WpR9A);
    scanf ("%d", &eGMnLiq7mXvt);
    for (int X370Yk = (938 - 938);
    GwHO8G7WpR9A > X370Yk; X370Yk++)
        ALonVNKvtF8[X370Yk] = 1;
    for (int X370Yk = 0;
    GwHO8G7WpR9A > X370Yk; X370Yk++)
        qmiPU7DTC[X370Yk] = -1;
    scanf ("%d", &qmiPU7DTC[eGMnLiq7mXvt]);
    while (!(0 == qmiPU7DTC[eGMnLiq7mXvt]) || !(0 == eGMnLiq7mXvt)) {
        ALonVNKvtF8[eGMnLiq7mXvt] = 0;
        scanf ("%d", &eGMnLiq7mXvt);
        scanf ("%d", &qmiPU7DTC[eGMnLiq7mXvt]);
    }
    for (int X370Yk = 0;
    X370Yk < GwHO8G7WpR9A; X370Yk++)
        if (ALonVNKvtF8[X370Yk] == 1) {
            i1hOf4N0IUx = 1;
            printf ("%d", X370Yk);
        }
    if (i1hOf4N0IUx == 0)
        printf ("NOT FOUND");
}

