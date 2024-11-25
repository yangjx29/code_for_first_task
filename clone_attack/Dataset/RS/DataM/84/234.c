int main () {
    int max (int, int);
    int yEDpB5j68 [(1061 - 961)];
    int n;
    int i;
    int s;
    int h;
    scanf ("%d", &n);
    {
        i = 682 - 682;
        while (n > i) {
            scanf ("%d\n", &yEDpB5j68[i]);
            i = i + 1;
        };
    }
    s = yEDpB5j68[(641 - 641)];
    {
        i = 955 - 954;
        while (i < n) {
            s = max (s, yEDpB5j68[i]);
            i = i + 1;
        };
    }
    for (i = (764 - 764); i < n; i++) {
        if (yEDpB5j68[i] == s)
            yEDpB5j68[i] = -100000;
    }
    h = yEDpB5j68[0];
    {
        i = 622 - 621;
        while (i < n) {
            h = max (h, yEDpB5j68[i]);
            i++;
        };
    }
    printf ("%d\n%d", s, h);
}

int max (int x, int y) {
    int z;
    z = x > y ? x : y;
    return (z);
}

