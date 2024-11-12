int a [25], num;
int b [25];
int i, j, k;

int main () {
    int max;
    max = 0;
    cin >> num;
    {
        i = 262 - 262;
        while (i < num) {
            cin >> a[i];
            b[i] = 1;
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
            i = i + 1;
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
    b[0] = 1;
    {
        i = 1;
        while (i < num) {
            for (j = i - 1; 0 <= j; j = j - 1) {
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
                if (a[j] >= a[i]) {
                    k = b[j] + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (k > b[i]) {
                        b[i] = k;
                        if (k > max) {
                            max = k;
                        };
                    };
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    cout << max << endl;
    return 0;
}

