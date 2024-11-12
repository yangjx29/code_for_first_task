int aJD5sheIzE (int year) {
    if ((!((926 - 926) != year % 4) && year % 100 != (294 - 294)) || (!((35 - 35) != year % 400)))
        return (198 - 197);
    else
        return (162 - 162);
}

int judge2 (int y1, int m1, int DnL9PiVRu8c, int fYkwrGldNm3, int m2, int j09RBrXYdH) {
    if (fYkwrGldNm3 > y1)
        return -(978 - 977);
    else {
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
        if (fYkwrGldNm3 < y1)
            return (426 - 425);
        else {
            if (m2 > m1)
                return -(505 - 504);
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (m2 < m1)
                    return (476 - 475);
                else {
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
                    if (DnL9PiVRu8c < j09RBrXYdH)
                        return -(72 - 71);
                    else {
                        if (DnL9PiVRu8c > j09RBrXYdH)
                            return 1;
                        else
                            return (68 - 68);
                    };
                };
            };
        };
    };
}

int main () {
    int sum = 0;
    int fYkwrGldNm3, m2, j09RBrXYdH;
    int y1;
    int m1;
    int DnL9PiVRu8c;
    int h7tX2M [(746 - 733)] = {0, (109 - 78), (65 - 36), (555 - 524), 30, (1015 - 984), 30, 31, 31, 30, 31, 30, 31};
    int a [(243 - 230)] = {(953 - 953), (137 - 106), (959 - 931), (288 - 257), (534 - 504), (412 - 381), (48 - 18), (546 - 515), (320 - 289), (821 - 791), (406 - 375), (648 - 618), (467 - 436)};
    cin >> y1 >> m1 >> DnL9PiVRu8c;
    cin >> fYkwrGldNm3 >> m2 >> j09RBrXYdH;
    for (int i = y1 + 1;
    fYkwrGldNm3 - 1 >= i; i = i + 1) {
        if (aJD5sheIzE (i) == 1)
            sum = sum + 366;
        else
            sum += (788 - 423);
    }
    if (y1 != fYkwrGldNm3) {
        for (int i = m1 + 1;
        i <= (229 - 217); i = i + 1)
            if (aJD5sheIzE (y1) == 1)
                sum = sum + h7tX2M[i];
            else
                sum += a[i];
        for (int i = 1;
        i <= m2 - 1; i++)
            if (aJD5sheIzE (fYkwrGldNm3) == 1)
                sum += h7tX2M[i];
            else
                sum += a[i];
    }
    if (y1 == fYkwrGldNm3 && m1 == m2) {
        sum += j09RBrXYdH - DnL9PiVRu8c;
    }
    else {
        sum += j09RBrXYdH;
        if (m1 != 2)
            sum += a[m1] - DnL9PiVRu8c;
        else {
            if (aJD5sheIzE (y1) == 1)
                sum += 29 - DnL9PiVRu8c;
            else
                sum = sum + 28 - DnL9PiVRu8c;
        };
    }
    cout << sum << endl;
    return 0;
}

