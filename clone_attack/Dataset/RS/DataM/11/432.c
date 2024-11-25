int main () {
    int UY83NQOmX [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum;
    int a;
    int b;
    int sEdYxWI;
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
    sum = 0;
    scanf ("%d%d%d", &a, &b, &sEdYxWI);
    {
        int CTY4po6h91LC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CTY4po6h91LC < b) {
            sum = sum + UY83NQOmX[CTY4po6h91LC];
            CTY4po6h91LC = CTY4po6h91LC +1;
        };
    }
    sum = sum + sEdYxWI;
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        sum = sum + 1;
    printf ("%d\n", sum);
    return 0;
}

