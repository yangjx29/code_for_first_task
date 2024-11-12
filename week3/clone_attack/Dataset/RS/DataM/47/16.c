int main () {
    int *LrCkBGQE;
    int n;
    int a [101];
    scanf ("%d", &n);
    for (LrCkBGQE = a; LrCkBGQE <= a + n - 1; LrCkBGQE = LrCkBGQE +1) {
        scanf ("%d", LrCkBGQE);
    }
    LrCkBGQE = a + n - 1;
    printf ("%d", *LrCkBGQE);
    {
        LrCkBGQE = a + n - 2;
        while (LrCkBGQE >= a) {
            printf (" %d", *LrCkBGQE);
            LrCkBGQE = LrCkBGQE -1;
        };
    }
    return (547 - 547);
}

