int i, k, num [(851 - 801)] = {0}, JNIZHuX [50] = {0};

int Y6LQmAtZKw () {
    int xwTSjOZ8cUob;
    {
        xwTSjOZ8cUob = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (50 > xwTSjOZ8cUob) {
            JNIZHuX[xwTSjOZ8cUob] = JNIZHuX[xwTSjOZ8cUob] + num[xwTSjOZ8cUob] * 2;
            if (10 <= JNIZHuX[xwTSjOZ8cUob]) {
                JNIZHuX[xwTSjOZ8cUob + 1]++;
                JNIZHuX[xwTSjOZ8cUob] = JNIZHuX[xwTSjOZ8cUob] % 10;
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
            xwTSjOZ8cUob = xwTSjOZ8cUob + 1;
        };
    }
    {
        xwTSjOZ8cUob = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (50 > xwTSjOZ8cUob) {
            num[xwTSjOZ8cUob] = JNIZHuX[xwTSjOZ8cUob];
            xwTSjOZ8cUob = xwTSjOZ8cUob + 1;
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
    for (xwTSjOZ8cUob = 0; 50 > xwTSjOZ8cUob; xwTSjOZ8cUob = xwTSjOZ8cUob + 1)
        JNIZHuX[xwTSjOZ8cUob] = 0;
    return 0;
}

int main () {
    num[0] = 2;
    cin >> k;
    if (!(0 == k)) {
        for (i = 0; k - 1 > i; i = i + 1)
            Y6LQmAtZKw ();
        for (i = 1; num[50 - i] == 0; i = i + 1)
            ;
        for (; i <= 50; i++)
            cout << num[50 - i];
    }
    else
        cout << 1;
    return 0;
}

