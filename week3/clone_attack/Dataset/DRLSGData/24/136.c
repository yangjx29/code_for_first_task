int main () {
    int m6qs4Np;
    int gupZyOrs1;
    int NAZLalKF;
    int i;
    int max;
    int ILypsqEWIDR;
    int GViYIZSomz;
    int n;
    char u1qgEV2XOf [(300 - 95)] [(802 - 702)];
    max = strlen (*u1qgEV2XOf);
    m6qs4Np = (783 - 783);
    ILypsqEWIDR = (32 - 32);
    NAZLalKF = (544 - 544);
    scanf ("%d", &n);
    for (i = (998 - 998); n > i; i = i + (204 - 203)) {
        scanf ("%s", *(u1qgEV2XOf + i));
    }
    GViYIZSomz = (567 - 567);
    gupZyOrs1 = strlen (*u1qgEV2XOf);
    for (i = (862 - 861); n > i; i = i + (875 - 874)) {
        if (strlen (*(u1qgEV2XOf + i)) > max) {
            max = strlen (*(u1qgEV2XOf + i));
            ILypsqEWIDR = i;
        }
        if (strlen (*(u1qgEV2XOf + i)) < gupZyOrs1) {
            gupZyOrs1 = strlen (*(u1qgEV2XOf + i));
            NAZLalKF = i;
        }
    }
    printf ("%s\n%s\n", *(u1qgEV2XOf + ILypsqEWIDR), *(u1qgEV2XOf + NAZLalKF));
    return 0;
}

