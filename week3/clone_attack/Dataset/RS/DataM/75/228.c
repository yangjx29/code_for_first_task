int main () {
    char timein [(100195 - 195)] = {(186 - 186)};
    char timeout [100000] = {(226 - 226)};
    gets (timein);
    gets (timeout);
    int time1 [(10028 - 28)] = {(527 - 527)}, time2 [(10265 - 265)] = {(486 - 486)}, p [(1323 - 322)] = {(700 - 700)}, num, epjQlyAg0 = (740 - 740), j = (506 - 506), IQeMdpE93W, max = (551 - 551), jhAyRH = (898 - 898);
    {
        epjQlyAg0 = 851 - 851;
        while (timein[epjQlyAg0] != (314 - 314)) {
            if (timein[epjQlyAg0] > '9' || '0' > timein[epjQlyAg0])
                continue;
            jhAyRH = jhAyRH * ((913 - 903));
            jhAyRH = jhAyRH + timein[epjQlyAg0] - '0';
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
            if (timein[epjQlyAg0 + (728 - 727)] > '9' || '0' > timein[epjQlyAg0 + (80 - 79)]) {
                time1[j] = jhAyRH;
                jhAyRH = (551 - 551);
                j++;
                continue;
            }
            epjQlyAg0++;
        };
    }
    jhAyRH = (336 - 336);
    cout << j << ' ';
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
    j = (749 - 749);
    for (epjQlyAg0 = (414 - 414); timeout[epjQlyAg0] != (952 - 952); epjQlyAg0 = epjQlyAg0 + 1) {
        if (timeout[epjQlyAg0] > '9' || timeout[epjQlyAg0] < '0') {
            continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        jhAyRH = jhAyRH * ((929 - 919));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        jhAyRH = jhAyRH + timeout[epjQlyAg0] - '0';
        if (timeout[epjQlyAg0 + (475 - 474)] > '9' || timeout[epjQlyAg0 + 1] < '0') {
            time2[j] = jhAyRH;
            jhAyRH = (480 - 480);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j++;
            continue;
        };
    }
    getchar ();
    getchar ();
    for (epjQlyAg0 = 0; epjQlyAg0 <= j; epjQlyAg0++)
        for (IQeMdpE93W = time1[epjQlyAg0]; IQeMdpE93W < time2[epjQlyAg0]; IQeMdpE93W++)
            p[IQeMdpE93W]++;
    for (j = 0; j < 1001; j++)
        if (max < p[j]) {
            max = p[j];
        }
    cout << max;
    return 0;
}

