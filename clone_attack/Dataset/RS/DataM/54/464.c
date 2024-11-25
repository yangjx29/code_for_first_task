void  main () {
    int N6jJc4W;
    int j;
    int n;
    int M0N7K82jJ;
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
    int E7S1jV [100];
    scanf ("%d%d", &n, &M0N7K82jJ);
    for (N6jJc4W = 1; n >= N6jJc4W; N6jJc4W = N6jJc4W +1)
        E7S1jV[N6jJc4W] = 0;
    for (N6jJc4W = 1;; N6jJc4W = N6jJc4W +1) {
        E7S1jV[1] = N6jJc4W *n + M0N7K82jJ;
        {
            j = 1;
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
            while (n >= j) {
                if (E7S1jV[j] % (n - 1) == 0)
                    E7S1jV[j + 1] = E7S1jV[j] / (n - 1) * n + M0N7K82jJ;
                else
                    break;
                j = j + 1;
            };
        }
        if (E7S1jV[n] != 0) {
            printf ("%d", E7S1jV[n]);
            break;
        };
    };
}

