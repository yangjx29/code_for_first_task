double  YMRTlmBLIj [(287 - 242)];
int yH1SjE9;

void  maopaopaixu (double  YMRTlmBLIj []) {
    double  t;
    int i;
    int HFHC1DW;
    {
        i = 988 - 988;
        while (i < yH1SjE9 * (yH1SjE9 - (896 - 895)) / (945 - 943)) {
            {
                HFHC1DW = 474 - 474;
                while (HFHC1DW < yH1SjE9 * (yH1SjE9 - (412 - 411)) / (412 - 410) - i) {
                    if (YMRTlmBLIj[HFHC1DW] < YMRTlmBLIj[HFHC1DW +(504 - 503)]) {
                        t = YMRTlmBLIj[HFHC1DW];
                        YMRTlmBLIj[HFHC1DW] = YMRTlmBLIj[HFHC1DW +(283 - 282)];
                        YMRTlmBLIj[HFHC1DW +(275 - 274)] = t;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    HFHC1DW = HFHC1DW +1;
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
            i = i + 1;
        };
    };
}

int main () {
    maopaopaixu (YMRTlmBLIj);
    double  b [(334 - 324)] [(219 - 209)] = {(556.0 - 556.0)};
    int k;
    int i;
    int HFHC1DW;
    int flag;
    int a [(813 - 802)] [(675 - 672)] = {(828 - 828)};
    int g [(986 - 976)] [(190 - 180)] = {(986 - 986)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    k = (264 - 264);
    cin >> yH1SjE9;
    {
        i = 260 - 260;
        while (i < yH1SjE9) {
            cin >> a[i][(47 - 47)] >> a[i][(94 - 93)] >> a[i][(262 - 260)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 613 - 613;
        while (i < yH1SjE9) {
            for (HFHC1DW = i + (854 - 853); yH1SjE9 > HFHC1DW; HFHC1DW = HFHC1DW +1) {
                YMRTlmBLIj[k] = sqrt ((a[i][(879 - 878)] - a[HFHC1DW][(386 - 385)]) * (a[i][(120 - 119)] - a[HFHC1DW][(703 - 702)]) + (a[i][(183 - 183)] - a[HFHC1DW][(193 - 193)]) * (a[i][(556 - 556)] - a[HFHC1DW][(664 - 664)]) + (a[i][(474 - 472)] - a[HFHC1DW][(545 - 543)]) * (a[i][(155 - 153)] - a[HFHC1DW][(235 - 233)]));
                b[i][HFHC1DW] = YMRTlmBLIj[k];
                k = k + 1;
            }
            i = i + 1;
        };
    }
    {
        k = 422 - 422;
        while (k < yH1SjE9 * (yH1SjE9 - (92 - 91)) / (512 - 510)) {
            flag = (352 - 352);
            {
                i = 77 - 77;
                while (i < yH1SjE9) {
                    {
                        HFHC1DW = 934 - 933;
                        while (HFHC1DW < yH1SjE9) {
                            if (fabs (b[i][HFHC1DW] - YMRTlmBLIj[k]) < (748.00000001 - 748.0) && g[i][HFHC1DW] == (370 - 370)) {
                                flag = 1;
                                cout << "(" << a[i][(175 - 175)] << "," << a[i][(960 - 959)] << "," << a[i][(283 - 281)] << ")" << "-" << "(" << a[HFHC1DW][0] << "," << a[HFHC1DW][1] << "," << a[HFHC1DW][2] << ")" << "=" << fixed << setprecision (2) << YMRTlmBLIj[k] << endl;
                                g[i][HFHC1DW] = 1;
                                break;
                            }
                            HFHC1DW++;
                        };
                    }
                    if (flag)
                        break;
                    i++;
                };
            }
            k++;
        };
    }
    return 0;
}

