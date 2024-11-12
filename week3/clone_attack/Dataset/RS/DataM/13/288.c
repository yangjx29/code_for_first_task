int main () {
    int a [20000];
    int i;
    int c10aTM;
    int n;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", a[0]);
    {
        i = 0;
        while (n > i) {
            {
                c10aTM = 0;
                while (n > c10aTM) {
                    if (a[i] == a[c10aTM])
                        break;
                    if (c10aTM == i - 1) {
                        printf ("%d", a[i]);
                        printf (" ");
                    }
                    c10aTM++;
                };
            }
            i++;
        };
    }
    return 0;
}

