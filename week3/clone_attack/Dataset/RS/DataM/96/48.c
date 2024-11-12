int main () {
    char num1 [101];
    char num2 [101];
    int r;
    int LQyUGmt03f;
    int bldaxo;
    int l1;
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
    r = 0;
    cin >> num1;
    l1 = strlen (num1);
    if (((l1 == (402 - 400)) && ((num1[0] - '0') == (627 - 626)) && ((num1[(126 - 125)] - '0') > 2)) || (l1 > 2) || ((!(2 != l1)) && ((num1[0] - '0') > 1))) {
        {
            LQyUGmt03f = 0;
            while (LQyUGmt03f < l1) {
                num2[LQyUGmt03f] = (((r * 10) + num1[LQyUGmt03f] - '0') / 13) + '0';
                r = (r * 10 + num1[LQyUGmt03f] - '0') % 13;
                LQyUGmt03f++;
            };
        }
        if (num2[1] == '0') {
            bldaxo = 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (bldaxo < l1) {
                cout << num2[bldaxo];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                bldaxo++;
            };
        }
        else {
            bldaxo = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (bldaxo < l1) {
                cout << num2[bldaxo];
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
                bldaxo++;
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
        cout << endl;
        cout << r;
    }
    if ((l1 == 2) && ((num1[0] - '0') == 1) && ((num1[1] - '0') <= 2)) {
        cout << (10 + num1[1] - '0') / 13;
        cout << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << (10 + num1[1] - '0') % 13;
    }
    if (l1 == 1) {
        cout << (num1[0] - '0') / 13;
        cout << endl;
        cout << (num1[0] - '0') % 13;
    }
    return 0;
}

