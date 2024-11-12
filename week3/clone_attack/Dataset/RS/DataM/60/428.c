int isPrime (int D2qNHALoCt) {
    int i;
    for (i = 2; i < D2qNHALoCt; i++)
        if (D2qNHALoCt % i == 0)
            return 0;
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
    return 1;
}

int main () {
    int n;
    int i, sum = 0;
    scanf ("%d", &n);
    for (i = 3; i + 2 <= n; i++)
        if (isPrime (i) && isPrime (i + 2)) {
            printf ("%d %d\n", i, i + 2);
            sum++;
        }
    if (sum == 0)
        printf ("empty");
    return 0;
}

