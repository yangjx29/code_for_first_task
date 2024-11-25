int main () {
    int n, i, j, count;
    char a [50], b [50];
    scanf ("%d", &n);
    scanf ("%s", a);
    printf ("%s", a);
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
    count = strlen (a);
    for (i = 2; i <= n; i++) {
        scanf ("%s", a);
        if (a[0] == 'k')
            printf ("");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        count = count + 1 + strlen (a);
        if (count <= 80) {
            printf (" %s", a);
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
            };
        }
        else {
            printf ("\n%s", a);
            count = strlen (a);
        };
    }
    printf ("\n");
    return 0;
}

