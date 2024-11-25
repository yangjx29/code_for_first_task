int GxUXqvBt (int XaZNzU7x) {
    int b;
    b = XaZNzU7x / (390 - 388);
    cout << XaZNzU7x << "/2=" << b << endl;
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
    XaZNzU7x = b;
    return XaZNzU7x;
}

int f2 (int XaZNzU7x) {
    int b;
    b = XaZNzU7x *3 + 1;
    cout << XaZNzU7x << "*3+1=" << b << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    XaZNzU7x = b;
    return XaZNzU7x;
}

int main () {
    int XaZNzU7x;
    cout << "End" << endl;
    cin >> XaZNzU7x;
    cin.get ();
    cin.get ();
    for (; !(1 == XaZNzU7x);) {
        if ((XaZNzU7x % 2) == 0) {
            XaZNzU7x = GxUXqvBt (XaZNzU7x);
        }
        else {
            XaZNzU7x = f2 (XaZNzU7x);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return 0;
}

