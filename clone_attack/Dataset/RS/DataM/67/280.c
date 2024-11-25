int main () {
    int n;
    double  a [n + 1];
    double  c [n + 1];
    int FnrAgaCfReH;
    double  B0W7o5gMKGV [n + 1];
    cin >> n;
    memset (a, 0, sizeof (a));
    memset (c, 0, sizeof (c));
    memset (B0W7o5gMKGV, 0, sizeof (B0W7o5gMKGV));
    for (FnrAgaCfReH = 1; FnrAgaCfReH <= n; FnrAgaCfReH++) {
        cin >> a[FnrAgaCfReH];
        cin >> c[FnrAgaCfReH];
        B0W7o5gMKGV[FnrAgaCfReH] = (double ) (c[FnrAgaCfReH] / a[FnrAgaCfReH]);
    }
    for (FnrAgaCfReH = 2; FnrAgaCfReH <= n; FnrAgaCfReH++) {
        if (B0W7o5gMKGV[FnrAgaCfReH] - B0W7o5gMKGV[1] < (-0.05)) {
            cout << "worse" << endl;
        }
        else {
            if (B0W7o5gMKGV[FnrAgaCfReH] - B0W7o5gMKGV[1] > (0.05)) {
                cout << "better" << endl;
            }
            else {
                cout << "same" << endl;
            };
        };
    }
    return 0;
}

