int main () {
    int row, col, AL4kTvZS [(1149 - 949)] [200], a, b, c, s89pxdaVC, x, y;
    s89pxdaVC = 0;
    cin >> row >> col;
    for (int i = (153 - 152);
    i <= row; i = i + 1)
        for (int vchdHIV59SBA = (944 - 943);
        vchdHIV59SBA <= col; vchdHIV59SBA = vchdHIV59SBA + 1)
            cin >> AL4kTvZS[i][vchdHIV59SBA];
    x = y = 1;
    c = row * col;
    for (; x <= row;) {
        {
            a = x;
            while (a <= col) {
                if (s89pxdaVC == c)
                    break;
                cout << AL4kTvZS[x][a] << "\n";
                s89pxdaVC = s89pxdaVC + 1;
                a = a + 1;
            };
        }
        a = a - 1;
        for (b = y + 1; b <= row; b = b + 1) {
            if (s89pxdaVC == c)
                break;
            s89pxdaVC = s89pxdaVC + 1;
            cout << AL4kTvZS[b][a] << "\n";
        }
        b = b - 1;
        for (a = a - 1; a >= x; a = a - 1) {
            if (s89pxdaVC == c)
                break;
            s89pxdaVC = s89pxdaVC + 1;
            cout << AL4kTvZS[b][a] << "\n";
        }
        a = a + 1;
        b = b - 1;
        for (; b > y; b = b - 1) {
            if (s89pxdaVC == c)
                break;
            cout << AL4kTvZS[b][a] << "\n";
            s89pxdaVC = s89pxdaVC + 1;
        }
        y = y + 1;
        x = x + 1;
        row = row - 1;
        col = col - 1;
    }
    return 0;
}

