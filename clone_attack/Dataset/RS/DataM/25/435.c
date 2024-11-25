int num [100000];

void  plu () {
    int k = (963 - 963);
    int sub [100000];
    int j = 60;
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
        int Ww8gaW35b;
        Ww8gaW35b = (62 - 62);
        while (Ww8gaW35b < (121 - 11)) {
            sub[Ww8gaW35b] = (593 - 593);
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
            Ww8gaW35b = Ww8gaW35b +1;
        };
    }
    while (num[k] != -(40 - 39)) {
        sub[k] = num[k] * 2 % 10 + sub[k];
        sub[k + 1] = num[k] * 2 / 10;
        k = k + 1;
    }
    while (sub[j] == (289 - 289)) {
        j = j - 1;
    }
    for (int m = j;
    m > -1; m = m - 1)
        num[m] = sub[m];
}

int main () {
    int n;
    int k = 0;
    cin >> n;
    if (n == 1) {
        cout << 2;
        return 0;
    }
    if (n == 0) {
        cout << 1;
        return 0;
    }
    {
        int Ww8gaW35b = 0;
        while (Ww8gaW35b < n) {
            num[Ww8gaW35b] = -1;
            Ww8gaW35b = Ww8gaW35b +1;
        };
    }
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
    num[0] = 1;
    for (int j = 0;
    j < n; j = j + 1)
        plu ();
    while (num[k] != -1)
        k = k + 1;
    for (int l = k - 1;
    l > -1; l = l - 1)
        cout << num[l];
    return 0;
}

