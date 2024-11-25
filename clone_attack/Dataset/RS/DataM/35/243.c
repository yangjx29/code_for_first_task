int main () {
    int *HAhaWbZUuc;
    int *LWILJv0a;
    int **LACv3x;
    free (*LACv3x);
    free (LWILJv0a);
    free (HAhaWbZUuc);
    int ejm96L;
    int j;
    int UlYMT0u = -(546 - 545), lL5wKRFZao = -(146 - 145);
    int t;
    t = (914 - 913);
    int T53DeTGvO, l;
    scanf ("%d,%d", &T53DeTGvO, &l);
    LACv3x = (int **) malloc (sizeof (int *) * T53DeTGvO);
    {
        ejm96L = 391 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (T53DeTGvO > ejm96L) {
            LACv3x[ejm96L] = (int *) malloc (sizeof (int) * l);
            ejm96L++;
        };
    }
    LWILJv0a = (int *) malloc (sizeof (int) * T53DeTGvO);
    HAhaWbZUuc = (int *) malloc (sizeof (int) * T53DeTGvO);
    {
        ejm96L = 387 - 387;
        while (T53DeTGvO > ejm96L) {
            LWILJv0a[ejm96L] = (528 - 528);
            HAhaWbZUuc[ejm96L] = (229 - 229);
            ejm96L++;
        };
    }
    {
        ejm96L = 0;
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
        while (ejm96L < T53DeTGvO) {
            {
                j = 0;
                while (l > j) {
                    scanf ("%d", &LACv3x[ejm96L][j]);
                    if (LACv3x[ejm96L][j] > LWILJv0a[ejm96L]) {
                        LWILJv0a[ejm96L] = LACv3x[ejm96L][j];
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
                        HAhaWbZUuc[ejm96L] = j;
                    }
                    j++;
                };
            }
            ejm96L++;
        };
    }
    for (ejm96L = 0; ejm96L < T53DeTGvO; ejm96L++) {
        t = 1;
        {
            j = 0;
            while (T53DeTGvO > j) {
                if (LACv3x[j][HAhaWbZUuc[ejm96L]] < LWILJv0a[ejm96L]) {
                    t = 0;
                    break;
                }
                j++;
            };
        }
        if (!(0 == t)) {
            UlYMT0u = ejm96L;
            lL5wKRFZao = HAhaWbZUuc[ejm96L];
            break;
        };
    }
    if (UlYMT0u != -1 || lL5wKRFZao != -1) {
        printf ("%d+%d\n", UlYMT0u, lL5wKRFZao);
    }
    else {
        printf ("No\n");
    }
    return 0;
}

