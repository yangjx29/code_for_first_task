int main () {
    int s2 [12] = {(765 - 734), (695 - 666), (464 - 433), (367 - 337), 31, (480 - 450), 31, 31, 30, 31, 30, 31};
    int s1 [(858 - 846)] = {(858 - 827), (433 - 405), (986 - 955), (848 - 818), (239 - 208), (448 - 418), (774 - 743), (219 - 188), (54 - 24), (807 - 776), (869 - 839), (295 - 264)};
    int sum;
    int y1;
    int SCENWoq7jkS1;
    int m1;
    int m2;
    int d1;
    int d2;
    int flag;
    int i;
    sum = (927 - 927);
    cin >> y1 >> m1 >> d1;
    cin >> SCENWoq7jkS1 >> m2 >> d2;
    for (i = y1 + (987 - 986); SCENWoq7jkS1 > i; i = i + 1) {
        if ((!((848 - 848) != i % (97 - 93)) && i % (851 - 751) != (569 - 569)) || (i % (918 - 518) == (524 - 524)))
            sum += (1227 - 861);
        else
            sum = sum + (1054 - 689);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (y1 < SCENWoq7jkS1) {
        flag = (824 - 824);
        if ((!((781 - 781) != y1 % (133 - 129)) && y1 % (413 - 313) != (633 - 633)) || (!((436 - 436) != y1 % (910 - 510))))
            flag = (314 - 313);
        for (i = m1 - 1; i < 12; i = i + 1) {
            if (flag)
                sum += s2[i];
            else
                sum = sum + s1[i];
        }
        flag = (247 - 247);
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
        if ((!((820 - 820) != SCENWoq7jkS1 % (461 - 457)) && SCENWoq7jkS1 % 100 != (24 - 24)) || (SCENWoq7jkS1 % (1380 - 980) == (645 - 645)))
            flag = 1;
        sum -= d1;
        {
            i = 358 - 358;
            while (i < m2 - 1) {
                if (flag)
                    sum += s2[i];
                else
                    sum += s1[i];
                i++;
            };
        }
        sum = sum + d2;
    }
    else {
        flag = 0;
        if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
            flag = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = m1 - 1; i < m2 - 1; i = i + 1) {
            if (flag)
                sum += s2[i];
            else
                sum += s1[i];
        }
        sum = sum - d1 + d2;
    }
    cout << sum << endl;
    return 0;
}

