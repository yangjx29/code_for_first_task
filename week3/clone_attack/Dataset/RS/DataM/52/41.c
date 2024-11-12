int main () {
    int mark;
    mark = 0;
    int n;
    int m;
    int R9uybrLf [(389 - 289)] = {0};
    int b [(686 - 586)] = {0};
    cin >> n >> m;
    for (int i = 0;
    n > i; i++) {
        cin >> R9uybrLf[i];
    }
    for (int j = 0;
    m > j; j = j + 1) {
        {
            int w0qcpedZb = 0;
            while (n > w0qcpedZb) {
                if (0 < w0qcpedZb) {
                    b[w0qcpedZb] = R9uybrLf[w0qcpedZb - 1];
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
                }
                else if (w0qcpedZb == 0) {
                    b[w0qcpedZb] = R9uybrLf[n - 1];
                }
                else
                    ;
                w0qcpedZb++;
            };
        }
        {
            int i2 = 0;
            while (n > i2) {
                R9uybrLf[i2] = b[i2];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i2++;
            };
        };
    }
    for (int i1 = 0;
    i1 < n; i1++) {
        if (mark == 0) {
            cout << b[i1];
            mark = mark + 1;
        }
        else {
            cout << " " << b[i1];
        };
    }
    return 0;
}

