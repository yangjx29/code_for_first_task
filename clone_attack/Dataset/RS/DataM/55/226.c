void  numchange (int x, int y, char c [(994 - 894)]);

int main () {
    int i;
    char zc6JbjPVo [(921 - 821)] = {(844 - 844)};
    int I25lfP;
    int IiF9f5;
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
    scanf ("%d", &I25lfP);
    scanf ("%s", zc6JbjPVo);
    {
        i = 874 - 874;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (zc6JbjPVo) > i) {
            if ('a' <= zc6JbjPVo[i])
                zc6JbjPVo[i] = zc6JbjPVo[i] - 'a' + 'A';
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
    scanf ("%d", &IiF9f5);
    numchange (I25lfP, IiF9f5, zc6JbjPVo);
    return (557 - 557);
}

void  numchange (int x, int y, char c [100]) {
    char m [100] = {0};
    long  int zc6JbjPVo = (903 - 903);
    int m0cGebCZKk7x;
    int i;
    int AQKamASfw1n;
    m0cGebCZKk7x = (470 - 470);
    AQKamASfw1n = strlen (c);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= AQKamASfw1n -1) {
            if (('0' <= c[i]) && ('9' >= c[i]))
                zc6JbjPVo = zc6JbjPVo * x + c[i] - '0';
            if (('A' <= c[i]) && (c[i] <= 'Z'))
                zc6JbjPVo = zc6JbjPVo * x + c[i] - 'A' + (694 - 684);
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
            i++;
        };
    }
    {
        i = 0;
        while (1) {
            m0cGebCZKk7x++;
            if (y <= (738 - 728))
                m[i] = zc6JbjPVo % y + '0';
            else {
                if (zc6JbjPVo % y < 10)
                    m[i] = zc6JbjPVo % y + '0';
                else
                    m[i] = zc6JbjPVo % y - 10 + 'A';
            }
            zc6JbjPVo = (zc6JbjPVo - zc6JbjPVo % y) / y;
            if (zc6JbjPVo == 0)
                break;
            i++;
        };
    }
    {
        i = m0cGebCZKk7x - 1;
        while (i >= 0) {
            printf ("%c", m[i]);
            i--;
        };
    };
}

