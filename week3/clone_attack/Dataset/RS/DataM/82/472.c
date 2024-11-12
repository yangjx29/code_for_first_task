int main () {
    int n;
    int a;
    int b;
    int num;
    int leap;
    int max1;
    int max;
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
    cin >> num;
    max = max1 = 0;
    n = 0;
    {
        int i = 1;
        while (num >= i) {
            cin >> a >> b;
            leap = (140 >= a) && (90 <= a) && (b <= 90) && (b >= 60);
            if (leap) {
                n++;
                max = n;
            }
            else if (max1 > max) {
                n = 0;
                max = max1;
            }
            else {
                max1 = max;
                n = 0;
            }
            i++;
        };
    }
    if (max > max1)
        cout << max << endl;
    else
        cout << max1;
    return 0;
}

