int main () {
    char c;
    int i;
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
    i = 0;
    for (; !('\n' == (c = getchar ()));) {
        if (!(' ' == c)) {
            i = 0;
            cout << c;
            continue;
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
        for (; c == ' ';) {
            i = i + 1;
            if (i >= 2)
                break;
            cout << c;
        };
    }
    return 0;
}

