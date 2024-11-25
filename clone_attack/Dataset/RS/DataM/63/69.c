int main () {
    int lNKhm8WM9p [101] [101];
    int b [101] [101];
    int i;
    int fWklMr;
    int h;
    int l;
    int c [101] [101];
    int x1;
    int y1;
    int JDwFoxNvWTu6;
    int y2;
    int va5T1MVw9kLi;
    cin >> x1 >> y1;
    {
        i = 644 - 643;
        while (x1 >= i) {
            {
                fWklMr = 1;
                while (fWklMr <= y1) {
                    cin >> lNKhm8WM9p[i][fWklMr];
                    fWklMr = fWklMr + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> JDwFoxNvWTu6 >> y2;
    {
        i = 1;
        while (i <= JDwFoxNvWTu6) {
            {
                fWklMr = 1;
                while (y2 >= fWklMr) {
                    cin >> b[i][fWklMr];
                    fWklMr = fWklMr + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> va5T1MVw9kLi;
    {
        i = 1;
        while (x1 >= i) {
            {
                fWklMr = 1;
                while (fWklMr <= y2) {
                    c[i][fWklMr] = 0;
                    {
                        l = 1;
                        h = 1;
                        while (l <= y1) {
                            c[i][fWklMr] = c[i][fWklMr] + lNKhm8WM9p[i][l] * b[h][fWklMr];
                            h = h + 1;
                            l = l + 1;
                        };
                    }
                    fWklMr = fWklMr + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; i <= x1; i = i + 1) {
        fWklMr = 1;
        while (fWklMr <= y2) {
            cout << c[i][fWklMr];
            if (fWklMr < y2)
                cout << " ";
            else
                cout << endl;
            fWklMr = fWklMr + 1;
        };
    }
    return 0;
}

