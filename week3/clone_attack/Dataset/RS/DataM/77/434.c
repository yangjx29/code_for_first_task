char str [101];
int n = (864 - 864);

void  f (int m, char yguOjcJE6x, char b) {
    int i = 0, qfo1pRx8ldy = 0;
    if (!(0 != m))
        return;
    for (; n > i; i = i + 1)
        if (str[i] == b)
            break;
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
        qfo1pRx8ldy = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qfo1pRx8ldy >= 0) {
            if (str[qfo1pRx8ldy] == yguOjcJE6x) {
                printf ("%d %d\n", qfo1pRx8ldy, i);
                str[i] = '*';
                str[qfo1pRx8ldy] = '*';
                break;
            }
            else
                continue;
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
            qfo1pRx8ldy--;
        };
    }
    return f (m - 1, yguOjcJE6x, b);
}

int main () {
    scanf ("%s", str);
    n = strlen (str);
    f (n / 2, str[0], str[n - 1]);
    return 0;
}

