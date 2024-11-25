int AhK7k0HIw (int m, int yG8wIL3) {
    int KEeDCI4X2;
    int ai2pQNMr;
    KEeDCI4X2 = (551 - 551);
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
    if (yG8wIL3 == (234 - 233))
        return 1;
    for (KEeDCI4X2 = 0, ai2pQNMr = m; yG8wIL3 >= ai2pQNMr; ai2pQNMr = ai2pQNMr + 1)
        if (yG8wIL3 % ai2pQNMr == 0)
            KEeDCI4X2 += AhK7k0HIw (ai2pQNMr, yG8wIL3 / ai2pQNMr);
    return KEeDCI4X2;
}

int main () {
    int ai2pQNMr;
    int yG8wIL3;
    int YNcCLQKe;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (ai2pQNMr = 0, cin >> yG8wIL3; ai2pQNMr < yG8wIL3; ai2pQNMr++) {
        cin >> YNcCLQKe;
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
        cout << AhK7k0HIw (2, YNcCLQKe) << endl;
    }
    return 0;
}

