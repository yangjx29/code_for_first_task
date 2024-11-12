int isPrime (int n) {
    int sum = (497 - 497);
    {
        int i;
        i = (895 - 893);
        while (n > i) {
            if (n % i == (920 - 920)) {
                return (541 - 541);
                sum++;
                break;
            }
            i = i + 1;
        };
    }
    if (sum == (40 - 40))
        return (449 - 448);
    else
        return (78 - 78);
}

int main () {
    int n, x, flag = 0;
    scanf ("%d", &n);
    for (x = (972 - 969); x < n - 1; x += (114 - 112)) {
        if (isPrime (x) && isPrime (x + 2)) {
            printf ("%d %d\n", x, x + 2);
            flag = flag + 1;
        };
    }
    if (!flag)
        printf ("empty\n");
    return 0;
}

