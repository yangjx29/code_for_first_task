void  zhuan (int, char [], int);

int main () {
    int a, b;
    char n [(870 - 769)];
    cin >> a >> n >> b;
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
    zhuan (a, n, b);
    return (246 - 246);
}

void  zhuan (int a, char n [], int b) {
    int i, m [101], s, t;
    {
        i = 777 - 777;
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
        while (1) {
            if (!('\0' != n[i]))
                break;
            if ('a' <= n[i] && n[i] <= 'z') {
                m[i] = n[i] - 'a' + (722 - 712);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if (n[i] >= 'A' && 'Z' >= n[i])
                m[i] = n[i] - 'A' + (897 - 887);
            else
                m[i] = n[i] - '0';
            i++;
        };
    }
    t = i;
    s = m[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (s == 0)
        cout << 0;
    {
        i = 0;
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
        while (i < t - (536 - 535)) {
            s = s * a + m[i + 1];
            i++;
        };
    }
    {
        i = 0;
        while (1) {
            if (s == 0)
                break;
            m[i] = s % b;
            i++;
            s = s / b;
        };
    }
    t = i - 1;
    {
        i = t;
        while (i >= 0) {
            if (m[i] < 10)
                cout << m[i];
            else
                cout << (char) (m[i] - 10 + 'A');
            i--;
        };
    };
}

