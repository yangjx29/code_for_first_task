int main () {
    int rJzWEwU, ic2WuC7bx, UdqQAmWM134N, sUWTJvXFMfu, PlHFPGSO, aZiU2EjQgF [1000] = {0};
    char dfzvW9GY1Cu0 [1000] = {0}, laVj4v [1000] [1000] = {0};
    gets (dfzvW9GY1Cu0);
    getchar ();
    ic2WuC7bx = strlen (dfzvW9GY1Cu0);
    scanf ("%d", &rJzWEwU);
    for (UdqQAmWM134N = 0; UdqQAmWM134N < ic2WuC7bx - rJzWEwU + 1; UdqQAmWM134N = UdqQAmWM134N +1) {
        PlHFPGSO = 0;
        for (sUWTJvXFMfu = UdqQAmWM134N; sUWTJvXFMfu < UdqQAmWM134N +rJzWEwU; sUWTJvXFMfu = sUWTJvXFMfu + 1) {
            laVj4v[UdqQAmWM134N][PlHFPGSO] = dfzvW9GY1Cu0[sUWTJvXFMfu];
            PlHFPGSO++;
        }
    }
    for (UdqQAmWM134N = 0; UdqQAmWM134N < ic2WuC7bx - rJzWEwU; UdqQAmWM134N = UdqQAmWM134N +1) {
        aZiU2EjQgF[UdqQAmWM134N] = 1;
        for (sUWTJvXFMfu = UdqQAmWM134N +1; sUWTJvXFMfu < ic2WuC7bx - rJzWEwU + 1; sUWTJvXFMfu++) {
            if (strcmp (laVj4v[UdqQAmWM134N], laVj4v[sUWTJvXFMfu]) == 0)
                aZiU2EjQgF[UdqQAmWM134N] = aZiU2EjQgF[UdqQAmWM134N] + 1;
        }
    }
    for (sUWTJvXFMfu = 0, UdqQAmWM134N = 0; UdqQAmWM134N < ic2WuC7bx - rJzWEwU; UdqQAmWM134N++) {
        if (aZiU2EjQgF[UdqQAmWM134N] > sUWTJvXFMfu)
            sUWTJvXFMfu = aZiU2EjQgF[UdqQAmWM134N];
    }
    if (sUWTJvXFMfu == 1)
        ;
    else {
        printf ("%d\n", sUWTJvXFMfu);
        for (UdqQAmWM134N = 0; UdqQAmWM134N < ic2WuC7bx - rJzWEwU; UdqQAmWM134N++) {
            if (aZiU2EjQgF[UdqQAmWM134N] == sUWTJvXFMfu)
                puts (laVj4v[UdqQAmWM134N]);
        }
    }
    return 0;
}

