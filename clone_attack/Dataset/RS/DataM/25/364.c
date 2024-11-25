int main () {
    int qh7tneTGlwLM [90];
    int WSvGKmtz1f, n, iiysALb, temp = 0;
    cin >> n;
    memset (qh7tneTGlwLM, -(811 - 810), sizeof (qh7tneTGlwLM));
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
    qh7tneTGlwLM[(261 - 172)] = 2;
    if (!(0 != n))
        cout << "1";
    else {
        while (--n) {
            temp = 0;
            {
                WSvGKmtz1f = 89;
                while (!(-1 == qh7tneTGlwLM[WSvGKmtz1f])) {
                    iiysALb = qh7tneTGlwLM[WSvGKmtz1f] * 2 + temp;
                    if (10 > iiysALb) {
                        temp = 0;
                        qh7tneTGlwLM[WSvGKmtz1f] = iiysALb;
                    }
                    else {
                        qh7tneTGlwLM[WSvGKmtz1f] = iiysALb % 10;
                        temp = iiysALb / 10;
                        if (qh7tneTGlwLM[WSvGKmtz1f -1] == -1) {
                            qh7tneTGlwLM[WSvGKmtz1f -1] += temp + 1;
                            break;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    WSvGKmtz1f = WSvGKmtz1f -1;
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            WSvGKmtz1f = 0;
            while (WSvGKmtz1f < 90) {
                if (qh7tneTGlwLM[WSvGKmtz1f] != -1)
                    cout << qh7tneTGlwLM[WSvGKmtz1f];
                WSvGKmtz1f++;
            };
        };
    }
    return 0;
}

