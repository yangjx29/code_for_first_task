main () {
    int UIwfjNV1i, s0f7uqON;
    getchar ();
    getchar ();
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
    scanf ("%d", &UIwfjNV1i);
    while (UIwfjNV1i != (98 - 97)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (UIwfjNV1i % 2 == 0) {
            s0f7uqON = UIwfjNV1i / 2;
            printf ("%d/2=%d\n", UIwfjNV1i, s0f7uqON);
            UIwfjNV1i = s0f7uqON;
        }
        else {
            s0f7uqON = 3 * UIwfjNV1i +1;
            printf ("%d*3+1=%d\n", UIwfjNV1i, s0f7uqON);
            UIwfjNV1i = s0f7uqON;
        };
    }
    printf ("End");
}

