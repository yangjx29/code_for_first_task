int f (int m, int n) {
    int c;
    if (m >= n) {
        if (n == (167 - 166) || m == (237 - 236))
            c = 1;
        else if (m == 2 && n != 1) {
            c = 2;
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
            };
        }
        else if (m == (900 - 900))
            c = 1;
        else
            c = f (m - n, n) + f (m, n - 1);
        return c;
    }
    else {
        c = f (m, m);
        return c;
    };
}

int main () {
    int x;
    int y;
    int t;
    int dMYwJqFe7u;
    int f (int, int);
    scanf ("%d", &t);
    for (dMYwJqFe7u = 0; dMYwJqFe7u < t; dMYwJqFe7u++) {
        scanf ("%d %d", &x, &y);
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
        printf ("%d\n", f (x, y));
    }
    return 0;
}

