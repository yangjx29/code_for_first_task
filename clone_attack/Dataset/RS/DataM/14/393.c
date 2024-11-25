int main () {
    int n;
    int i;
    int b;
    int LKzbjYeT;
    int d;
    struct   {
        int sn;
        int yVk2KxZgu;
        int mat;
        int sum;
    }
    a [100000];
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d %d", &a[i].sn, &a[i].yVk2KxZgu, &a[i].mat);
            a[i].sum = a[i].yVk2KxZgu + a[i].mat;
            i = i + 1;
        };
    }
    b = n;
    LKzbjYeT = n;
    d = n;
    a[n].sum = -100;
    {
        i = 0;
        while (n > i) {
            if (a[b].sum >= a[i].sum)
                b = b;
            else
                b = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (i != b) {
                if (a[LKzbjYeT].sum >= a[i].sum)
                    LKzbjYeT = LKzbjYeT;
                else
                    LKzbjYeT = i;
            }
            else
                ;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (i != LKzbjYeT &i != b) {
                if (a[d].sum >= a[i].sum)
                    d = d;
                else
                    d = i;
            }
            else
                ;
            i++;
        };
    }
    printf ("%d %d\n", a[b].sn, a[b].sum);
    printf ("%d %d\n", a[LKzbjYeT].sn, a[LKzbjYeT].sum);
    printf ("%d %d\n", a[d].sn, a[d].sum);
    return 0;
}

