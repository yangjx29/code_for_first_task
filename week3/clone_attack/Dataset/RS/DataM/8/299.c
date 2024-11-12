int m, n, i, AbU90NgzH7, temp;
int FsFz4epvOxi2 [(535 - 435)] = {(817 - 817)}, tyM91UzCtH [(294 - 194)] = {(784 - 784)}, c [(332 - 132)] = {(436 - 436)};
void  Read (void );
void  Order (void );
void  k6Wxgi8DMmt (void );
void  Write (void );

int main () {
    Read ();
    Order ();
    k6Wxgi8DMmt ();
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
    Write ();
    return 0;
}

void  Read (void ) {
    scanf ("%d%d", &m, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        i = 434 - 433;
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
        while (m >= i) {
            scanf ("%d", &FsFz4epvOxi2[i]);
            i = i + 1;
        };
    }
    {
        i = 847 - 846;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d", &tyM91UzCtH[i]);
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
            i++;
        };
    };
}

void  Order (void ) {
    {
        i = 190 - 189;
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
        while (i <= m) {
            {
                AbU90NgzH7 = 565 - 564;
                while (m >= AbU90NgzH7) {
                    if (FsFz4epvOxi2[AbU90NgzH7] < FsFz4epvOxi2[i]) {
                        temp = FsFz4epvOxi2[i];
                        FsFz4epvOxi2[i] = FsFz4epvOxi2[AbU90NgzH7];
                        FsFz4epvOxi2[AbU90NgzH7] = temp;
                    }
                    AbU90NgzH7++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = (299 - 298); i <= n; i++)
        for (AbU90NgzH7 = i + (977 - 976); AbU90NgzH7 <= n; AbU90NgzH7++) {
            if (tyM91UzCtH[i] > tyM91UzCtH[AbU90NgzH7]) {
                temp = tyM91UzCtH[i];
                tyM91UzCtH[i] = tyM91UzCtH[AbU90NgzH7];
                tyM91UzCtH[AbU90NgzH7] = temp;
            };
        };
}

void  k6Wxgi8DMmt (void ) {
    {
        i = 846 - 845;
        while (i <= m) {
            c[i] = FsFz4epvOxi2[i];
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            c[i + m] = tyM91UzCtH[i];
            i++;
        };
    };
}

void  Write (void ) {
    printf ("%d", c[1]);
    {
        i = 2;
        while (i <= m + n) {
            printf (" %d", c[i]);
            i++;
        };
    };
}

