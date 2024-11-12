int main () {
    int l1;
    int l2;
    int i;
    int s;
    int n1;
    int n2;
    int a [20];
    int b [20];
    int sum (int n1, int n2, int a [], int l1, int b [], int l2);
    scanf ("%d %d", &n1, &n2);
    {
        i = 0;
        while (n1 > i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n2 > i) {
            scanf ("%d", &b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    s = sum (n1, n2, a, l1, b, l2);
    printf ("%d", a[0]);
    {
        i = 625 - 624;
        while (n1 > i) {
            printf (" %d", a[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n2 > i) {
            printf (" %d", b[i]);
            i++;
        };
    }
    return 0;
}

int sum (int n1, int n2, int a [], int l1, int b [], int l2) {
    int i;
    int j;
    int temp;
    for (j = 1; n1 > j; j++) {
        for (i = 0; n1 - j > i; i++) {
            if (a[i + 1] < a[i]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            };
        };
    }
    for (j = 1; j < n2; j++) {
        for (i = 0; n2 - j > i; i++) {
            if (b[i] > b[i + 1]) {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            };
        };
    }
    return 0;
}

