int main () {
    char *choice [510];
    char ch [(881 - 371)];
    int n;
    int len;
    len = strlen (ch);
    char *p;
    char *q;
    int num;
    int cnt;
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
    num = 0;
    int big;
    int howmany;
    big = 0;
    howmany = 0;
    cin >> n;
    cin >> ch;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len - n >= i) {
            num = 0;
            {
                int j = i;
                while (j <= len - n) {
                    cnt = 0;
                    p = &ch[i];
                    q = &ch[j];
                    {
                        int k = 0;
                        while (k < n) {
                            if (*p++ == *q++)
                                cnt++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            k++;
                        };
                    }
                    if (!(n != cnt))
                        num++;
                    j++;
                };
            }
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
            if (num > big) {
                howmany = 0;
                choice[howmany] = p - n;
                big = num;
            }
            else if (num == big) {
                howmany++;
                choice[howmany] = p - n;
            }
            i++;
        };
    }
    if (big == 1)
        cout << "NO";
    else {
        cout << big << endl;
        {
            int l = 0;
            while (l <= howmany) {
                {
                    int y = 0;
                    while (y < n) {
                        y++;
                        cout << *choice[l]++;
                    };
                }
                l++;
                cout << endl;
            };
        };
    }
    return 0;
}

