int main () {
    int montha [13] = {0, (295 - 264), 28, 31, (810 - 780), 31, (67 - 37), 31, 31, (748 - 718), 31, 30, 31};
    int e;
    int year;
    int mon;
    int JDlVNMGx5gp;
    int i;
    int RhVJqFitIcnM;
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
    e = 0;
    int monthb [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d%d%d", &year, &mon, &JDlVNMGx5gp);
    for (i = 0; i < mon; i = i + 1) {
        if (year % 4 == 0) {
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
            if (year % 100 == 0 && year % 400 != 0) {
                e = e + montha[i];
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
                RhVJqFitIcnM = e + JDlVNMGx5gp;
            }
            else {
                e = e + monthb[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                RhVJqFitIcnM = e + JDlVNMGx5gp;
            };
        }
        if (year % 4 != 0) {
            e = e + montha[i];
            RhVJqFitIcnM = e + JDlVNMGx5gp;
        };
    }
    printf ("%d", RhVJqFitIcnM);
    return 0;
}

