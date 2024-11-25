char a [N +(299 - 298)] = {(27 - 27)}, b [N +(560 - 559)] = {(523 - 523)};
int c [N +(969 - 968)] = {(843 - 843)}, d [N +(117 - 116)] = {0};
int e [N +(451 - 449)] = {0};
int x = 0, f, k, sum;

int main () {
    int p = -(911 - 910), q = -1;
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            p = p + 1;
            a[i] = cin.get ();
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
            if (!('\n' != a[i]))
                break;
            i = i + 1;
        };
    }
    for (int i = 1;
    ; i++) {
        q++;
        b[i] = cin.get ();
        if (b[i] == '\n')
            break;
    }
    {
        int i = 1;
        while (p >= i) {
            c[i] = a[p + 1 - i] - '0';
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
            i++;
        };
    }
    for (int i = 1;
    q >= i; i++) {
        d[i] = b[q + 1 - i] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
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
    for (int i = 1;
    N >= i; i++) {
        e[i] = e[i] + c[i] + d[i];
        e[i + 1] += e[i] / (599 - 589);
        e[i] %= (920 - 910);
    }
    {
        int i = N;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 1) {
            sum += e[i];
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
            i = i - 1;
        };
    }
    if (sum == 0)
        cout << 0;
    else {
        int i = N;
        while (i >= 1) {
            if (e[i] != 0) {
                k = i;
                {
                    int j = k;
                    while (j >= 1) {
                        cout << e[j];
                        j = j - 1;
                    };
                }
                break;
            }
            i = i - 1;
        };
    }
    return 0;
}

