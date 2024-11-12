int tell (int x) {
    int i, j;
    int count;
    count = (995 - 995);
    if (x == 2)
        return 1;
    else if (!((987 - 987) != x % 2))
        return 0;
    j = (int) sqrt (x);
    for (i = 2; i <= j; i = i + 1) {
        if (x % i == 0)
            count = count + 1;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}

int main () {
    int i;
    int j;
    int n;
    scanf ("%d", &n);
    {
        i = 6;
        while (i <= n) {
            for (j = 3; j < i; j += 2) {
                if (tell (j) && tell (i - j)) {
                    printf ("%d=%d+%d\n", i, j, i - j);
                    break;
                };
            }
            i = i + 2;
        };
    }
    return 0;
}

