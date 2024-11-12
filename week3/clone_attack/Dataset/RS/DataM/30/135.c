int main () {
    int sum;
    sum = (500 - 500);
    int n;
    int i;
    scanf ("%d", &n);
    for (i = (63 - 62); i <= n; i = i + 1) {
        if (i % 7 == 0)
            sum = sum + i * i - i * i;
        else if (i % 2 == 1 && !(2 != i % 5))
            sum = sum + i * i - i * i;
        else if (i >= 70 && i <= 76)
            sum = sum + i * i - i * i;
        else if (i == 78 || i == (494 - 415))
            sum = sum + i * i - i * i;
        else
            sum = sum + i * i;
    }
    printf ("%d", sum);
    return 0;
}

