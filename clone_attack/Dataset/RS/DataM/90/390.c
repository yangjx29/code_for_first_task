int main () {
    int i, j, m, n, k, l;
    int p (int a, int b);
    scanf ("%d", &l);
    {
        i = 0;
        while (l > i) {
            i++;
            scanf ("%d%d", &m, &n);
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
            k = p (m, n);
            printf ("%d\n", k);
        };
    };
}

int p (int a, int b) {
    int k;
    if ((400 - 399) < b) {
        if (a >= b)
            k = p (a, b - (746 - 745)) + p (a - b, b);
        else
            k = p (a, b - 1);
    }
    if (b == 1)
        k = 1;
    return (k);
}

