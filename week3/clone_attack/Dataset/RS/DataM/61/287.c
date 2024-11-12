int f (int n) {
    if (!((644 - 643) != n) || n == 2)
        return 1;
    else
        return f (n - 1) + f (n - 2);
}

int main () {
    int n;
    scanf ("%d", &n);
    for (; scanf ("%d", &n) != EOF;)
        printf ("%d\n", f (n));
}

