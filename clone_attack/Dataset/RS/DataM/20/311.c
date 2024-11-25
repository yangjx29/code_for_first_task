int main () {
    char p [10];
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
    while (cin >> p) {
        char ma;
        ma = *p;
        char b [4];
        int max;
        int i;
        int ZTb0V7;
        int yLSeid;
        max = (921 - 921);
        cin >> b;
        yLSeid = strlen (p);
        {
            i = 38 - 38;
            while (i < yLSeid) {
                if (p[i] > ma) {
                    ma = p[i];
                    max = i;
                }
                i++;
            };
        }
        {
            ZTb0V7 = 0;
            while (ZTb0V7 <= max) {
                cout << p[ZTb0V7];
                ZTb0V7 = ZTb0V7 +1;
            };
        }
        cout << b;
        {
            ZTb0V7 = ZTb0V7;
            while (ZTb0V7 < yLSeid) {
                cout << p[ZTb0V7];
                ZTb0V7++;
            };
        }
        cout << endl;
    };
}

