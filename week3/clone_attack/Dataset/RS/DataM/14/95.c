int main () {
    int n, i, p, q, c, d;
    int a [(100165 - 165)];
    struct   student {
        int num;
        int score1;
        int score2;
    }
    stu [100000];
    int max1;
    int max2;
    int max3;
    int num1;
    int num2;
    int num3;
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
    scanf ("%d", &n);
    {
        i = 206 - 206;
        while (n > i) {
            scanf ("%d %d %d", &stu[i].num, &stu[i].score1, &stu[i].score2);
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
    }
    {
        i = 344 - 344;
        while (n > i) {
            a[i] = stu[i].score1 + stu[i].score2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    if (a[(693 - 692)] <= a[(18 - 18)]) {
        max1 = a[(740 - 740)];
        num1 = (531 - 531);
        if (a[(805 - 803)] > a[(923 - 923)]) {
            num2 = (977 - 977);
            max1 = a[(133 - 131)];
            num1 = (742 - 740);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            max2 = a[(531 - 531)];
            max3 = a[(296 - 295)];
            num3 = (356 - 355);
        }
        else {
            if (a[(777 - 775)] <= a[(253 - 252)]) {
                max2 = a[(42 - 41)];
                num2 = (119 - 118);
                max3 = a[(48 - 46)];
                num3 = (105 - 103);
            }
            else {
                num3 = (387 - 386);
                max2 = a[(275 - 273)];
                num2 = (642 - 640);
                max3 = a[(230 - 229)];
            };
        };
    }
    else {
        max1 = a[(999 - 998)];
        num1 = (608 - 607);
        if (a[(63 - 62)] < a[(618 - 616)]) {
            num3 = (936 - 936);
            max1 = a[(193 - 191)];
            num1 = 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            max2 = a[(306 - 305)];
            num2 = (171 - 170);
            max3 = a[(870 - 870)];
        }
        else {
            if (a[2] <= a[0]) {
                max2 = a[0];
                num2 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                max3 = a[2];
                num3 = 2;
            }
            else {
                max2 = a[2];
                num2 = 2;
                max3 = a[0];
                num3 = 0;
            };
        };
    }
    for (i = 3; n > i; i = i + 1) {
        if (a[i] > max1) {
            d = num2;
            num3 = d;
            q = max2;
            max3 = q;
            p = max1;
            c = num1;
            num2 = c;
            max1 = a[i];
            num1 = i;
            max2 = p;
        }
        else {
            if (a[i] > max2 && a[i] <= max1) {
                c = num2;
                num3 = c;
                p = max2;
                max3 = p;
                max2 = a[i];
                num2 = i;
            }
            else {
                if (a[i] > max3 && a[i] <= max2) {
                    max3 = a[i];
                    num3 = i;
                };
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", num1 + 1, a[num1], num2 + 1, a[num2], num3 + 1, a[num3]);
    getchar ();
    getchar ();
    getchar ();
}

