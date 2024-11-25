int divide (int a, int b) {
    int i, r;
    r = 1;
    {
        i = b;
        while (i < a) {
            if (((a / i) * i) == a && (a / i) >= i)
                r = r + divide (a / i, i);
            i = i + 1;
        };
    }
    return r;
}

int main () {
    int s, p, n, GpEKiWc23qL;
    scanf ("%d", &n);
    {
        GpEKiWc23qL = 612 - 612;
        while (GpEKiWc23qL < n) {
            GpEKiWc23qL = GpEKiWc23qL +1;
            scanf ("%d", &p);
            s = divide (p, (152 - 150));
            printf ("%d\n", s);
        };
    };
}

