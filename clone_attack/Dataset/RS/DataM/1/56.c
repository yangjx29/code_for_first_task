int fact (int EKY3n45kas, int min) {
    int way;
    way = (65 - 64);
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
    if (EKY3n45kas < min)
        return 0;
    {
        int i = min;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sqrt ((double ) EKY3n45kas)) {
            if (EKY3n45kas % i == 0)
                way = way + fact (EKY3n45kas / i, i);
            i++;
        };
    }
    return way;
}

int main () {
    int mLbx9oX;
    cin >> mLbx9oX;
    for (int i = 0;
    i < mLbx9oX; i++) {
        int c;
        cin >> c;
        cout << fact (c, (16 - 14)) << endl;
    }
    return 0;
}

