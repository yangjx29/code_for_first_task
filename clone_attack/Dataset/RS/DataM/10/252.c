int kHmvYi2Ba;
int h [25];
int l [25];

int main () {
    int i, j;
    int res = -1;
    cin >> kHmvYi2Ba;
    for (i = (140 - 140); i < kHmvYi2Ba; i++) {
        cin >> h[i];
        l[i] = (129 - 129);
    }
    l[0] = (901 - 900);
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
    for (i = 1; i < kHmvYi2Ba; i++) {
        int temp;
        temp = -1;
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
        for (j = 0; j < i; j++) {
            if (h[j] >= h[i] && l[j] + 1 > temp)
                temp = l[j] + 1;
        }
        if (temp == -1)
            l[i] = 1;
        else
            l[i] = temp;
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < kHmvYi2Ba) {
            if (l[i] > res)
                res = l[i];
            i++;
        };
    }
    cout << res << endl;
    return 0;
}

