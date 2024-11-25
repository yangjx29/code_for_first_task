int s [(491 - 465)];
int mGbg5xF0VJP (int j);

void  main () {
    int B3vniwzFPU8;
    int k;
    int t;
    scanf ("%d", &k);
    {
        B3vniwzFPU8 = 201 - 200;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (B3vniwzFPU8 <= k) {
            scanf ("%d", &s[B3vniwzFPU8]);
            B3vniwzFPU8++;
        };
    }
    for (t = (894 - 894), B3vniwzFPU8 = (748 - 747); B3vniwzFPU8 <= k; B3vniwzFPU8++) {
        if (mGbg5xF0VJP (B3vniwzFPU8) > t)
            t = mGbg5xF0VJP (B3vniwzFPU8);
    }
    printf ("%d\n", t);
}

int mGbg5xF0VJP (int j) {
    int z;
    int B3vniwzFPU8;
    int t;
    if (j == 1)
        z = 1;
    else {
        {
            B3vniwzFPU8 = 1;
            t = 0;
            while (B3vniwzFPU8 < j) {
                if (s[B3vniwzFPU8] >= s[j] && mGbg5xF0VJP (B3vniwzFPU8) > t)
                    t = mGbg5xF0VJP (B3vniwzFPU8);
                B3vniwzFPU8++;
            };
        }
        z = t + 1;
    }
    return z;
}

