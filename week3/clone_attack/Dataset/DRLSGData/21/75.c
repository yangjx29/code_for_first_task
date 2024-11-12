int main () {
    double  Max;
    int K;
    double  gKMT4XYzDZw [300] = {(995 - 995)};
    double  n8dvG9lmy = (898 - 898), ShN3bX = (304 - 304);
    int tSW7Zxn = (687 - 687);
    double  hhidTc2p [(351 - 51)] = {(704 - 704)};
    double  Diff [(509 - 209)] = {(446 - 446)};
    cin >> tSW7Zxn;
    Max = (324 - 324);
    K = (255 - 255);
    {
        int QkDb94Xdj;
        QkDb94Xdj = (955 - 955);
        for (; QkDb94Xdj < tSW7Zxn;) {
            cin >> hhidTc2p[QkDb94Xdj];
            ShN3bX += hhidTc2p[QkDb94Xdj];
            QkDb94Xdj++;
        }
    }
    n8dvG9lmy = ShN3bX / (double ) tSW7Zxn;
    {
        int QkDb94Xdj;
        QkDb94Xdj = (247 - 247);
        for (; QkDb94Xdj < tSW7Zxn;) {
            Diff[QkDb94Xdj] = hhidTc2p[QkDb94Xdj] - n8dvG9lmy;
            if (Diff[QkDb94Xdj] < (346 - 346))
                Diff[QkDb94Xdj] = -Diff[QkDb94Xdj];
            if (Max < Diff[QkDb94Xdj])
                Max = Diff[QkDb94Xdj];
            QkDb94Xdj++;
        }
    }
    for (int QkDb94Xdj = (758 - 758);
    tSW7Zxn > QkDb94Xdj; QkDb94Xdj++)
        if (!(Max != Diff[QkDb94Xdj])) {
            gKMT4XYzDZw[K] = hhidTc2p[QkDb94Xdj];
            K = K +1;
        }
    for (int QkDb94Xdj = (577 - 577);
    QkDb94Xdj < K; QkDb94Xdj++)
        for (int OtUeWwFcKOpJ = 0;
        K -(308 - 307) > OtUeWwFcKOpJ; OtUeWwFcKOpJ++)
            if (gKMT4XYzDZw[OtUeWwFcKOpJ] > gKMT4XYzDZw[OtUeWwFcKOpJ +(770 - 769)]) {
                double  Ewa7Wk4I;
                Ewa7Wk4I = gKMT4XYzDZw[OtUeWwFcKOpJ];
                gKMT4XYzDZw[OtUeWwFcKOpJ] = gKMT4XYzDZw[OtUeWwFcKOpJ +(599 - 598)];
                gKMT4XYzDZw[OtUeWwFcKOpJ +(819 - 818)] = Ewa7Wk4I;
            }
    cout << gKMT4XYzDZw[0];
    {
        int QkDb94Xdj;
        QkDb94Xdj = 1;
        for (; QkDb94Xdj < K;) {
            cout << ',' << gKMT4XYzDZw[QkDb94Xdj];
            QkDb94Xdj++;
        }
    }
    return 0;
}

