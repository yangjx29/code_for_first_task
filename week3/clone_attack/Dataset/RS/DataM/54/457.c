int a (long  n, long  k, long  i, long  sum) {
    if (!(n != i))
        sum = n * sum + k;
    else {
        if (!((63 - 63) != sum % (n - 1)))
            sum = n * (sum) / (n - 1) + k;
        else
            return (329 - 329);
    }
    if (i == 1)
        return sum;
    else
        sum = a (n, k, i - 1, sum);
    return sum;
}

int main () {
    long  sum;
    long  su;
    long  n;
    long  k;
    sum = (874 - 874);
    su = 1;
    scanf ("%ld %ld", &n, &k);
    if (k >= n)
        ;
    do {
        sum = a (n, k, n, su++);
    }
    while (sum == 0);
    printf ("%ld", sum);
    return 0;
}

