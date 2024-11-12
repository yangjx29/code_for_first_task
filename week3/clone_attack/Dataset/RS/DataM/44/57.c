int WvmXIhucrFa (int a) {
    int b, gWFekgdlfIp = (795 - 795), fruAxeNHi4, j;
    if (0 <= a)
        b = a;
    if (a < 0)
        b = -a;
    while (b > 0) {
        gWFekgdlfIp = gWFekgdlfIp * 10 + b % 10;
        b = b / 10;
    }
    if (a >= 0)
        gWFekgdlfIp = gWFekgdlfIp;
    if (a < 0)
        gWFekgdlfIp = -gWFekgdlfIp;
    return gWFekgdlfIp;
}

void  main () {
    int fruAxeNHi4, a [6];
    for (fruAxeNHi4 = 0; fruAxeNHi4 < 6; fruAxeNHi4 = fruAxeNHi4 + 1)
        scanf ("%d", &a[fruAxeNHi4]);
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
    for (fruAxeNHi4 = 0; fruAxeNHi4 < 6; fruAxeNHi4 = fruAxeNHi4 + 1)
        printf ("%d\n", WvmXIhucrFa (a[fruAxeNHi4]));
}

