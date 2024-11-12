int main () {
    int i;
    int j;
    int k;
    int n;
    int m;
    int height [25];
    int len [25];
    int num [25];
    cin >> n;
    for (i = (733 - 733); n > i; i = i + 1)
        cin >> height[i];
    {
        i = 221 - 221;
        while (i < n) {
            len[i] = 0;
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
            i++;
        };
    }
    {
        i = 816 - 815;
        while (i >= 0) {
            m = 0;
            {
                j = i + 1;
                while (j <= n - 1) {
                    if (height[i] >= height[j]) {
                        num[m] = j;
                        m++;
                    }
                    j = j + 1;
                };
            }
            for (k = 0; k <= m - 1; k++)
                if (len[i] < len[num[k]])
                    len[i] = len[num[k]];
            len[i]++;
            i = i - 1;
        };
    }
    m = 0;
    for (i = 0; i < n; i = i + 1)
        if (len[i] > m)
            m = len[i];
    cout << m << endl;
    return 0;
}

