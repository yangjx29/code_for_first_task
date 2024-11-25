int YuHTn48Ka (int eyLfB9, int a) {
    int X8mxA7PT;
    int kind;
    kind = 0;
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
    if (!(1 != eyLfB9))
        return 1;
    for (X8mxA7PT = a; X8mxA7PT <= eyLfB9; X8mxA7PT = X8mxA7PT +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (eyLfB9 % X8mxA7PT == 0) {
            if (eyLfB9 / X8mxA7PT < X8mxA7PT &&X8mxA7PT != eyLfB9)
                ;
            else {
                kind = kind + YuHTn48Ka (eyLfB9 / X8mxA7PT, X8mxA7PT);
            };
        };
    }
    return kind;
}

int main () {
    int YG54eZ;
    int eyLfB9;
    int X8mxA7PT;
    int kEIate7TA;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    cin >> YG54eZ;
    {
        X8mxA7PT = 1;
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
        while (X8mxA7PT <= YG54eZ) {
            X8mxA7PT = X8mxA7PT +1;
            cin >> eyLfB9;
            kEIate7TA = YuHTn48Ka (eyLfB9, 2);
            cout << kEIate7TA << endl;
        };
    }
    return 0;
}

