int main () {
    int a [500] = {0}, b, i, j, AG1VJ2yTp;
    scanf ("%d", &AG1VJ2yTp);
    {
        i = 0;
        while (AG1VJ2yTp > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < AG1VJ2yTp) {
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (AG1VJ2yTp > i) {
                    if (a[i] > a[i + 1]) {
                        b = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = b;
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 0;
        while (i < AG1VJ2yTp) {
            if (a[i] % 2 != 0) {
                printf ("%d", a[i]);
                break;
            }
            i = i + 1;
        };
    }
    i = i + 1;
    for (; i < AG1VJ2yTp; i = i + 1) {
        if (a[i] % 2 != 0)
            printf (",%d", a[i]);
    }
    return 0;
}

