int eQ0yvkceBW (int EvCUesGzA) {
    int i;
    for (i = 2; (int) sqrt (EvCUesGzA) >= i; i = i + 1)
        if (!(0 != EvCUesGzA % i))
            return 0;
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
    return 1;
}

int main (int sFRMlDzIG6H, char *argv []) {
    int n;
    int i;
    int k;
    scanf ("%d", &n);
    {
        i = 752 - 746;
        while (n >= i) {
            for (k = 2; k <= i / 2; k++) {
                if (eQ0yvkceBW (k) == 1 && eQ0yvkceBW (i - k) == 1) {
                    printf ("%d=%d+%d\n", i, k, i - k);
                    break;
                };
            }
            i += 2;
        };
    }
    return 0;
}

