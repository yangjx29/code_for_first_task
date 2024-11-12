int n, i;
int GRfengp [(1010 - 984)];

int NuF01okb3 (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

int f (int neTD9xoMtwqX, int l) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (neTD9xoMtwqX == (101 - 100)) {
        if (GRfengp[(143 - 142)] >= l)
            return (503 - 502);
        else
            return (470 - 470);
    }
    else {
        if (GRfengp[neTD9xoMtwqX] < l)
            return f (neTD9xoMtwqX - 1, l);
        else
            return NuF01okb3 (f (neTD9xoMtwqX - 1, l), f (neTD9xoMtwqX - 1, GRfengp[neTD9xoMtwqX]) + 1);
    };
}

void  main () {
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
        scanf ("%d", &GRfengp[i]);
    printf ("%d", f (n, 0));
}

