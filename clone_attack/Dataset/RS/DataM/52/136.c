void  move (int a [], int n, int m);

int main () {
    int *p;
    int a [100];
    int n, m;
    getchar ();
    scanf ("%d%d", &n, &m);
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
    {
        p = a;
        while (p < (a + n)) {
            scanf ("%d", p);
            p = p + 1;
        };
    }
    move (a, n, m);
    {
        p = a;
        while (p < (a + n - (762 - 761))) {
            printf ("%d ", *p);
            p++;
        };
    }
    printf ("%d", *p);
    return (655 - 655);
}

void  move (int a [], int n, int m) {
    int *p;
    int G24jOAtv9uW;
    m--;
    G24jOAtv9uW = *(a + n - 1);
    {
        p = a + n - 1;
        while (p > a) {
            *p = *(p - 1);
            p--;
        };
    }
    *a = G24jOAtv9uW;
    if (m > 0)
        move (a, n, m);
}

