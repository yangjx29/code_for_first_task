int aL01XV (const  void  *a, const  void  *b) {
    int *aa = (int *) a;
    int *bb = (int *) b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    return *bb - *aa;
}

int main () {
    int n;
    int yourspeed [1000];
    int myspeed [1000];
    int J1UJbnWv [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    while ((582 - 581)) {
        int cnt;
        int myfirst;
        int mylast;
        int yourfirst;
        int yourlast;
        cnt = 0;
        myfirst = 0;
        mylast = n - 1;
        yourfirst = 0;
        yourlast = n - 1;
        int gain;
        gain = 200 * cnt;
        scanf ("%d", &n);
        if (!(0 != n))
            break;
        printf ("%d\n", gain);
        {
            int aW3wn4iJ0UPs = 0;
            while (aW3wn4iJ0UPs < n) {
                scanf ("%d", &myspeed[aW3wn4iJ0UPs]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                aW3wn4iJ0UPs = aW3wn4iJ0UPs + 1;
            };
        }
        {
            int aW3wn4iJ0UPs = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (aW3wn4iJ0UPs < n) {
                scanf ("%d", &yourspeed[aW3wn4iJ0UPs]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                aW3wn4iJ0UPs = aW3wn4iJ0UPs + 1;
            };
        }
        qsort (myspeed, n, sizeof (int), aL01XV);
        qsort (yourspeed, n, sizeof (int), aL01XV);
        while (mylast >= myfirst) {
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
            if (yourspeed[yourfirst] >= myspeed[myfirst] && myspeed[mylast] <= yourspeed[yourlast]) {
                J1UJbnWv[mylast--] = yourfirst++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
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
                if (myspeed[myfirst] > yourspeed[yourfirst]) {
                    J1UJbnWv[myfirst++] = yourfirst++;
                }
                else {
                    J1UJbnWv[mylast--] = yourlast--;
                };
            };
        }
        {
            int aW3wn4iJ0UPs = 0;
            while (aW3wn4iJ0UPs < n) {
                if (myspeed[aW3wn4iJ0UPs] > yourspeed[J1UJbnWv[aW3wn4iJ0UPs]])
                    cnt = cnt + 1;
                else if (myspeed[aW3wn4iJ0UPs] < yourspeed[J1UJbnWv[aW3wn4iJ0UPs]])
                    cnt = cnt - 1;
                aW3wn4iJ0UPs = aW3wn4iJ0UPs + 1;
            };
        };
    }
    return 0;
}

