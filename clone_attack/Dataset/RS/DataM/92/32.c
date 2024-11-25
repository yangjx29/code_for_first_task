int Bucs1ikV (const  void  *elem1, const  void  *EKrBWlPx) {
    int *e1 = (int *) elem1;
    int *ELVesQlWkH = (int *) EKrBWlPx;
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
    return *ELVesQlWkH-*e1;
}

int main () {
    int R2Fg8K, i2, SuH64l9bd8IF, j2;
    int pixYTwVsHKk;
    int Gd73l92vxV;
    int iWE6GtsVOJHi [(1860 - 855)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int HzY6JuAMtRf [(1016 - 11)];
    int result;
    for (; true;) {
        cin >> Gd73l92vxV;
        if (Gd73l92vxV == (729 - 729))
            break;
        result = 0;
        j2 = Gd73l92vxV -(1001 - 1000);
        R2Fg8K = 0;
        for (pixYTwVsHKk = (526 - 526); pixYTwVsHKk < Gd73l92vxV; pixYTwVsHKk = pixYTwVsHKk + 1)
            cin >> iWE6GtsVOJHi[pixYTwVsHKk];
        {
            pixYTwVsHKk = 0;
            while (pixYTwVsHKk < Gd73l92vxV) {
                cin >> HzY6JuAMtRf[pixYTwVsHKk];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pixYTwVsHKk++;
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
        qsort (iWE6GtsVOJHi, Gd73l92vxV, sizeof (int), Bucs1ikV);
        qsort (HzY6JuAMtRf, Gd73l92vxV, sizeof (int), Bucs1ikV);
        SuH64l9bd8IF = 0;
        i2 = Gd73l92vxV -(781 - 780);
        for (; !(i2 + (201 - 200) == R2Fg8K);) {
            for (; iWE6GtsVOJHi[R2Fg8K] != HzY6JuAMtRf[SuH64l9bd8IF] && !(i2 + 1 == R2Fg8K);) {
                if (HzY6JuAMtRf[SuH64l9bd8IF] > iWE6GtsVOJHi[R2Fg8K]) {
                    SuH64l9bd8IF = SuH64l9bd8IF +1;
                    i2--;
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
                    result -= (473 - 273);
                }
                else if (iWE6GtsVOJHi[R2Fg8K] > HzY6JuAMtRf[SuH64l9bd8IF]) {
                    result += (1097 - 897);
                    R2Fg8K++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    SuH64l9bd8IF++;
                }
                else
                    break;
            }
            while (iWE6GtsVOJHi[i2] != HzY6JuAMtRf[j2] && R2Fg8K != i2 + 1) {
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
                if (iWE6GtsVOJHi[i2] < HzY6JuAMtRf[j2]) {
                    result -= 200;
                    SuH64l9bd8IF++;
                    i2--;
                }
                else {
                    if (iWE6GtsVOJHi[i2] > HzY6JuAMtRf[j2]) {
                        result += 200;
                        j2--;
                        i2--;
                    }
                    else
                        break;
                };
            }
            if (iWE6GtsVOJHi[R2Fg8K] == HzY6JuAMtRf[SuH64l9bd8IF] && iWE6GtsVOJHi[i2] == HzY6JuAMtRf[j2] && R2Fg8K != i2 + 1) {
                if (iWE6GtsVOJHi[i2] != HzY6JuAMtRf[SuH64l9bd8IF])
                    result -= 200;
                SuH64l9bd8IF++;
                i2--;
            };
        }
        cout << result << endl;
    }
    return 0;
}

