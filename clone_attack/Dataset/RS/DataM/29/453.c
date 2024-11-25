int main () {
    int i;
    int SUfEik;
    int p;
    int m, n;
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
    double  sum = 0, a, XXbKj8k;
    cin >> m;
    for (i = 1; m >= i; i++) {
        XXbKj8k = 1;
        a = 2;
        sum = 0;
        cin >> n;
        for (SUfEik = 1; SUfEik <= n; SUfEik = SUfEik +1) {
            sum = sum + a / XXbKj8k;
            p = a;
            a = a + XXbKj8k;
            XXbKj8k = p;
        }
        printf ("%.3f\n", sum);
    }
    return 0;
}

