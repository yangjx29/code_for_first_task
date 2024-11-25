int main () {
    int Y5Sj7bcAm, j, k;
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
    while (1) {
        int a [20] = {(878 - 878)}, sum = 0;
        {
            Y5Sj7bcAm = 0;
            while (1) {
                scanf ("%d", &a[Y5Sj7bcAm]);
                if (!(0 != a[Y5Sj7bcAm])) {
                    k = Y5Sj7bcAm;
                    break;
                }
                Y5Sj7bcAm = Y5Sj7bcAm +1;
            };
        }
        if (a[0] == -1)
            break;
        {
            Y5Sj7bcAm = 0;
            while (k > Y5Sj7bcAm) {
                {
                    j = Y5Sj7bcAm;
                    while (k > j) {
                        if (a[j] == 2 * a[Y5Sj7bcAm] || 2 * a[j] == a[Y5Sj7bcAm])
                            sum = sum + 1;
                        j = j + 1;
                    };
                }
                Y5Sj7bcAm++;
            };
        }
        printf ("%d\n", sum);
    };
}

