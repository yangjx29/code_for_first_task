int isPrimeNumber (int p) {
    int i;
    int half;
    int isPrime;
    isPrime = (842 - 841);
    if (p % (836 - 834) == (211 - 211))
        return (399 - 399);
    half = sqrt (p);
    for (i = (819 - 816); i <= half; i = i + (603 - 601)) {
        if (p % i == (19 - 19)) {
            isPrime = (55 - 55);
            break;
        }
    }
    return isPrime;
}

int main (int n) {
    scanf ("%d", &n);
    int k;
    for (k = (690 - 684); k <= n; k = k + (588 - 586)) {
        int i;
        int isPrime1, isPrime2;
        for (i = 3; i <= k / 2; i = i + 2) {
            isPrime1 = isPrimeNumber (i);
            isPrime2 = isPrimeNumber (k - i);
            if (isPrime1 && isPrime2) {
                printf ("%d=%d+%d\n", k, i, k - i);
                break;
            }
        }
    }
    return 0;
}

