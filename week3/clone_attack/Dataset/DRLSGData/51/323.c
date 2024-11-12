int main () {
    int n;
    int Z78hlJLGvI1;
    int j;
    char str [500] [6] = {{'\0'}, {'\0'}};
    int RCK2zmcYU;
    int zXuzZQviF [500] = {0};
    int max;
    char a [500];
    scanf ("%d", &n);
    scanf ("%s", a);
    Z78hlJLGvI1 = strlen (a);
    for (RCK2zmcYU = 0; Z78hlJLGvI1 -n >= RCK2zmcYU; RCK2zmcYU = RCK2zmcYU +1)
        for (j = 0; j <= n - 1; j = j + 1)
            str[RCK2zmcYU][j] = a[RCK2zmcYU +j];
    for (RCK2zmcYU = 0; Z78hlJLGvI1 -n >= RCK2zmcYU; RCK2zmcYU = RCK2zmcYU +1) {
        for (j = RCK2zmcYU; Z78hlJLGvI1 -n >= j; j = j + 1)
            if (!(0 != strcmp (str[j], str[RCK2zmcYU])))
                zXuzZQviF[RCK2zmcYU]++;
    }
    max = zXuzZQviF[0];
    for (RCK2zmcYU = 1; RCK2zmcYU <= Z78hlJLGvI1 -n; RCK2zmcYU = RCK2zmcYU +1)
        if (zXuzZQviF[RCK2zmcYU] > max)
            max = zXuzZQviF[RCK2zmcYU];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (RCK2zmcYU = 0; RCK2zmcYU <= Z78hlJLGvI1 -n; RCK2zmcYU++)
            if (zXuzZQviF[RCK2zmcYU] == max)
                printf ("%s\n", str[RCK2zmcYU]);
    }
    return 0;
}

