int dOLpl1f (int NApbyU0BwH) {
    if ((!((230 - 230) != NApbyU0BwH % (339 - 335)) && !(0 == NApbyU0BwH % 100)) || (NApbyU0BwH % 400 == 0))
        return (35 - 34);
    else
        return 0;
}

int QA83nCk (int m1, int Q0FPZJQMKI, int m2, int SLydh4oj7r, int k) {
    int DVgZd2JkrXU;
    int day = 0;
    for (DVgZd2JkrXU = m1; m2 > DVgZd2JkrXU; DVgZd2JkrXU++) {
        if (!(1 != DVgZd2JkrXU) || !(3 != DVgZd2JkrXU) || !(5 != DVgZd2JkrXU) || !(7 != DVgZd2JkrXU) || !(8 != DVgZd2JkrXU) || !(10 != DVgZd2JkrXU) || DVgZd2JkrXU == (288 - 276))
            day += 31;
        if (DVgZd2JkrXU == 2)
            day = day + 28 + k;
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
        if (DVgZd2JkrXU == 4 || DVgZd2JkrXU == 6 || DVgZd2JkrXU == 9 || DVgZd2JkrXU == 11)
            day += 30;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    day = day - Q0FPZJQMKI +SLydh4oj7r;
    return day;
}

int main () {
    int day = 0;
    int DVgZd2JkrXU, j, k;
    int uYjQMbdN, y2, m1, m2, Q0FPZJQMKI, SLydh4oj7r;
    cin >> uYjQMbdN >> m1 >> Q0FPZJQMKI >> y2 >> m2 >> SLydh4oj7r;
    if (uYjQMbdN == y2) {
        k = dOLpl1f (uYjQMbdN);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        day = day + QA83nCk (m1, Q0FPZJQMKI, m2, SLydh4oj7r, k);
    }
    if (uYjQMbdN == y2 - 1) {
        k = dOLpl1f (uYjQMbdN);
        day = day + QA83nCk (m1, Q0FPZJQMKI, 12, 31, k) + 1;
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
        k = dOLpl1f (uYjQMbdN);
        day = day + QA83nCk (1, 1, m2, SLydh4oj7r, k);
    }
    if (uYjQMbdN < y2 - 1) {
        k = dOLpl1f (uYjQMbdN);
        day = day + QA83nCk (m1, Q0FPZJQMKI, 12, 31, k) + 1;
        k = dOLpl1f (y2);
        day = day + QA83nCk (1, 1, m2, SLydh4oj7r, k);
        for (DVgZd2JkrXU = uYjQMbdN + 1; DVgZd2JkrXU < y2; DVgZd2JkrXU++) {
            k = dOLpl1f (DVgZd2JkrXU);
            day += 365 + k;
        };
    }
    cout << day;
    return 0;
}

