int main () {
    int a [1000];
    int b [1000];
    int n;
    int k;
    int Pocf4QFh;
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
    };
    scanf ("%d%d", &n, &k);
    {
        Pocf4QFh = 830 - 830;
        while (n > Pocf4QFh) {
            scanf ("%d", &a[Pocf4QFh]);
            b[Pocf4QFh] = a[Pocf4QFh];
            Pocf4QFh = Pocf4QFh +1;
        };
    }
    {
        Pocf4QFh = 0;
        while (Pocf4QFh < n) {
            {
                j = Pocf4QFh +1;
                while (n > j) {
                    if (a[Pocf4QFh] + b[j] == k) {
                        printf ("yes");
                        return 0;
                    }
                    j++;
                };
            }
            Pocf4QFh = Pocf4QFh +1;
        };
    }
    printf ("no");
    return 0;
}

