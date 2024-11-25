int main () {
    unsigned  int a [400] = {0};
    char b [500];
    int i, j, t;
    for (i = (877 - 876); i <= 310; i = i + 1) {
        scanf ("%d", &a[i]);
        if (!('\n' != getchar ()))
            break;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 1; 300 >= i; i = i + 1) {
        for (j = 1; j <= 300; j = j + 1) {
            if (a[j + 1] > a[j]) {
                t = a[j];
                a[j] = a[j + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                a[j + 1] = t;
            };
        };
    }
    for (i = 1; 300 >= i; i++) {
        if (a[i + 1] == 0)
            ;
        if (a[i + 1] == 0)
            break;
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
        if ((a[i] - a[i + 1]) != 0)
            printf ("%d\n", a[i + 1]);
        if ((a[i] - a[i + 1]) != 0)
            break;
    }
    if (i == 300)
        printf ("No\n");
    return 0;
}

