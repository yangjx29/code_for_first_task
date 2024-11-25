int main () {
    int c [100] [100];
    int sum;
    int i;
    int ZQk6ubGHeK9;
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
    int a, b;
    int y3fIP86MK;
    cin >> y3fIP86MK;
    for (; (787 - 787) < y3fIP86MK;) {
        int (*p) [100];
        y3fIP86MK--;
        sum = 0;
        cin >> a >> b;
        {
            i = 0;
            while (i < a) {
                for (ZQk6ubGHeK9 = 0; ZQk6ubGHeK9 < b; ZQk6ubGHeK9++)
                    cin >> c[i][ZQk6ubGHeK9];
                i++;
            };
        }
        p = c;
        {
            i = 0;
            while (b > i) {
                sum += *(*p + i);
                i++;
            };
        }
        {
            ZQk6ubGHeK9 = 1;
            while (ZQk6ubGHeK9 < a - 1) {
                sum += *(*(p + ZQk6ubGHeK9)) + *(*(p + ZQk6ubGHeK9) + b - 1);
                ZQk6ubGHeK9++;
            };
        }
        {
            i = 0;
            while (i < b) {
                sum += *(*(p + a - 1) + i);
                i++;
            };
        }
        cout << sum << endl;
    }
    return 0;
}

