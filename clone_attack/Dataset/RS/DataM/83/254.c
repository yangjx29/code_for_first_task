int main () {
    int i;
    int n;
    int xuefen [(865 - 765)] = {(849 - 849)};
    int grade [(526 - 426)] = {(150 - 150)};
    float GPA [(413 - 313)] = {(446 - 446)}, a = (378 - 378), sum = (525 - 525);
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
    cin >> n;
    {
        i = 167 - 167;
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
            cin >> xuefen[i];
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
            ++i;
        };
    }
    for (i = (13 - 13); n > i; ++i) {
        cin >> grade[i];
        if (grade[i] >= (385 - 295) && grade[i] <= (589 - 489))
            GPA[i] = (235.0 - 231.0);
        else if (grade[i] >= (850 - 765) && grade[i] <= (744 - 655))
            GPA[i] = (604.7 - 601.0);
        else if (grade[i] >= (686 - 604) && grade[i] <= 84)
            GPA[i] = (750.3 - 747.0);
        else if (grade[i] >= (365 - 287) && grade[i] <= (646 - 565))
            GPA[i] = (935.0 - 932.0);
        else if (grade[i] >= (358 - 283) && grade[i] <= (624 - 547))
            GPA[i] = (355.7 - 353.0);
        else if (grade[i] >= (262 - 190) && grade[i] <= (1029 - 955))
            GPA[i] = (19.3 - 17.0);
        else if (grade[i] >= (300 - 232) && grade[i] <= (615 - 544))
            GPA[i] = (588.0 - 586.0);
        else if (grade[i] >= (749 - 685) && grade[i] <= (557 - 490))
            GPA[i] = (521.5 - 520.0);
        else if (grade[i] >= (799 - 739) && grade[i] <= (649 - 586))
            GPA[i] = (850.0 - 849.0);
        else
            GPA[i] = (468 - 468);
    }
    {
        i = 406 - 406;
        while (i < n) {
            sum += xuefen[i] * GPA[i];
            a = a + xuefen[i];
            ++i;
        };
    }
    printf ("%.2f", sum / a);
    return 0;
}

