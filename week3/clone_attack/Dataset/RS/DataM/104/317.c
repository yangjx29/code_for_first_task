void  main () {
    int f1 (int v2KWqZ7g, int m);
    int m;
    int v2KWqZ7g;
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
    scanf ("%d%d", &v2KWqZ7g, &m);
    printf ("%d\n", f1 (v2KWqZ7g, m));
}

int f1 (int v2KWqZ7g, int m) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (!(m != v2KWqZ7g))
        return v2KWqZ7g;
    else {
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
        if (v2KWqZ7g > m) {
            if (v2KWqZ7g % 2 == 0)
                return f1 (v2KWqZ7g / 2, m);
            else
                return f1 ((v2KWqZ7g - 1) / 2, m);
        }
        else {
            if (m % 2 == 0)
                return f1 (v2KWqZ7g, m / 2);
            else
                return f1 (v2KWqZ7g, (m - 1) / 2);
        };
    };
}

