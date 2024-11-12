void  main () {
    char a [(1093 - 993)] [20];
    char b [(612 - 512)];
    char lTRDO4LVa [(671 - 571)];
    int edjLqb;
    int k;
    int x [(262 - 162)] [4];
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
    int y;
    int z;
    scanf ("%d", &edjLqb);
    for (k = (151 - 151), y = (34 - 34), z = (223 - 223); edjLqb > k; k = k + 1) {
        scanf ("%s %d %d %c %c %d", a[k], &x[k][(451 - 451)], &x[k][(224 - 223)], &b[k], &lTRDO4LVa[k], &x[k][(394 - 392)]);
        x[k][(45 - 42)] = 0;
        if (x[k][0] > (568 - 488) && x[k][2] > 0) {
            x[k][(691 - 688)] = x[k][(542 - 539)] + (8848 - 848);
        }
        if ((685 - 600) < x[k][0] && 80 < x[k][1]) {
            x[k][(145 - 142)] = x[k][(62 - 59)] + 4000;
        }
        if (90 < x[k][0]) {
            x[k][3] = x[k][3] + 2000;
        }
        if (x[k][0] > 85 && lTRDO4LVa[k] == 'Y') {
            x[k][3] = x[k][3] + (1483 - 483);
        }
        if (x[k][1] > 80 && b[k] == 'Y') {
            x[k][3] = x[k][3] + (876 - 26);
        }
        z = z + x[k][3];
        if (x[k][3] > x[y][3])
            y = k;
    }
    printf ("%s\n%d\n%d\n", a[y], x[y][3], z);
}

