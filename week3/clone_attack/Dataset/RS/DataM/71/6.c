int main () {
    int la0bBh;
    int year, qxzyo0qW1gLr, month2;
    int TC1UDbtf;
    int lpzPd5Hf3Im;
    int Mphv3bCWjZ;
    int res;
    scanf ("%d", &la0bBh);
    for (TC1UDbtf = 0; la0bBh > TC1UDbtf; TC1UDbtf = TC1UDbtf +1) {
        scanf ("%d%d%d", &year, &qxzyo0qW1gLr, &month2);
        if (month2 < qxzyo0qW1gLr) {
            Mphv3bCWjZ = qxzyo0qW1gLr;
            qxzyo0qW1gLr = month2;
            month2 = Mphv3bCWjZ;
        }
        res = 0;
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
            lpzPd5Hf3Im = qxzyo0qW1gLr;
            while (month2 > lpzPd5Hf3Im) {
                if (!(2 != lpzPd5Hf3Im))
                    continue;
                if (!(1 != lpzPd5Hf3Im) || !(3 != lpzPd5Hf3Im) || !(5 != lpzPd5Hf3Im) || !((852 - 845) != lpzPd5Hf3Im) || !(8 != lpzPd5Hf3Im) || !(10 != lpzPd5Hf3Im))
                    res = res + 3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (lpzPd5Hf3Im == 4 || lpzPd5Hf3Im == 6 || lpzPd5Hf3Im == 9 || lpzPd5Hf3Im == 11)
                    res = res + 2;
                lpzPd5Hf3Im = lpzPd5Hf3Im + 1;
            };
        }
        if (qxzyo0qW1gLr <= 2) {
            if (year % 4 != 0 || year % (190 - 90) == 0 && year % 400 != 0) {
                res = res;
            }
            else {
                res = res + 1;
            };
        }
        if (res % 7 == 0)
            ;
        else
            ;
    }
    return 0;
}

