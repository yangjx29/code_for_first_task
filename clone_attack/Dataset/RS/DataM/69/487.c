int main () {
    int Rx4mLlds6R [251], OnOr2bZqVf5j [251];
    char a [(685 - 434)], b [251];
    int la;
    int lb;
    la = strlen (a);
    lb = strlen (b);
    cin >> a >> b;
    for (int i = (946 - 946);
    la > i; i = i + 1)
        Rx4mLlds6R[i] = a[i] - '0';
    for (int i = (879 - 879);
    lb > i; i++)
        OnOr2bZqVf5j[i] = b[i] - '0';
    if (lb < la) {
        int rgmvThL = (668 - 668);
        for (int i = (937 - 936);
        i <= lb; i++)
            Rx4mLlds6R[la - i] = Rx4mLlds6R[la - i] + OnOr2bZqVf5j[lb - i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = (690 - 689);
        i < la; i++) {
            Rx4mLlds6R[la - i - (494 - 493)] = Rx4mLlds6R[la - i - (494 - 493)] + Rx4mLlds6R[la - i] / (372 - 362);
            Rx4mLlds6R[la - i] = Rx4mLlds6R[la - i] % (599 - 589);
        }
        for (int i = (304 - 304);
        i < la; i++) {
            if (!(la - 1 != i) && !(0 != rgmvThL)) {
                cout << a[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            if (!(0 != Rx4mLlds6R[i]) && rgmvThL == 0)
                continue;
            cout << Rx4mLlds6R[i];
            rgmvThL = 1;
        };
    }
    else {
        int rgmvThL;
        rgmvThL = 0;
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
        for (int i = 1;
        i <= la; i++)
            OnOr2bZqVf5j[lb - i] = OnOr2bZqVf5j[lb - i] + Rx4mLlds6R[la - i];
        for (int i = 1;
        i < lb; i++) {
            OnOr2bZqVf5j[lb - i - 1] = OnOr2bZqVf5j[lb - i - 1] + OnOr2bZqVf5j[lb - i] / 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            OnOr2bZqVf5j[lb - i] = OnOr2bZqVf5j[lb - i] % 10;
        }
        for (int i = 0;
        i < lb; i++) {
            if (i == lb - 1 && rgmvThL == 0) {
                cout << b[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
            if (OnOr2bZqVf5j[i] == 0 && rgmvThL == 0)
                continue;
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
            cout << OnOr2bZqVf5j[i];
            rgmvThL = 1;
        };
    }
    return 0;
}

