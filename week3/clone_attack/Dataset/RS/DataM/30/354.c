int main () {
    int a;
    a = 0;
    int b = 1, c = 0, m, n;
    scanf ("%d", &m);
    while (b < m || b == m) {
        if (b % 7 == 0 || b % 10 == 7 || b / 10 == 7) {
            a = a + b * b;
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
        c = c + b * b;
        b++;
    }
    n = c - a;
    printf ("%d", n);
    return 0;
}

