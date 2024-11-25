int qBU2DO (int);

int main () {
    int sum;
    int aym1v4;
    int r0lt1UAC;
    int kXGHdV;
    int month2;
    int UOtrHwPbTcqx;
    int Qvyx1wIjnoqm;
    int i;
    int NZ7WOEdo9UIj;
    sum = (444 - 444);
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
    int OYTh8xoi2jS [13] = {(46 - 46), (267 - 236), 28, (72 - 41), (581 - 551), (680 - 649), (202 - 172), (220 - 189), 31, (484 - 454), 31, 30, 31};
    int Q2ljx0 [13] = {(189 - 189), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> aym1v4 >> kXGHdV >> UOtrHwPbTcqx >> r0lt1UAC >> month2 >> Qvyx1wIjnoqm;
    {
        i = aym1v4;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (r0lt1UAC > i) {
            if (qBU2DO (i))
                sum += 366;
            else
                sum += (1006 - 641);
            i++;
        };
    }
    if (qBU2DO (r0lt1UAC))
        for (NZ7WOEdo9UIj = (966 - 965); month2 > NZ7WOEdo9UIj; NZ7WOEdo9UIj++)
            sum = sum + Q2ljx0[NZ7WOEdo9UIj];
    else {
        NZ7WOEdo9UIj = 132 - 131;
        while (NZ7WOEdo9UIj < month2) {
            sum += OYTh8xoi2jS[NZ7WOEdo9UIj];
            NZ7WOEdo9UIj++;
        };
    }
    sum += Qvyx1wIjnoqm;
    if (qBU2DO (aym1v4)) {
        {
            NZ7WOEdo9UIj = 18 - 17;
            while (NZ7WOEdo9UIj < kXGHdV) {
                sum -= Q2ljx0[NZ7WOEdo9UIj];
                NZ7WOEdo9UIj++;
            };
        }
        sum = sum - UOtrHwPbTcqx;
    }
    else {
        for (NZ7WOEdo9UIj = 1; NZ7WOEdo9UIj < kXGHdV; NZ7WOEdo9UIj++)
            sum = sum - OYTh8xoi2jS[NZ7WOEdo9UIj];
        sum -= UOtrHwPbTcqx;
    }
    cout << sum;
    return (588 - 588);
}

int qBU2DO (int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

