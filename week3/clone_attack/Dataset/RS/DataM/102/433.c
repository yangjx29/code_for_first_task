double  mFtGfP [100] = {0.00}, f5y7cnDw9kl [100] = {0.00};

void  boPQZ93 (double  a [], int HbSxBjc, int r) {
    int lo = HbSxBjc, hi = r;
    double  FxIP2YE4FOKy;
    FxIP2YE4FOKy = a[HbSxBjc];
    if (r <= HbSxBjc)
        return;
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
    while (!(hi == lo)) {
        while ((hi > lo) && (a[hi] >= FxIP2YE4FOKy))
            hi = hi - 1;
        a[lo] = a[hi];
        while ((hi > lo) && (FxIP2YE4FOKy >= a[lo]))
            lo = lo + 1;
        a[hi] = a[lo];
    }
    a[lo] = FxIP2YE4FOKy;
    boPQZ93 (a, HbSxBjc, lo - 1);
    boPQZ93 (a, lo + 1, r);
}

void  bk3bejqDm (double  a [], int HbSxBjc, int r) {
    int lo = HbSxBjc, hi = r;
    double  FxIP2YE4FOKy;
    FxIP2YE4FOKy = a[HbSxBjc];
    if (r <= HbSxBjc)
        return;
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
    for (; !(hi == lo);) {
        while ((lo < hi) && (FxIP2YE4FOKy >= a[hi]))
            hi = hi - 1;
        a[lo] = a[hi];
        while ((lo < hi) && (a[lo] >= FxIP2YE4FOKy))
            lo = lo + 1;
        a[hi] = a[lo];
    }
    a[lo] = FxIP2YE4FOKy;
    bk3bejqDm (a, HbSxBjc, lo - 1);
    bk3bejqDm (a, lo + 1, r);
}

int main () {
    char a [10];
    int man;
    int CEZNmC5W;
    int n;
    int YbGOF2JRzoLr;
    man = 0;
    CEZNmC5W = 0;
    cout << fixed;
    cin >> n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin.get ();
    for (YbGOF2JRzoLr = 1; YbGOF2JRzoLr <= n; YbGOF2JRzoLr = YbGOF2JRzoLr +1) {
        cin >> a;
        if (a[0] == 'm') {
            cin >> mFtGfP[man];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            man = man + 1;
        }
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
        if (a[0] == 'f') {
            cin >> f5y7cnDw9kl[CEZNmC5W];
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
            CEZNmC5W = CEZNmC5W +1;
        }
        cin.get ();
    }
    CEZNmC5W = CEZNmC5W -1;
    man = man - 1;
    boPQZ93 (mFtGfP, 0, man);
    bk3bejqDm (f5y7cnDw9kl, 0, CEZNmC5W);
    for (YbGOF2JRzoLr = 0; YbGOF2JRzoLr <= man; YbGOF2JRzoLr = YbGOF2JRzoLr +1)
        cout << setprecision (2) << mFtGfP[YbGOF2JRzoLr] << " ";
    for (YbGOF2JRzoLr = 0; YbGOF2JRzoLr <= CEZNmC5W -1; YbGOF2JRzoLr = YbGOF2JRzoLr +1)
        cout << setprecision (2) << f5y7cnDw9kl[YbGOF2JRzoLr] << " ";
    cout << f5y7cnDw9kl[CEZNmC5W] << endl;
    return 0;
}

