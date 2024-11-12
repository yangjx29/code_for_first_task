int u0oXC6BnLR (int x, int y) {
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
    if (y == 1 || x == 1) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (y == 2) {
        return 1 + x / 2;
    }
    else if (x <= y) {
        return (1 + u0oXC6BnLR (x, x - 1));
    }
    else {
        return (u0oXC6BnLR ((x - y), y) + u0oXC6BnLR (x, (y - 1)));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int main () {
    int n;
    int PgZMePjECnI8, b, cn1NV3HSbp;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    for (cn1NV3HSbp = 0; cn1NV3HSbp < n; cn1NV3HSbp = cn1NV3HSbp + 1) {
        scanf ("%d%d", &PgZMePjECnI8, &b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d\n", u0oXC6BnLR (PgZMePjECnI8, b));
    }
    return 0;
}

