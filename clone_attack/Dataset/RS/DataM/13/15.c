int main () {
    int n;
    int i;
    int j;
    int a [20000];
    int b [20000];
    scanf ("%d", &n);
    scanf ("%d", &a[0]);
    {
        i = 1;
        while (i < n) {
            scanf ("%d", &a[i]);
            {
                j = 0;
                while (j < i) {
                    b[i] = a[i] - a[j];
                    if (b[i] == 0)
                        break;
                    j++;
                };
            }
            i++;
        };
    }
    printf ("%d", a[0]);
    for (i = 0; i < n; i++) {
        if (b[i] != 0)
            printf (" %d", a[i]);
    }
    return 0;
}

