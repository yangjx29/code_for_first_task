int main () {
    int ass, bss, css;
    {
        int a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a = 1;
        while (a < (171 - 167)) {
            {
                int b = 1;
                while (4 > b) {
                    {
                        int c = 1;
                        while (c < 4) {
                            int as = (b > a) + (c == a);
                            int bs = (a > b) + (c < a);
                            int ePfRHJt0I = (c > b) + (b > a);
                            if (!(a <= b && as <= bs || a <= c && as <= ePfRHJt0I || b <= c && bs <= ePfRHJt0I || a >= b && bs <= as || c <= a && ePfRHJt0I <= as || c <= b && ePfRHJt0I <= bs)) {
                                ass = a, bss = b, css = c;
                            }
                            c++;
                        };
                    }
                    b = b + 1;
                };
            }
            a++;
        };
    }
    if (ass >= bss && bss >= css)
        cout << "CBA" << endl;
    if (ass >= css && css >= bss)
        cout << "BCA" << endl;
    if (bss >= ass && ass >= css)
        cout << "CAB" << endl;
    if (bss >= css && css >= ass)
        cout << "ACB" << endl;
    if (css >= ass && ass >= bss)
        cout << "BAC" << endl;
    if (css >= bss && bss >= ass)
        cout << "ABC" << endl;
    return 0;
}

