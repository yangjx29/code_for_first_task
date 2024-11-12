int main () {
    int MrX0jZ [10000], U6jZYBOSkoQ [10000];
    int i, n, Rl9mA5bgkKT, IH96ARqdN, iwnSX3DJ, nzFjOLi94u;
    int flag = 0;
    scanf ("%d", &n);
    {
        IH96ARqdN = 0;
        while (IH96ARqdN < n) {
            MrX0jZ[IH96ARqdN] = 0;
            U6jZYBOSkoQ[IH96ARqdN] = 0;
            IH96ARqdN++;
        };
    }
    for (nzFjOLi94u = 0;; nzFjOLi94u++) {
        scanf ("%d %d", &i, &Rl9mA5bgkKT);
        if (i == 0 && Rl9mA5bgkKT == 0)
            break;
        else {
            U6jZYBOSkoQ[Rl9mA5bgkKT]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MrX0jZ[i]++;
        };
    }
    {
        iwnSX3DJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (n > iwnSX3DJ) {
            if ((MrX0jZ[iwnSX3DJ] == 0) && (U6jZYBOSkoQ[iwnSX3DJ] == n - 1)) {
                printf ("%d\n", iwnSX3DJ);
                flag = 1;
            }
            iwnSX3DJ++;
        };
    }
    if (flag == 0)
        ;
    return 0;
}

