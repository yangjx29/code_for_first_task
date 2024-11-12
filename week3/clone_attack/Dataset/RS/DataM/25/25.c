int main (int argc, char *argv []) {
    int n;
    double  sum;
    sum = 1;
    scanf ("%d", &n);
    for (int i = 1;
    i <= n; i++) {
        sum = sum * 2;
    }
    printf ("%.lf", sum);
    return 0;
}

