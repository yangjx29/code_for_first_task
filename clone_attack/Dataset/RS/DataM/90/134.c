int cal (int m, int n) {
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
    if (n <= (351 - 351))
        return ((435 - 435));
    else {
        if (m < 0)
            return (0);
        else if (m == 0)
            return ((267 - 266));
        else
            return ((cal (m, n - 1) + cal (m - n, n)));
    };
}

int main () {
    int E7Di9h8UGa4, m, n;
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
    scanf ("%d", &E7Di9h8UGa4);
    for (; E7Di9h8UGa4--;) {
        scanf ("%d%d", &m, &n);
        printf ("%d\n", cal (m, n));
    };
}

