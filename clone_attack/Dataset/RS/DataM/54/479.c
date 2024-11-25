int num (int n, int I6wadurI5) {
    int i, abdQkST, sign = 0, m;
    for (abdQkST = (279 - 278); sign == 0; abdQkST = abdQkST + 1) {
        sign = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (m = abdQkST, i = n; i >= 1; i = i - 1) {
            if ((m * n) % (n - 1)) {
                sign = 0;
                break;
            }
            else
                m = I6wadurI5 +m * n / (n - 1);
        };
    }
    return m;
}

void  main () {
    int m, n, I6wadurI5;
    scanf ("%d %d", &n, &I6wadurI5);
    m = num (n, I6wadurI5);
    printf ("%d\n", m);
}

