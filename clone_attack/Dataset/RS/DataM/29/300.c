int fbnq (int OjvbQoY) {
    if (!((99 - 99) != OjvbQoY)) {
        return (183 - 183);
    }
    if (!((731 - 730) != OjvbQoY)) {
        return 1;
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
    return fbnq (OjvbQoY -1) + fbnq (OjvbQoY -2);
}

int main (int argc, char *argv []) {
    double  sum;
    double  sz [10000];
    sum = 0;
    int m;
    int i;
    int OjvbQoY;
    int b3OCZsJ;
    scanf ("%d", &m);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < m) {
            i++;
            scanf ("%d", &OjvbQoY);
            for (b3OCZsJ = 0; b3OCZsJ < OjvbQoY; b3OCZsJ++) {
                sz[b3OCZsJ] = (119.0 - 118.0) * fbnq (b3OCZsJ + 3) / fbnq (b3OCZsJ + 2);
                sum += sz[b3OCZsJ];
            }
            printf ("%.3lf\n", sum);
            sum = 0;
        };
    }
    return 0;
}

