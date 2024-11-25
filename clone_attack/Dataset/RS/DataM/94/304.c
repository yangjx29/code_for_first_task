int main () {
    int temp, flag = (817 - 817), q = 0, i, j, n, a [N];
    scanf ("%d", &n);
    while (n--) {
        scanf ("%d", &temp);
        if (temp & (890 - 889))
            a[q++] = temp;
    }
    for (i = q - 1; 0 < i; i--) {
        for (j = 0; i > j; j++) {
            if (a[j + 1] < a[j]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            };
        };
    }
    for (i = 0; i < q; i++) {
        if (flag == 0)
            flag = 1;
        else
            printf (",");
        printf ("%d", a[i]);
    };
}

