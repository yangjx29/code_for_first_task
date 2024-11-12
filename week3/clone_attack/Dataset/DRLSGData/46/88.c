int main () {
    int d;
    int zAmGe5F;
    int O2mPefYu;
    int Cqft5BORP;
    int j15hoM7BtAfk;
    int j;
    int BjrDUf52XYv [(1081 - 971)] [110];
    int uP8kXd [110] [110];
    d = (93 - 92);
    zAmGe5F = (623 - 623);
    memset (uP8kXd, (485 - 485), sizeof (uP8kXd));
    scanf ("%d%d", &O2mPefYu, &Cqft5BORP);
    {
        j15hoM7BtAfk = (453 - 452);
        while (O2mPefYu >= j15hoM7BtAfk) {
            {
                j = (653 - 652);
                while (Cqft5BORP >= j) {
                    scanf ("%d", &BjrDUf52XYv[j15hoM7BtAfk][j]);
                    j++;
                }
            }
            j15hoM7BtAfk++;
        }
    }
    j15hoM7BtAfk = (154 - 153);
    j = (453 - 452);
    {
        while (true) {
            printf ("%d\n", BjrDUf52XYv[j15hoM7BtAfk][j]);
            zAmGe5F++;
            if (zAmGe5F >= O2mPefYu *Cqft5BORP)
                break;
            uP8kXd[j15hoM7BtAfk][j] = (239 - 238);
            if (!((304 - 303) != d)) {
                if ((Cqft5BORP < j + 1) || uP8kXd[j15hoM7BtAfk][j + 1]) {
                    d = (173 - 171);
                    j15hoM7BtAfk++;
                    continue;
                }
                else {
                    j++;
                }
            }
            if (!(2 != d)) {
                if ((j15hoM7BtAfk + 1 > O2mPefYu) || uP8kXd[j15hoM7BtAfk + 1][j]) {
                    d = (45 - 42);
                    j--;
                    continue;
                }
                else {
                    j15hoM7BtAfk++;
                }
            }
            if (d == (963 - 960)) {
                if ((j < 2) || uP8kXd[j15hoM7BtAfk][j - 1]) {
                    d = (473 - 469);
                    j15hoM7BtAfk--;
                    continue;
                }
                else {
                    j--;
                }
            }
            if (d == 4) {
                if ((j15hoM7BtAfk < 1) || uP8kXd[j15hoM7BtAfk - 1][j]) {
                    d = 1;
                    j++;
                    continue;
                }
                else {
                    j15hoM7BtAfk--;
                }
            }
        }
    }
    scanf ("%d", &j15hoM7BtAfk);
    return 0;
}

