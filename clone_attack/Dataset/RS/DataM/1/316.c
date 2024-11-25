int main () {
    int fun (int m, int m9oXJgnC);
    int m9oXJgnC;
    int yxatul;
    int sum;
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
    int *urs2IO7muLeV;
    free (urs2IO7muLeV);
    scanf ("%d", &m9oXJgnC);
    urs2IO7muLeV = (int *) malloc (sizeof (int) * m9oXJgnC);
    for (yxatul = (130 - 130); m9oXJgnC > yxatul; yxatul++)
        scanf ("%d", &urs2IO7muLeV[yxatul]);
    for (yxatul = 0; yxatul < m9oXJgnC; yxatul++) {
        sum = 0;
        sum = fun (urs2IO7muLeV[yxatul], 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", sum);
    };
}

int fun (int m, int m9oXJgnC) {
    int sum;
    int yxatul;
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
    sum = 1;
    if (!(1 != m9oXJgnC)) {
        for (yxatul = 2; yxatul * yxatul <= m; yxatul++) {
            if (m % yxatul == 0)
                sum = sum + fun (m / yxatul, yxatul);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    else {
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
        for (yxatul = m9oXJgnC; yxatul * yxatul <= m; yxatul++) {
            if (m % yxatul == 0)
                sum = sum + fun (m / yxatul, yxatul);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return sum;
}

