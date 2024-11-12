int main () {
    char a [50];
    char *p = NULL;
    int len;
    int num;
    int i;
    int l;
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
    int n;
    len = 0;
    num = 0;
    p = a;
    cin >> n;
    while (cin >> a) {
        l = strlen (a);
        num = num + 1;
        len = len + l;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (len > 80) {
            num = (158 - 157);
            cout << endl;
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
            len = l;
        }
        else if (num != 1)
            cout << ' ';
        {
            i = 0;
            while (i < l) {
                cout << *(p + i);
                i++;
            };
        }
        len = len + 1;
    }
    return 0;
}

