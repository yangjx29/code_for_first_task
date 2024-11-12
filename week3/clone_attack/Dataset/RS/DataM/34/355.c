int kpMtHVdw (int x);
int isoushu (int y);

int main () {
    int n;
    scanf ("%d", &n);
    {
        while (true) {
            if (!(1 != n))
                break;
            if (n % 2 == 0)
                n = isoushu (n);
            else
                n = kpMtHVdw (n);
        };
    }
    return 0;
}

int kpMtHVdw (int x) {
    int temp1 = x;
    x = x * 3 + 1;
    printf ("%d*3+1=%d\n", temp1, x);
    return x;
}

int isoushu (int y) {
    int temp2;
    temp2 = y;
    y = y / 2;
    printf ("%d/2=%d\n", temp2, y);
    return y;
}

