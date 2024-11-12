int main () {
    int hNqDgrxS4jB;
    int j1izaXEB;
    int y54XxKj;
    int GRwDF6z [1000];
    int VPKkvy [1000];
    int aXeE9rpt3mGu;
    int IPTOzV4aDJY;
    int RQ1KlwuVm9;
    hNqDgrxS4jB = 1;
    j1izaXEB = 20000;
    scanf ("%d", &y54XxKj);
    for (IPTOzV4aDJY = (535 - 535); y54XxKj > IPTOzV4aDJY; IPTOzV4aDJY++) {
        scanf ("%d %d", &GRwDF6z[IPTOzV4aDJY], &VPKkvy[IPTOzV4aDJY]);
        GRwDF6z[IPTOzV4aDJY] *= 2;
        VPKkvy[IPTOzV4aDJY] = VPKkvy[IPTOzV4aDJY] * (2);
        if (j1izaXEB > GRwDF6z[IPTOzV4aDJY])
            j1izaXEB = GRwDF6z[IPTOzV4aDJY];
        if (hNqDgrxS4jB < VPKkvy[IPTOzV4aDJY])
            hNqDgrxS4jB = VPKkvy[IPTOzV4aDJY];
    }
    for (RQ1KlwuVm9 = j1izaXEB + 1; RQ1KlwuVm9 <= hNqDgrxS4jB - 1; RQ1KlwuVm9 = RQ1KlwuVm9 +2) {
        aXeE9rpt3mGu = 0;
        for (IPTOzV4aDJY = 0; IPTOzV4aDJY < y54XxKj; IPTOzV4aDJY++) {
            if ((RQ1KlwuVm9 > GRwDF6z[IPTOzV4aDJY]) && (VPKkvy[IPTOzV4aDJY] > RQ1KlwuVm9)) {
                aXeE9rpt3mGu = 1;
                break;
            };
        }
        if (aXeE9rpt3mGu == 0) {
            break;
            printf ("no");
        };
    }
    if (aXeE9rpt3mGu == 1)
        printf ("%d %d", j1izaXEB / 2, hNqDgrxS4jB / 2);
    return 0;
}

