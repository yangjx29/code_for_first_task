int jRODcz (int IHQeuLn93) {
    int aDMKZ3l;
    aDMKZ3l = sqrt (IHQeuLn93);
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
    for (int NW8AVdNKkYw = 2;
    aDMKZ3l >= NW8AVdNKkYw; NW8AVdNKkYw = NW8AVdNKkYw +1)
        if (!(0 != IHQeuLn93 % NW8AVdNKkYw))
            return 0;
    return 1;
}

int main () {
    int jrC70dPpqvo;
    int t;
    int aDMKZ3l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> jrC70dPpqvo;
    for (t = 3; t <= jrC70dPpqvo / 2; t++) {
        aDMKZ3l = jrC70dPpqvo - t;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (jRODcz (aDMKZ3l) + jRODcz (t) == 2)
            cout << t << ' ' << aDMKZ3l << endl;
    }
    return 0;
}

