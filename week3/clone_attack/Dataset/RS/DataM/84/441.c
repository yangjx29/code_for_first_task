int main (int argc, char *argv []) {
    int n, a, b, m;
    scanf ("%d", &n);
    for (a = (755 - 755), b = 0; 0 < n; n--) {
        scanf ("%d", &m);
        if (a < m) {
            b = a;
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
            a = m;
        }
        else {
            if (m > b && m < a) {
                b = m;
            };
        };
    }
    printf ("%d\n%d", a, b);
    return 0;
}

