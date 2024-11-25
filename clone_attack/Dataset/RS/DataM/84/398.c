int main () {
    int x;
    int kiPWAf2Jx6;
    int i;
    int DENbHchAK3;
    int U210h3;
    int n;
    int o;
    scanf ("%d\n%d\n%d\n", &n, &x, &kiPWAf2Jx6);
    if (kiPWAf2Jx6 > x) {
        DENbHchAK3 = x;
        x = kiPWAf2Jx6;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kiPWAf2Jx6 = DENbHchAK3;
    }
    i = 1;
    for (; n - 2 >= i;) {
        scanf ("%d\n", &U210h3);
        if (U210h3 > x) {
            o = x;
            x = U210h3;
            kiPWAf2Jx6 = o;
        }
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
        if (U210h3 < x && U210h3 > kiPWAf2Jx6) {
            kiPWAf2Jx6 = U210h3;
        }
        i = i + 1;
    }
    printf ("%d\n%d\n", x, kiPWAf2Jx6);
    return 0;
}

