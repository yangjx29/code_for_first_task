int main () {
    int vip = 0, not_found = 0;
    int HlA8dWP, WDjV35qcuJyT, j;
    char **WnI0kf = (char **) malloc (sizeof (char *) * HlA8dWP);
    free (WnI0kf);
    scanf ("%d", &HlA8dWP);
    for (WDjV35qcuJyT = (942 - 942); WDjV35qcuJyT < HlA8dWP; WDjV35qcuJyT = WDjV35qcuJyT +1) {
        WnI0kf[WDjV35qcuJyT] = (char *) malloc (sizeof (char) * HlA8dWP);
        {
            j = 0;
            while (j < HlA8dWP) {
                if (WDjV35qcuJyT == j)
                    WnI0kf[WDjV35qcuJyT][j] = 1;
                else
                    WnI0kf[WDjV35qcuJyT][j] = 0;
                j = j + 1;
            };
        };
    }
    while (1) {
        scanf ("%d %d", &WDjV35qcuJyT, &j);
        if (!(WDjV35qcuJyT || j))
            break;
        WnI0kf[WDjV35qcuJyT][j] = 1;
    }
    for (WDjV35qcuJyT = 0; WDjV35qcuJyT < HlA8dWP; WDjV35qcuJyT = WDjV35qcuJyT +1)
        if (WnI0kf[vip][WDjV35qcuJyT])
            vip = WDjV35qcuJyT;
    {
        WDjV35qcuJyT = 0;
        while (WDjV35qcuJyT < vip) {
            if (WDjV35qcuJyT == vip)
                continue;
            if (!(WnI0kf[WDjV35qcuJyT][vip] && !WnI0kf[vip][WDjV35qcuJyT])) {
                not_found = 1;
                break;
            }
            ++WDjV35qcuJyT;
        };
    }
    for (WDjV35qcuJyT = 0; WDjV35qcuJyT < HlA8dWP; WDjV35qcuJyT = WDjV35qcuJyT +1)
        free (WnI0kf[WDjV35qcuJyT]);
    if (not_found)
        ;
    else
        printf ("%d\n", vip);
    return 0;
}

