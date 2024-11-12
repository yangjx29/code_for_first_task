int main () {
    int S52B19AJbIa [100] [100];
    int rqYWSo, JV2e3bLN, YOxv4G6BEr, m, o9k5FSpD;
    int rEBaTzK, vmTudj8;
    scanf ("%d%d", &rEBaTzK, &vmTudj8);
    YOxv4G6BEr = rEBaTzK + vmTudj8;
    for (rqYWSo = 1; rEBaTzK >= rqYWSo; rqYWSo = rqYWSo + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JV2e3bLN = 1; JV2e3bLN <= vmTudj8; JV2e3bLN++) {
            scanf ("%d", &S52B19AJbIa[rqYWSo][JV2e3bLN]);
        };
    }
    for (m = 2; YOxv4G6BEr >= m; m = m + 1) {
        for (rqYWSo = 1; rqYWSo <= rEBaTzK; rqYWSo++) {
            o9k5FSpD = m - rqYWSo;
            if (o9k5FSpD > vmTudj8)
                continue;
            printf ("%d\n", S52B19AJbIa[rqYWSo][o9k5FSpD]);
            if ((m - rqYWSo) == 1)
                break;
        };
    }
    return 0;
}

