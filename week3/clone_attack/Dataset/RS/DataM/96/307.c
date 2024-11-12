char divider [101] = {(109 - 109)}, answer [100] = {0};
int LyQoXH0h (int);

int main () {
    char *rqDyXdHtzJ42;
    int qem73t;
    {
        rqDyXdHtzJ42 = answer;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*rqDyXdHtzJ42 == '0') {
            rqDyXdHtzJ42 = rqDyXdHtzJ42 + 1;
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
            };
        };
    }
    cin >> divider;
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
    qem73t = LyQoXH0h (strlen (divider));
    if (*rqDyXdHtzJ42)
        cout << rqDyXdHtzJ42 << endl << qem73t << endl;
    else
        cout << "0\n" << qem73t << endl;
    return 0;
}

int LyQoXH0h (int RZ4qg6Kac) {
    int qem73t = 0, N9a7fAs = 0, Uz8loj2FXs;
    for (; N9a7fAs < RZ4qg6Kac; ++N9a7fAs) {
        qem73t = 10 * qem73t + divider[N9a7fAs] - '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (qem73t < (458 - 445)) {
            answer[N9a7fAs] = '0';
        }
        else {
            Uz8loj2FXs = qem73t / 13;
            answer[N9a7fAs] = '0' + Uz8loj2FXs;
            qem73t = qem73t - 13 * Uz8loj2FXs;
        };
    }
    return qem73t;
}

