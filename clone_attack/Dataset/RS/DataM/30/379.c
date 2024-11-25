int main () {
    int i, n, lEQahwD = 0;
    scanf ("%d", &n);
    for (i = 1; n + 1 > i; i = i + 1) {
        if (!(0 == (i % 7)) && !(7 == (i % 10)) && (i < 70)) {
            lEQahwD = lEQahwD + i * i;
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
        if ((i % 7) != 0 && (i % 10) != 7 && (i > 79)) {
            lEQahwD = lEQahwD + i * i;
        };
    }
    printf ("%d", lEQahwD);
    return 0;
}

