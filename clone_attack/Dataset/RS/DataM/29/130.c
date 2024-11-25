int main () {
    int m, n, i, j;
    double  a [(191 - 91)], b [(323 - 223)], c [100], sum;
    scanf ("%d", &m);
    a[(617 - 617)] = (784 - 783);
    a[(529 - 528)] = (961 - 959);
    b[(503 - 502)] = 1;
    {
        i = 198 - 198;
        while (m > i) {
            i++;
            scanf ("%d", &n);
            sum = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                j = 0;
                while (n > j) {
                    a[j + 2] = a[j] + a[j + 1];
                    b[j + 2] = a[j + 1];
                    sum += a[j + 1] / b[j + 1];
                    j++;
                };
            }
            printf ("%.3lf\n", sum);
        };
    }
    return 0;
}

