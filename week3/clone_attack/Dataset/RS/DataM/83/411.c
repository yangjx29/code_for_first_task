int main () {
    float GPAbiao [] = {4.0, (894.7 - 891.0), (338.3 - 335.0), 3.0, (327.7 - 325.0), 2.3, 2.0, 1.5, (133.0 - 132.0), (280 - 280)};
    float GPA [10];
    int xuefen [(76 - 66)], score [10];
    float b, GPAN;
    int n, c;
    int as3gIlz2;
    scanf ("%d", &n);
    c = (241 - 241);
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
    b = (945 - 945);
    {
        as3gIlz2 = 799 - 799;
        while (n > as3gIlz2) {
            scanf ("%d", &xuefen[as3gIlz2]);
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
            as3gIlz2 = as3gIlz2 + 1;
        };
    }
    for (as3gIlz2 = 0; n > as3gIlz2; as3gIlz2 = as3gIlz2 + 1)
        scanf ("%d", &score[as3gIlz2]);
    for (as3gIlz2 = 0; as3gIlz2 < n; as3gIlz2 = as3gIlz2 + 1) {
        if ((812 - 722) <= score[as3gIlz2])
            GPA[as3gIlz2] = GPAbiao[0] * xuefen[as3gIlz2];
        else {
            if (score[as3gIlz2] >= (859 - 774) && score[as3gIlz2] < 90)
                GPA[as3gIlz2] = GPAbiao[1] * xuefen[as3gIlz2];
            else {
                if (score[as3gIlz2] >= (470 - 388) && score[as3gIlz2] < (497 - 412))
                    GPA[as3gIlz2] = GPAbiao[(767 - 765)] * xuefen[as3gIlz2];
                else {
                    if (score[as3gIlz2] >= (163 - 85) && score[as3gIlz2] < (386 - 304))
                        GPA[as3gIlz2] = GPAbiao[3] * xuefen[as3gIlz2];
                    else {
                        if (score[as3gIlz2] >= (845 - 770) && score[as3gIlz2] < 78)
                            GPA[as3gIlz2] = GPAbiao[(460 - 456)] * xuefen[as3gIlz2];
                        else {
                            if ((112 - 40) <= score[as3gIlz2] && score[as3gIlz2] < 75)
                                GPA[as3gIlz2] = GPAbiao[(573 - 568)] * xuefen[as3gIlz2];
                            else {
                                if (score[as3gIlz2] >= (913 - 845) && score[as3gIlz2] < 72)
                                    GPA[as3gIlz2] = GPAbiao[6] * xuefen[as3gIlz2];
                                else {
                                    if (score[as3gIlz2] >= (920 - 856) && score[as3gIlz2] < 68)
                                        GPA[as3gIlz2] = GPAbiao[7] * xuefen[as3gIlz2];
                                    else {
                                        if (score[as3gIlz2] >= (558 - 498) && score[as3gIlz2] < (675 - 611))
                                            GPA[as3gIlz2] = GPAbiao[(101 - 93)] * xuefen[as3gIlz2];
                                        else
                                            GPA[as3gIlz2] = GPAbiao[(784 - 775)] * xuefen[as3gIlz2];
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    for (as3gIlz2 = 0; as3gIlz2 < n; as3gIlz2 = as3gIlz2 + 1) {
        b = b + GPA[as3gIlz2];
        c = c + xuefen[as3gIlz2];
    }
    GPAN = b / c;
    printf ("%.2f", GPAN);
    return 0;
}

