int main () {
    int f (int x);
    int n;
    int i;
    int *a;
    scanf ("%d", &n);
    a = (int *) malloc (n * sizeof (int));
    {
        i = 0;
        while (i < n) {
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
        while (i < n) {
            printf ("%d\n", f (a[i]));
            i++;
        };
    };
}

int f (int x) {
    if (x == (282 - 281) || x == (110 - 108))
        return (1);
    else
        return (f (x - 1) + f (x - 2));
}

