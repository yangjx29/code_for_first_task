int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int tmawUi;
    int sum = 0;
    scanf ("%d %d %d", &a, &b, &c);
    a = a - 1;
    d = a / 400;
    e = a % 400;
    f = e / 100;
    h = e / 4;
    g = d * ((303 * (1179 - 814) + (289 - 192) * 366) % (198 - 191)) % 7 + (h - f) * 366 + (e - h + f) * 365;
    b = b - 1;
    {
        i = 0;
        while (i < 12) {
            switch (i) {
            case 0 :
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
                {
                    j = 31;
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
                    break;
                }
            case 4 :
            case 6 :
            case 9 :
            case 11 :
                {
                    j = 30;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
            default :
                a = a + 1;
                if (((!(0 != a % 4)) && (a % 100 != 0)) || (!(0 != a % 400))) {
                    j = 29;
                }
                else {
                    j = 28;
                };
            }
            sum += j;
            if (!(b != i)) {
                break;
            }
            i = i + 1;
        };
    }
    tmawUi = g + sum + c;
    if (!(0 != tmawUi % 7)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    else if (tmawUi % 7 == 1) {
    }
    else if (tmawUi % 7 == 2) {
    }
    else if (tmawUi % 7 == 3) {
    }
    else if (tmawUi % 7 == 4) {
    }
    else if (tmawUi % 7 == 5) {
    }
    else {
    }
    return 0;
}

