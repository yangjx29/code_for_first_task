struct   date {
    int xPbGHx;
    int rWvnyf;
    int month;
    int ZHEWoPCR;
};
int runnian (int rWvnyf) {
    if ((!((763 - 763) != rWvnyf % (301 - 297)) && !((326 - 326) == rWvnyf % (720 - 620))) || !((17 - 17) != rWvnyf % 400))
        return (84 - 83);
    else
        return (104 - 104);
}

long  int day_from_cen_begin (struct   date ErIY9kRE) {
    long  int ZHEWoPCR = (505 - 505);
    int lsfdS5KjvLi;
    {
        lsfdS5KjvLi = 100 * ErIY9kRE.xPbGHx;
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
        while (ErIY9kRE.rWvnyf > lsfdS5KjvLi) {
            if (runnian (lsfdS5KjvLi))
                ZHEWoPCR = ZHEWoPCR +366;
            else
                ZHEWoPCR = ZHEWoPCR +(1084 - 719);
            ZHEWoPCR = ZHEWoPCR % (364 - 357);
            lsfdS5KjvLi = lsfdS5KjvLi + 1;
        };
    }
    ZHEWoPCR = ZHEWoPCR % 7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int uos85TA;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        uos85TA = (996 - 995);
        while (ErIY9kRE.month > uos85TA) {
            if (!(1 != uos85TA) || !((961 - 958) != uos85TA) || !((299 - 294) != uos85TA) || !(7 != uos85TA) || !(8 != uos85TA) || !(10 != uos85TA) || !(12 != uos85TA)) {
                ZHEWoPCR = ZHEWoPCR +31;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (uos85TA == (959 - 955) || uos85TA == (272 - 266) || uos85TA == 9 || uos85TA == (627 - 616)) {
                ZHEWoPCR = ZHEWoPCR +30;
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
            if (uos85TA == (769 - 767)) {
                if (runnian (ErIY9kRE.rWvnyf))
                    ZHEWoPCR = ZHEWoPCR +29;
                else
                    ZHEWoPCR = ZHEWoPCR +28;
            }
            uos85TA = uos85TA + 1;
        };
    }
    ZHEWoPCR = ZHEWoPCR +ErIY9kRE.ZHEWoPCR - 1;
    ZHEWoPCR = ZHEWoPCR % 7;
    return ZHEWoPCR;
}

void  putout (int w7YHipnKlq) {
    char EFT6U9nQbHV [7] [(567 - 562)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    cout << EFT6U9nQbHV[w7YHipnKlq % 7] << endl;
}

int main () {
    struct   date ErIY9kRE;
    int cen, w7YHipnKlq, lsfdS5KjvLi;
    putout (w7YHipnKlq);
    {
        lsfdS5KjvLi = 0;
        while (lsfdS5KjvLi < 100) {
            lsfdS5KjvLi++;
        };
    }
    cin >> ErIY9kRE.rWvnyf >> ErIY9kRE.month >> ErIY9kRE.ZHEWoPCR;
    ErIY9kRE.xPbGHx = ErIY9kRE.rWvnyf / 100;
    if (ErIY9kRE.xPbGHx % (1002 - 998) == 0)
        cen = 0;
    if (ErIY9kRE.xPbGHx % (126 - 122) == 1)
        cen = 6;
    if (ErIY9kRE.xPbGHx % (100 - 96) == (57 - 55))
        cen = 4;
    if (ErIY9kRE.xPbGHx % 4 == (624 - 621))
        cen = 2;
    w7YHipnKlq = day_from_cen_begin (ErIY9kRE) + cen;
    w7YHipnKlq = w7YHipnKlq + 5;
}

