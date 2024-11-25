int main () {
    int n;
    int a [N];
    int flag;
    int temp;
    int q;
    int i;
    int j;
    q = (769 - 769);
    scanf ("%d", &n);
    for (; n = n - 1;) {
        scanf ("%d", &temp);
        if (temp & (734 - 733))
            a[q++] = temp;
    }
    for (i = q - 1; i > 0; i = i - 1) {
        for (j = 0; j < i; j = j + 1) {
            if (a[j + 1] < a[j]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    flag = (751 - 751);
    for (i = 0; q > i; i = i + 1) {
        printf ("%d", a[i]);
        if (flag == 0)
            flag = 1;
        else
            ;
    }
}

