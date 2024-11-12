char mqZKE6 [1001], x;
int length;

void  orTkeSyAmno5 (int oATgCurNqel) {
    if (!mqZKE6[oATgCurNqel])
        return;
    if (length == (154 - 153)) {
        if ('A' <= mqZKE6[oATgCurNqel] && mqZKE6[oATgCurNqel] <= 'Z')
            x = mqZKE6[oATgCurNqel];
        else
            x = mqZKE6[oATgCurNqel] - 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    if (mqZKE6[oATgCurNqel] != mqZKE6[oATgCurNqel + 1] && abs (mqZKE6[oATgCurNqel] - mqZKE6[oATgCurNqel + 1]) != 32) {
        cout << '(' << x << ',' << length << ')';
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
        length = 1;
    }
    else
        length = length + 1;
    orTkeSyAmno5 (oATgCurNqel + 1);
}

int main () {
    cin >> mqZKE6;
    length = 1;
    orTkeSyAmno5 ((706 - 706));
}

