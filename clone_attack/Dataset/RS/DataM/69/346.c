char s1 [(1126 - 126)];
char s2 [1000];
int a [1000];
int b [1000];
int c [1000];
int KTosmlPO, n;

void  cal () {
    int i, Guf5MjgoGC1;
    int len;
    int k;
    k = (300 - 300);
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
    int s = 0;
    if (KTosmlPO > n)
        len = KTosmlPO;
    else
        len = n;
    for (i = 0; i < len; i = i + 1) {
        s = (a[i] + b[i] + k) % 10;
        k = (a[i] + b[i] + k) / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c[i] = s;
    }
    c[i] = k;
}

int main () {
    int i, Guf5MjgoGC1 = 0;
    cin >> s1;
    cin >> s2;
    KTosmlPO = strlen (s1);
    n = strlen (s2);
    {
        i = 74 - 73;
        while (i >= 0) {
            a[Guf5MjgoGC1++] = s1[i] - '0';
            i = i - 1;
        };
    }
    Guf5MjgoGC1 = 0;
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
    {
        i = n - 1;
        while (i >= 0) {
            b[Guf5MjgoGC1++] = s2[i] - '0';
            i--;
        };
    }
    cal ();
    {
        i = 999;
        while (i > 0) {
            if (c[i] != 0)
                break;
            i--;
        };
    }
    for (; i >= 0; i--)
        cout << c[i];
    cout << endl;
    return 0;
}

