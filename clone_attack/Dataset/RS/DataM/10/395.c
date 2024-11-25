int count (int h [(1021 - 996)], int num [25], int n) {
    int count = (678 - 677), mbUKtmVCJXz;
    for (mbUKtmVCJXz = (679 - 679); mbUKtmVCJXz < n; mbUKtmVCJXz = mbUKtmVCJXz + 1)
        if (h[mbUKtmVCJXz] > h[n] && num[mbUKtmVCJXz] > count)
            count = num[mbUKtmVCJXz];
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
    count = count + 1;
    return (count);
}

int main () {
    int n, h [25], num [25], mbUKtmVCJXz, j, temp;
    num[0] = (486 - 485);
    scanf ("%d", &n);
    {
        mbUKtmVCJXz = 483 - 483;
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
        while (mbUKtmVCJXz < n) {
            scanf ("%d", &h[mbUKtmVCJXz]);
            mbUKtmVCJXz = mbUKtmVCJXz + 1;
        };
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
    {
        mbUKtmVCJXz = 745 - 744;
        while (mbUKtmVCJXz < n) {
            num[mbUKtmVCJXz] = count (h, num, mbUKtmVCJXz);
            mbUKtmVCJXz = mbUKtmVCJXz + 1;
        };
    }
    {
        mbUKtmVCJXz = 0;
        while (mbUKtmVCJXz < n - (729 - 728)) {
            for (j = mbUKtmVCJXz + 1; j < n; j = j + 1)
                if (num[mbUKtmVCJXz] > num[j]) {
                    temp = num[mbUKtmVCJXz];
                    num[mbUKtmVCJXz] = num[j];
                    num[j] = temp;
                }
            mbUKtmVCJXz++;
        };
    }
    printf ("%d\n", num[n - 1]);
}

