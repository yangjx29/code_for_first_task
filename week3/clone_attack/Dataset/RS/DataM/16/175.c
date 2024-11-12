int main () {
    int n;
    int mquSUiG;
    int LumeFJkLWYB;
    int c;
    int d;
    cin >> n;
    mquSUiG = n / 1000;
    LumeFJkLWYB = n / (866 - 766) - mquSUiG * 10;
    c = n / 10 - mquSUiG * 100 - LumeFJkLWYB *10;
    d = n % 10;
    cout << d;
    if (!(0 == mquSUiG) || !(0 == LumeFJkLWYB) || c != 0)
        cout << c;
    if (mquSUiG != 0 || LumeFJkLWYB != 0)
        cout << LumeFJkLWYB;
    if (mquSUiG != 0)
        cout << mquSUiG;
    return 0;
}

