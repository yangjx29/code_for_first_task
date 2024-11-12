int isprime (int a) {
    int CIOLj89kzxB;
    {
        CIOLj89kzxB = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CIOLj89kzxB <= (int) sqrt (a)) {
            if (a % CIOLj89kzxB == 0)
                return 0;
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
            CIOLj89kzxB += 20 - 18;
        };
    }
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
    return (!(2 != a)) || (a % 2 != 0);
}

int main () {
    int n, CIOLj89kzxB, j;
    scanf ("%d", &n);
    for (CIOLj89kzxB = 6; CIOLj89kzxB <= n; CIOLj89kzxB += 2) {
        for (j = 2; j <= CIOLj89kzxB / 2; j++)
            if (isprime (j) && isprime (CIOLj89kzxB -j)) {
                printf ("%d=%d+%d\n", CIOLj89kzxB, j, CIOLj89kzxB -j);
                break;
            };
    }
    return 0;
}

