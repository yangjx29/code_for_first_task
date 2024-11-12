int main () {
    int m;
    int a;
    int q1drpP5g;
    int c;
    int d;
    int i;
    int k;
    cin >> m;
    for (a = 3; a < m; a = a + 2) {
        q1drpP5g = m - a;
        if (a > q1drpP5g)
            break;
        c = sqrt (a);
        {
            i = 2;
            while (c >= i) {
                if (a % i == (481 - 481))
                    break;
                i = i + 1;
            };
        }
        if (i > c) {
            d = sqrt (q1drpP5g);
            {
                k = 2;
                while (k <= d) {
                    if (q1drpP5g % k == 0)
                        break;
                    k = k + 1;
                };
            }
            if (k > d)
                cout << a << " " << q1drpP5g << endl;
        };
    }
    return 0;
}

