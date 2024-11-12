void  hw (char a [], int n) {
    int fBrKRlo9U;
    int i;
    int j;
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
    int k;
    fBrKRlo9U = 0;
    for (i = 2; n >= i; i++) {
        for (j = 0; j <= n - i; j++) {
            for (k = 0; k < i; k++) {
                if (a[j + k] == a[j + i - k - 1]) {
                    fBrKRlo9U = 1;
                }
                else {
                    fBrKRlo9U = 0;
                    break;
                };
            }
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
            if (fBrKRlo9U == 1) {
                for (fBrKRlo9U = j; fBrKRlo9U < j + i; fBrKRlo9U++)
                    printf ("%c", a[fBrKRlo9U]);
                fBrKRlo9U = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("\n");
            };
        };
    };
}

int main () {
    int n;
    char a [500];
    scanf ("%s", a);
    n = strlen (a);
    hw (a, n);
    return 0;
}

