int main () {
    int fir_n = (890 - 890), sec_n = (133 - 133), thi_n = 0;
    int n, i;
    int fir = (917 - 917), sec = (133 - 133), thi = (389 - 389);
    struct   {
        int num;
        int ma;
        int cn;
        int score;
    }
    s;
    scanf ("%d", &n);
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &s.num, &s.ma, &s.cn);
            s.score = s.ma + s.cn;
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
            if (s.score > fir) {
                thi = sec;
                sec = fir;
                fir = s.score;
                thi_n = sec_n;
                sec_n = fir_n;
                fir_n = s.num;
            }
            else {
                if (s.score > sec) {
                    thi_n = sec_n;
                    thi = sec;
                    sec = s.score;
                    sec_n = s.num;
                }
                else if (s.score > thi) {
                    thi = s.score;
                    thi_n = s.num;
                };
            }
            i++;
        };
    }
    printf ("%d %d\n", fir_n, fir);
    printf ("%d %d\n", sec_n, sec);
    printf ("%d %d\n", thi_n, thi);
    return 0;
}

