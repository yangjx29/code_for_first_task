main () {
    int n;
    int i;
    int *num = (int *) malloc (n * sizeof (int));
    scanf ("%d", &n);
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
    for (i = 0; n > i; i++) {
        *(num + i) = 0;
    }
    {
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
        while (true) {
            int a, LaLMKENPfc;
            scanf ("%d %d", &a, &LaLMKENPfc);
            if (!(0 != a) && !(0 != LaLMKENPfc))
                break;
            num[a]--;
            num[LaLMKENPfc]++;
        };
    }
    for (i = 0; i < n; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (num[i] == n - 1) {
            printf ("%d", i);
            break;
        };
    }
    if (i == n)
        ;
}

