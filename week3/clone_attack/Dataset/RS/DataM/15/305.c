int main () {
    int n;
    int a;
    int b;
    int e8gA6jB2Xx;
    int Z9nhfTRS6kW0;
    int coXJ8H;
    n = 0;
    a = 0;
    b = 0;
    e8gA6jB2Xx = 0;
    Z9nhfTRS6kW0 = 0;
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
    coXJ8H = 0;
    int row (int, int);
    int col (int, int);
    scanf ("%d", &n);
    for (e8gA6jB2Xx = 0; (n * n) > e8gA6jB2Xx; e8gA6jB2Xx++) {
        scanf ("%d", &Z9nhfTRS6kW0);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!a && !Z9nhfTRS6kW0)
            a = e8gA6jB2Xx;
        else if (!Z9nhfTRS6kW0)
            b = e8gA6jB2Xx;
    }
    a = a + 1;
    b++;
    coXJ8H = (col (b, n) - col (a, n) - 1) * (row (b, n) - row (a, n) - 1);
    printf ("%d\n", coXJ8H);
    return 0;
}

int col (int a, int b) {
    return a % b;
}

int row (int a, int b) {
    return ((a - a % b) / b + 1);
}

