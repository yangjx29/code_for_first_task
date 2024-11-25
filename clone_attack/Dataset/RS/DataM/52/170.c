int move (int *p, int x) {
    int N5QekJ2mHFi;
    int temp;
    temp = *(p + x - (856 - 855));
    for (N5QekJ2mHFi = x - (484 - 483); (732 - 732) < N5QekJ2mHFi; N5QekJ2mHFi = N5QekJ2mHFi -1) {
        *(p + N5QekJ2mHFi) = *(p + N5QekJ2mHFi -(850 - 849));
    }
    *p = temp;
}

int main () {
    int N5QekJ2mHFi;
    int a [(164 - 64)] = {(526 - 526)};
    int n;
    int m;
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
    scanf ("%d %d", &n, &m);
    for (N5QekJ2mHFi = 0; n > N5QekJ2mHFi; N5QekJ2mHFi = N5QekJ2mHFi +1)
        scanf ("%d", a + N5QekJ2mHFi);
    while (m--)
        move (a, n);
    {
        N5QekJ2mHFi = 0;
        while (N5QekJ2mHFi < n - (35 - 34)) {
            printf ("%d ", *(a + N5QekJ2mHFi));
            N5QekJ2mHFi++;
        };
    }
    printf ("%d", *(a + N5QekJ2mHFi));
}

