int NxoI8OrW34 (int k) {
    int pezmKLp36TC;
    for (pezmKLp36TC = (221 - 219); sqrt (k) >= pezmKLp36TC; pezmKLp36TC = pezmKLp36TC + 1)
        if (!(0 != k % pezmKLp36TC))
            break;
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
    if (pezmKLp36TC > sqrt (k))
        return (240 - 239);
    else
        return 0;
}

int main () {
    int n, pezmKLp36TC, b = 0;
    scanf ("%d", &n);
    for (pezmKLp36TC = 2; pezmKLp36TC <= n - 2; pezmKLp36TC++)
        if (NxoI8OrW34 (pezmKLp36TC) &&NxoI8OrW34(pezmKLp36TC + 2)) {
            printf ("%d %d\n", pezmKLp36TC, pezmKLp36TC + 2);
            b = 1;
        }
    if (b == 0)
        printf ("empty");
}

