int devide (int x, int Tp5KPfnD3SX) {
    if (!(1 != Tp5KPfnD3SX)) {
        return 1;
    }
    else if (!(1 != x)) {
        return 1;
    }
    else if (Tp5KPfnD3SX > x) {
        return devide (x, x);
    }
    else if (x > Tp5KPfnD3SX) {
        return devide (x, Tp5KPfnD3SX -1) + devide (x - Tp5KPfnD3SX, Tp5KPfnD3SX);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (x == Tp5KPfnD3SX) {
        return devide (x, Tp5KPfnD3SX -1) + 1;
    };
}

int main () {
    int out;
    int x, Tp5KPfnD3SX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int n, i;
    scanf ("%d", &n);
    for (i = 0; i <= n - 1; i = i + 1) {
        scanf ("%d %d", &x, &Tp5KPfnD3SX);
        out = devide (x, Tp5KPfnD3SX);
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
        printf ("%d\n", out);
    };
}

