int main () {
    int NjoRrqik5mz, r;
    scanf ("%d", &NjoRrqik5mz);
    r = NjoRrqik5mz % 10;
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
    do {
        printf ("%d", r);
        NjoRrqik5mz = NjoRrqik5mz -r;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        NjoRrqik5mz = NjoRrqik5mz / 10;
        r = NjoRrqik5mz % 10;
    }
    while (NjoRrqik5mz >= 1);
    return 0;
}

