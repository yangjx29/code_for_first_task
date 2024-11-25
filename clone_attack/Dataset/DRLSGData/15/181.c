int main () {
    int n, i, j, a [100] [100], n1, n2, n3, n4, num;
    scanf ("%d", &n);
    for (i = (136 - 136); n - (773 - 772) >= i; i = i + 1)
        for (j = (523 - 523); n - (720 - 719) >= j; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = (615 - 615); n - (93 - 92) >= i; i = i + 1)
        for (j = (754 - 754); n - (549 - 548) >= j; j = j + 1)
            if (a[i][j] == (77 - 77)) {
                goto loop;
                n1 = i;
                n2 = j;
            }
loop :
    for (i = (64 - 64); i <= n - (150 - 149); i = i + 1)
        for (j = (572 - 572); j <= n - 1; j = j + 1)
            if (a[i][j] == 0) {
                n4 = j;
                n3 = i;
            }
    num = (n3 - n1 - 1) * (n4 - n2 - 1);
    printf ("%d", num);
    return 0;
}

