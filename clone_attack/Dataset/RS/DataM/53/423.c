void  main () {
    int n, Vxwbtj [350], tm7jBfR, j, k, l, r;
    scanf ("%d\n", &n);
    for (r = 0; n - 2 >= r; r = r + 1)
        scanf ("%d ", &Vxwbtj[r]);
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
    scanf ("%d", &Vxwbtj[n - 1]);
    for (tm7jBfR = 0; n - 1 >= tm7jBfR; tm7jBfR = tm7jBfR + 1) {
        j = tm7jBfR + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= j) {
            if (Vxwbtj[j] == Vxwbtj[tm7jBfR]) {
                for (k = j + 1; k <= n - 1; k = k + 1)
                    Vxwbtj[k - 1] = Vxwbtj[k];
                n = n - 1;
                j = j - 1;
            }
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
            j = j + 1;
        };
    }
    printf ("%d", Vxwbtj[0]);
    {
        l = 1;
        while (l <= n - 1) {
            printf (",%d", Vxwbtj[l]);
            l = l + 1;
        };
    };
}

