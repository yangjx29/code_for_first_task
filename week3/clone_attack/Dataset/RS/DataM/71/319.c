int hJgVWC9nX7 (int year) {
    if (year % (852 - 452) == (80 - 80))
        return (532 - 531);
    if (year % 100 == (561 - 561))
        return 0;
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
    if (!(0 != year % 4))
        return (564 - 563);
    else
        return 0;
}

int main () {
    int year;
    int month1;
    int StzlHB;
    int yWagjtn;
    int SPnbDeTX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int Yl6bVYdTSgp [15] = {0, (824 - 793), 28, (551 - 520), (268 - 238), 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> SPnbDeTX;
    for (; SPnbDeTX >= 1; SPnbDeTX--) {
        yWagjtn = 0;
        cin >> year >> month1 >> StzlHB;
        Yl6bVYdTSgp[(523 - 521)] = Yl6bVYdTSgp[2] + hJgVWC9nX7 (year);
        if (month1 - StzlHB > 0) {
            for (; StzlHB < month1; StzlHB = StzlHB +1) {
                yWagjtn = yWagjtn + Yl6bVYdTSgp[StzlHB];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
        if (month1 - StzlHB < 0) {
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
            for (; month1 < StzlHB; month1 = month1 + 1) {
                yWagjtn = yWagjtn + Yl6bVYdTSgp[month1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        if (yWagjtn % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        Yl6bVYdTSgp[2] = 28;
    }
    return 0;
}

