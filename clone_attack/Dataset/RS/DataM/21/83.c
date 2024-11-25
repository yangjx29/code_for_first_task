int main () {
    double  Hu2k4C0T;
    Hu2k4C0T = 0;
    double  b [300];
    int ysUWLkmNaiI, uj0TwKb7oRxN;
    double  sum;
    int a [300];
    double  junzhi;
    junzhi = sum / ysUWLkmNaiI;
    int c [300];
    int KFtN6j7XUY = -1;
    int YLl0Hi7u3kry;
    sum = 0;
    cin >> ysUWLkmNaiI;
    for (uj0TwKb7oRxN = 0; ysUWLkmNaiI > uj0TwKb7oRxN; uj0TwKb7oRxN = uj0TwKb7oRxN + 1) {
        cin >> a[uj0TwKb7oRxN];
        sum = sum + a[uj0TwKb7oRxN];
    }
    for (uj0TwKb7oRxN = 0; ysUWLkmNaiI > uj0TwKb7oRxN; uj0TwKb7oRxN = uj0TwKb7oRxN + 1) {
        if (junzhi > a[uj0TwKb7oRxN])
            b[uj0TwKb7oRxN] = junzhi - a[uj0TwKb7oRxN];
        else
            b[uj0TwKb7oRxN] = a[uj0TwKb7oRxN] - junzhi;
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
        if (Hu2k4C0T < b[uj0TwKb7oRxN])
            Hu2k4C0T = b[uj0TwKb7oRxN];
    }
    for (uj0TwKb7oRxN = 0; uj0TwKb7oRxN < ysUWLkmNaiI; uj0TwKb7oRxN++)
        if (!(b[uj0TwKb7oRxN] != Hu2k4C0T)) {
            KFtN6j7XUY = KFtN6j7XUY +1;
            c[KFtN6j7XUY] = a[uj0TwKb7oRxN];
        }
    KFtN6j7XUY = KFtN6j7XUY +1;
    for (uj0TwKb7oRxN = 0; KFtN6j7XUY > uj0TwKb7oRxN; uj0TwKb7oRxN++)
        for (YLl0Hi7u3kry = uj0TwKb7oRxN + 1; YLl0Hi7u3kry < KFtN6j7XUY; YLl0Hi7u3kry = YLl0Hi7u3kry +1)
            if (c[uj0TwKb7oRxN] > c[YLl0Hi7u3kry]) {
                sum = c[uj0TwKb7oRxN];
                c[uj0TwKb7oRxN] = c[YLl0Hi7u3kry];
                c[YLl0Hi7u3kry] = sum;
            }
    cout << c[0];
    for (uj0TwKb7oRxN = 1; uj0TwKb7oRxN < KFtN6j7XUY; uj0TwKb7oRxN++)
        cout << ',' << c[uj0TwKb7oRxN];
    return 0;
}

