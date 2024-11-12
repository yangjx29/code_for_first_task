int a, qvTqWyj;

int sushu (int a) {
    int j;
    for (j = 3; (int) sqrt (a) + 2 > j; j = j + 2)
        if (!(0 != a % 2) || !(0 != a % j))
            return 0;
    return 1;
}

int y13GYmLrVt5p (int i) {
    for (a = 2; i > a; a++)
        if (sushu (a) && sushu (i - a))
            return a;
}

int main (int ioF9RxnV, char *argv []) {
    int n;
    int i;
    scanf ("%d", &n);
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
    for (i = 6; i <= n; i++) {
        if (i % 2 == 0) {
            a = y13GYmLrVt5p (i);
            qvTqWyj = i - a;
            printf ("%d=%d+%d\n", i, a, qvTqWyj);
        };
    }
    return 0;
}

