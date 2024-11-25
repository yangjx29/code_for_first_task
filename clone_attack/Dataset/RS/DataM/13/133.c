int main () {
    int n;
    int k;
    int a [n];
    scanf ("%d", &n);
    scanf ("%d", &a[0]);
    printf ("%d", a[0]);
    {
        int i = 1;
        while (i < n) {
            k = 1;
            scanf ("%d", &a[i]);
            {
                int j = 0;
                while (j < i) {
                    if (a[i] == a[j])
                        k = 0;
                    j++;
                };
            }
            if (k != 0)
                printf (" %d", a[i]);
            i++;
        };
    };
}

