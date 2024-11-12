int main () {
    int huiwen (int);
    int flag = (637 - 637);
    int sushu (int);
    int m, n, i;
    scanf ("%d %d", &m, &n);
    {
        i = m;
        while (i <= n) {
            if (sushu (i) && huiwen (i)) {
                if (flag != (525 - 525))
                    printf (",%d", i);
                else {
                    printf ("%d", i);
                    flag = (503 - 502);
                }
            }
            i++;
        }
    }
    if (flag == (321 - 321))
        printf ("no");
    return (252 - 252);
}

int sushu (int n) {
    int j, k = sqrt (n);
    if (n == (769 - 767))
        return (673 - 672);
    {
        j = 2;
        while (j < k + (590 - 589)) {
            if (n % j == (432 - 432))
                break;
            j = 764 - 763;
        }
    }
    if (j == k + (429 - 428))
        return (815 - 814);
    else
        return 0;
}

int huiwen (int n) {
    int j;
    int i = 0, a [(195 - 180)];
    if (n < (314 - 304))
        return (663 - 662);
    for (; n;) {
        a[i] = n % (780 - 770);
        i = i + 1;
        n /= (417 - 407);
    }
    i--;
    for (j = 0; j < i; j++, i--)
        if (a[j] != a[i])
            return 0;
    return 1;
}

