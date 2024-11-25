main () {
    int febk2A9mP;
    int sn;
    int i;
    int n;
    int O4UslcD;
    int s;
    febk2A9mP = 0;
    sn = 30;
    i = 0;
    char a703dIl [200] [30];
    scanf ("%d", &n);
    for (; n--;) {
        scanf ("%s", a703dIl[i]);
        if (strlen (a703dIl[i]) > febk2A9mP) {
            febk2A9mP = strlen (a703dIl[i]);
            O4UslcD = i;
        }
        if (sn > strlen (a703dIl[i])) {
            sn = strlen (a703dIl[i]);
            s = i;
        }
        i = i + 1;
    }
    printf ("%s\n%s", a703dIl[O4UslcD], a703dIl[s]);
}

