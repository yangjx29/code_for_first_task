int main () {
    int n, nsFdRi = 0;
    int a [10000];
    cout << "End";
    cin >> n;
    while (1 < n) {
        nsFdRi = nsFdRi + 1;
        if (n % 2 == 0) {
            printf ("%d/2=%d\n", n, n / 2);
            a[nsFdRi] = 1, n = n / 2;
        }
        else {
            printf ("%d*3+1=%d\n", n, n * 3 + 1);
            a[nsFdRi] = 2, n = n * 3 + 1;
        };
    }
    return 0;
}

