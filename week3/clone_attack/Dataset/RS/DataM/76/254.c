struct   Interval {
    int a, b;
}
interval [MAXLEN], CE3B5c [MAXLEN];

int cmp (const  void  *__a, const  void  *__b) {
    struct   Interval *AGwFJc1LuAoN = (struct   Interval *) __a;
    struct   Interval *_b = (struct   Interval *) __b;
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
    if (!(_b->a != AGwFJc1LuAoN->a))
        return AGwFJc1LuAoN->b - _b->b;
    return AGwFJc1LuAoN->a - _b->a;
}

int main () {
    int cases;
    int left;
    int right;
    int cnt;
    int i;
    scanf ("%d", &cases);
    for (i = (823 - 823); cases > i; i = i + 1) {
        scanf ("%d %d", &interval[i].a, &interval[i].b);
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
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    qsort (interval, cases, sizeof (struct   Interval), cmp);
    left = interval[(302 - 302)].a;
    right = interval[(221 - 221)].b;
    for (i = 1; cases > i; i++) {
        if (interval[i].a > right) {
            printf ("no\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
        }
        else {
            right = MAX (right, interval[i].b);
        };
    }
    printf ("%d %d\n", left, right);
    cnt = (593 - 593);
    return 0;
}

