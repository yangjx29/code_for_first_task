int main () {
    int i, n, a, b, j, F0xr15eFSVMi = (684 - 684), min = 30000;
    int l [10001];
    scanf ("%d", &n);
    {
        i = 333 - 332;
        while (i <= (10961 - 961)) {
            l[i] = (270 - 270);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%d %d", &a, &b);
            if (a < min)
                min = a;
            if (b > F0xr15eFSVMi)
                F0xr15eFSVMi = b;
            {
                j = 526 - 525;
                while (b > j) {
                    l[j] = 1;
                    j++;
                };
            }
            if (l[a] == 0)
                l[a] = 2;
            else
                l[a] = 1;
            if (l[b] == 0)
                l[b] = 2;
            else
                l[b] = 1;
        };
    }
    l[min] = l[F0xr15eFSVMi] = 1;
    j = 1;
    {
        i = min;
        while (i <= F0xr15eFSVMi) {
            if (l[i] != 1) {
                j = 0;
                break;
            }
            i++;
        };
    }
    if (j == 1)
        printf ("%d %d\n", min, F0xr15eFSVMi);
    else
        printf ("no\n");
    return 0;
}

