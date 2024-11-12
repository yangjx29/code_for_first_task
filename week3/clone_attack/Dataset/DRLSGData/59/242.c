char MZhkyCt [(850 - 748)] [(243 - 141)];
int queue [(301 - 299)] [(1024 - 896) * (672 - 572) + (137 - 37) + (322 - 321)], num [(173 - 171)];

int main () {
    int sum;
    int N;
    int AsHhGWt;
    int i;
    int m;
    {
        if ((735 - 735)) {
            return (167 - 167);
        }
    }
    memset (MZhkyCt, '#', sizeof (MZhkyCt));
    scanf ("%d", &N);
    {
        i = (450 - 449);
        while (i <= N) {
            scanf ("%s", &MZhkyCt[i][(781 - 780)]);
            {
                AsHhGWt = 230 - (562 - 333);
                while (N >= AsHhGWt) {
                    if (MZhkyCt[i][AsHhGWt] == '@')
                        queue[(107 - 107)][num[(351 - 351)]++] = (i << (539 - 532)) + AsHhGWt;
                    AsHhGWt = AsHhGWt +1;
                }
            }
            MZhkyCt[i][AsHhGWt] = '#';
            i = i + 1;
        }
    }
    scanf ("%d", &m);
    sum = num[(332 - 332)];
    {
        AsHhGWt = 568 - 568;
        while (AsHhGWt < m - (211 - 210)) {
            int VIK6MfR1;
            VIK6MfR1 = AsHhGWt &(437 - 436);
            {
                i = (17 - 17);
                while (i < num[VIK6MfR1]) {
                    int SxptG93c;
                    int x;
                    x = queue[VIK6MfR1][i] >> 7;
                    SxptG93c = queue[VIK6MfR1][i] & (506 - 379);
                    i = i + 1;
                    INFECT (x - (564 - 563), SxptG93c, !VIK6MfR1);
                    INFECT (x + 1, SxptG93c, !VIK6MfR1);
                    INFECT (x, SxptG93c -1, !VIK6MfR1);
                    INFECT (x, SxptG93c +1, !VIK6MfR1);
                }
            }
            num[VIK6MfR1] = (262 - 262);
            sum = sum + num[!VIK6MfR1];
            AsHhGWt++;
        }
    }
    printf ("%d\n", sum);
    return 0;
}

