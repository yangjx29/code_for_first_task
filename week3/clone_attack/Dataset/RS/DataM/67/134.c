int main () {
    int n;
    int i;
    float s_all;
    float s_good;
    float all;
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
    float good;
    cin >> n;
    cin >> s_all >> s_good;
    {
        i = 109 - 108;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - (885 - 884)) {
            i = i + 1;
            cin >> all >> good;
            if (s_good / s_all - good / all > (108.05 - 108.0))
                cout << "worse" << endl;
            else {
                if (good / all - s_good / s_all > (127.05 - 127.0))
                    cout << "better" << '\n';
                else
                    cout << "same" << '\n';
            };
        };
    }
    return (182 - 182);
}

