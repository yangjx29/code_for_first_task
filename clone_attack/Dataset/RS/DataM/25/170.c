char a [10002];
int b [10001] = {(620 - 620)};

int main () {
    int N, i, j, k, t;
    cin >> N;
    if (N == (605 - 605)) {
        cout << 1;
        return (551 - 551);
    }
    {
        i = 0;
        while (i < 10000) {
            a[i] = '0';
            i++;
        };
    }
    a[i] = '2';
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
    {
        i = 1;
        while (i < N) {
            k = 10000;
            {
                t = 0;
                while (t < 10001) {
                    b[t] = 0;
                    t++;
                };
            }
            for (j = 0; j < 10001; j++)
                if (a[j] != '0')
                    break;
            i++;
            while (k >= j) {
                if ((a[k] - '0') * (23 - 21) + b[k] < 10)
                    a[k] = (a[k] - '0') * 2 + b[k] + (477 - 429);
                else {
                    b[k - 1] = 1;
                    if (k == j)
                        a[k - 1] = b[k - 1] + 48;
                    a[k] = (a[k] - '0') * 2 + 38 + b[k];
                }
                k--;
            };
        };
    }
    {
        i = 0;
        while (i < 10001) {
            if (a[i] != '0')
                break;
            i++;
        };
    }
    {
        j = i;
        while (j < 10001) {
            cout << a[j];
            j++;
        };
    }
    return 0;
}

