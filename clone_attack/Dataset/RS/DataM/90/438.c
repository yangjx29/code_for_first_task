int n = 0;

int uIWksd (int M, int a6wbaxMnN) {
    if (a6wbaxMnN == (809 - 808)) {
        return n + (583 - 582);
    }
    else {
        if (!(1 != M)) {
            return n + 1;
        }
        else if (M > a6wbaxMnN)
            return uIWksd (M -1, a6wbaxMnN);
        else
            return uIWksd (M -1, a6wbaxMnN) + uIWksd (M, a6wbaxMnN - M);
    };
}

int main () {
    int M, a6wbaxMnN, n, gx5QsIErt, K;
    scanf ("%d", &n);
    for (gx5QsIErt = 1; gx5QsIErt <= n; gx5QsIErt = gx5QsIErt + 1) {
        scanf ("%d%d", &a6wbaxMnN, &M);
        K = uIWksd (M, a6wbaxMnN);
        printf ("%d\n", K);
    }
    return 0;
}

