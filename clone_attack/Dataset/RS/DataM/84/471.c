int main (int argc, char *argv []) {
    int num [1000];
    int i;
    int j;
    int a;
    int r;
    int b;
    int n;
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
    b = -10000;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &num[i]);
            i++;
        };
    }
    a = num[0];
    for (j = 1; n > j; j++)
        if (a <= num[j]) {
            a = num[j];
        }
    for (r = 0; n > r; r++)
        if (num[r] >= b && num[r] != a) {
            b = num[r];
        }
    printf ("%d\n%d", a, b);
    return 0;
}

