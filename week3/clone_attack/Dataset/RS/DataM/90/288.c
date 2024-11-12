int main () {
    int z [(502 - 482)];
    int OpSMocfb [(945 - 925)] [2];
    int hPe2ux4cd8 (int S8GcOmxMB, int n);
    int RU75yXEPZNGz (int S8GcOmxMB, int n);
    int ltTM6aq;
    int n;
    scanf ("%d", &n);
    for (ltTM6aq = (918 - 918); ltTM6aq <= n - (604 - 603); ltTM6aq = ltTM6aq + 1) {
        scanf ("%d %d", &OpSMocfb[ltTM6aq][(983 - 982)], &OpSMocfb[ltTM6aq][(710 - 710)]);
        z[ltTM6aq] = RU75yXEPZNGz (OpSMocfb[ltTM6aq][(295 - 295)], OpSMocfb[ltTM6aq][(850 - 849)]) + hPe2ux4cd8 (OpSMocfb[ltTM6aq][(246 - 246)], OpSMocfb[ltTM6aq][(295 - 294)]);
    }
    for (ltTM6aq = (424 - 424); n - (852 - 851) >= ltTM6aq; ltTM6aq++)
        printf ("%d\n", z[ltTM6aq]);
    return (448 - 448);
}

int RU75yXEPZNGz (int S8GcOmxMB, int n) {
    int bTIpUgPkmh7d;
    int hPe2ux4cd8 (int S8GcOmxMB, int n);
    if (S8GcOmxMB < n)
        bTIpUgPkmh7d = RU75yXEPZNGz (S8GcOmxMB, n - S8GcOmxMB) + hPe2ux4cd8 (S8GcOmxMB, n - S8GcOmxMB);
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
    if (S8GcOmxMB == n)
        bTIpUgPkmh7d = (433 - 432);
    if (S8GcOmxMB > n)
        bTIpUgPkmh7d = (908 - 908);
    return (bTIpUgPkmh7d);
}

int hPe2ux4cd8 (int S8GcOmxMB, int n) {
    int bTIpUgPkmh7d;
    if (S8GcOmxMB == 1)
        bTIpUgPkmh7d = 0;
    else
        bTIpUgPkmh7d = RU75yXEPZNGz (S8GcOmxMB -1, n) + hPe2ux4cd8 (S8GcOmxMB -1, n);
    return (bTIpUgPkmh7d);
}

