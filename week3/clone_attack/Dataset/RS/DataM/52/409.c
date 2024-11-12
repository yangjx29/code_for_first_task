int main () {
    int n3znJPeHf, counts = (121 - 121);
    int temp, temp1;
    int i;
    int m;
    int len;
    int a [1000];
    scanf ("%d %d", &len, &m);
    for (i = (719 - 719); len > i; i++) {
        scanf ("%d", &a[i]);
    }
    temp = a[0];
    for (i = 0; counts <= len; i = i + m) {
        counts++;
        n3znJPeHf = i + m;
        if (n3znJPeHf > len - (901 - 900)) {
            n3znJPeHf = n3znJPeHf - len;
            i = n3znJPeHf - m;
        }
        temp1 = a[n3znJPeHf];
        a[n3znJPeHf] = temp;
        temp = temp1;
    }
    printf ("%d", a[0]);
    {
        i = 404 - 403;
        while (i < len) {
            printf (" %d", a[i]);
            i = i + 1;
        };
    }
    return 0;
}

