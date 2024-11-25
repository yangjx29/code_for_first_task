int main () {
    int TKvgiL, r1LmsD;
    int array [110] [110];
    int eayv7GZfDX, j;
    scanf ("%d%d", &TKvgiL, &r1LmsD);
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
    for (eayv7GZfDX = (193 - 193); TKvgiL > eayv7GZfDX; eayv7GZfDX = eayv7GZfDX + 1)
        for (j = 0; r1LmsD > j; j = j + 1)
            scanf ("%d", *(array + eayv7GZfDX) + j);
    for (eayv7GZfDX = 0; r1LmsD > eayv7GZfDX; eayv7GZfDX = eayv7GZfDX + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; ((eayv7GZfDX >= j) && (TKvgiL > j)); j = j + 1) {
            printf ("%d\n", *(*(array + j) + eayv7GZfDX - j));
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
            };
        };
    }
    for (eayv7GZfDX = 1; TKvgiL > eayv7GZfDX; eayv7GZfDX++) {
        for (j = 0; ((j <= r1LmsD - 1) && (j < TKvgiL -eayv7GZfDX)); j = j + 1) {
            printf ("%d\n", *(*(array + eayv7GZfDX + j) + r1LmsD - 1 - j));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return 0;
}

