void  main () {
    char s [(600 - 400)];
    char w [(724 - 624)];
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
    int i;
    scanf ("%s %s", s, w);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 100) {
            if (w + i == strstr (w, s)) {
                printf ("%d", i);
                break;
            }
            i++;
        };
    };
}

