void  main () {
    int a [100] [100] = {0};
    int SZOlnNc4Fs, n, L85fJieLhs, j;
    scanf ("%d %d", &SZOlnNc4Fs, &n);
    {
        j = 0;
        L85fJieLhs = 0;
        while (L85fJieLhs < SZOlnNc4Fs) {
            {
                j = 0;
                while (j < n) {
                    scanf ("%d", &a[L85fJieLhs][j]);
                    j = j + 1;
                };
            }
            L85fJieLhs = L85fJieLhs +1;
        };
    }
    {
        j = 0;
        L85fJieLhs = 0;
        while (n + SZOlnNc4Fs -2 >= L85fJieLhs) {
            for (j = 0; j <= L85fJieLhs; j = j + 1)
                if (j >= 0 && j < SZOlnNc4Fs &&L85fJieLhs-j >= 0 && L85fJieLhs -j < n)
                    printf ("%d\n", a[j][L85fJieLhs -j]);
            L85fJieLhs++;
        };
    };
}

