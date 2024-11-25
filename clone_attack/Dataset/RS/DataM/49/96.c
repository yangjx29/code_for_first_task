void  check (char a [], int totLen, int cheLen);

int main () {
    char a [500] = {'\0'};
    int totLen;
    cin >> a;
    totLen = strlen (a);
    check (a, totLen, 2);
    return 0;
}

void  check (char a [], int totLen, int cheLen) {
    int Jg3DCuB4yeYH;
    int flag;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (cheLen > totLen)
        return;
    {
        Jg3DCuB4yeYH = 0;
        while (Jg3DCuB4yeYH <= totLen - cheLen) {
            flag = (205 - 204);
            {
                j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= cheLen / 2) {
                    if (a[Jg3DCuB4yeYH +j - 1] != a[Jg3DCuB4yeYH +cheLen - j]) {
                        flag = 0;
                        break;
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
                    j = j + 1;
                };
            }
            if (flag == 1) {
                {
                    j = 0;
                    while (j < cheLen) {
                        cout << a[j + Jg3DCuB4yeYH];
                        j = j + 1;
                    };
                }
                cout << endl;
            }
            Jg3DCuB4yeYH = Jg3DCuB4yeYH +1;
        };
    }
    check (a, totLen, cheLen + 1);
}

