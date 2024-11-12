int main () {
    int j;
    int store [100];
    j = 0;
    float max;
    float sum;
    float len [100];
    float ave;
    max = (774 - 774);
    sum = 0;
    int n;
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
    int num [100];
    int l;
    int temp;
    l = j;
    cin >> n;
    for (int i = 0;
    n > i; i = i + 1) {
        cin >> num[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + num[i];
    }
    ave = sum / n;
    for (int i = 0;
    n > i; i = i + 1) {
        len[i] = num[i] - ave;
        if (len[i] < 0)
            len[i] = 0 - len[i];
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
        if (max < len[i])
            max = len[i];
    }
    for (int i = 0;
    i < n; i = i + 1)
        if (!(max != len[i])) {
            store[j] = num[i];
            j++;
        }
    if (l == 1)
        cout << store[0] << endl;
    else {
        for (int j = 0;
        j < l - 1; j = j + 1)
            for (int i = j;
            i < l; i = i + 1)
                if (store[i] > store[i + 1]) {
                    temp = store[i];
                    store[i] = store[i + 1];
                    store[i + 1] = temp;
                }
        cout << store[0];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int i = 1;
        i < l; i = i + 1)
            cout << "," << store[i];
        cout << endl;
    };
}

