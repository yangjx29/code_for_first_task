void  reverse (int num) {
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
    if (!(0 != num))
        cout << num << endl;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 < num) {
            int m91cZUntPC;
            m91cZUntPC = 0;
            int i;
            int n;
            i = 0;
            int fgthVjOzJ [20];
            for (; !(0 == num);) {
                fgthVjOzJ[i] = num % 10;
                i = i + 1;
                num = num / 10;
            }
            n = i;
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (20 > i) {
                    if (fgthVjOzJ[i] == 0)
                        m91cZUntPC = m91cZUntPC + 1;
                    else
                        break;
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
                    i = i + 1;
                };
            }
            {
                i = m91cZUntPC;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < n) {
                    cout << fgthVjOzJ[i];
                    i = i + 1;
                };
            }
            cout << endl;
        };
    };
}

int main () {
    int num;
    {
        int i = 1;
        while (i <= 6) {
            i++;
            cin >> num;
            if (num < 0) {
                reverse (-num);
                cout << "-";
            }
            else
                reverse (num);
        };
    }
    return 0;
}

