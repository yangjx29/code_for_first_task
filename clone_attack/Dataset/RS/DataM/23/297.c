int main () {
    int tot [101];
    char FzV3j7r5l [101] [101];
    char q;
    int gYZnl51Dv = 1;
    int AZhB0n;
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
    int j;
    scanf ("%c", &q);
    while (!('\n' == q))
        if (!(' ' != q)) {
            scanf ("%c", &q);
            gYZnl51Dv = gYZnl51Dv + 1;
        }
        else {
            tot[gYZnl51Dv]++;
            FzV3j7r5l[gYZnl51Dv][tot[gYZnl51Dv]] = q;
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
            scanf ("%c", &q);
        }
    for (AZhB0n = gYZnl51Dv; AZhB0n > 1; AZhB0n--) {
        for (j = 1; j <= tot[AZhB0n]; j++)
            printf ("%c", FzV3j7r5l[AZhB0n][j]);
        printf (" ");
    }
    for (j = 1; j <= tot[1]; j++)
        printf ("%c", FzV3j7r5l[AZhB0n][j]);
}

