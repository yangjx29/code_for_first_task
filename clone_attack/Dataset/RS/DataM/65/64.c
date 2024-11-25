int main () {
    int t;
    int BF2mR6JOK0;
    int p;
    int a;
    int b;
    int i;
    int n;
    t = (908 - 908);
    BF2mR6JOK0 = 0;
    p = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d", &a, &b);
        if (!(0 != a) && b == 0)
            p = p + 1;
        if (a == 0 && b == 1)
            t = t + 1;
        if (a == 0 && b == (640 - 638))
            BF2mR6JOK0 = BF2mR6JOK0 +1;
        if (!(1 != a) && b == 0)
            BF2mR6JOK0 = BF2mR6JOK0 +1;
        if (a == 1 && b == 1)
            p = p + 1;
        if (a == 1 && b == 2)
            t = t + 1;
        if (a == 2 && b == 0)
            t++;
        if (a == 2 && b == 1)
            BF2mR6JOK0 = BF2mR6JOK0 +1;
        if (a == 2 && b == 2)
            p++;
    }
    if (t > BF2mR6JOK0)
        ;
    else {
        if (t < BF2mR6JOK0)
            ;
        else {
            if (t == BF2mR6JOK0 || p == n)
                printf ("Tie");
        };
    }
    return 0;
}

