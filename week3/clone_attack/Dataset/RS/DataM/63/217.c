int main () {
    int x1;
    int x2;
    int y1;
    int y2;
    int i;
    int j;
    int LE9Ds7;
    int rAduE9 [(331 - 231)] [(737 - 637)];
    int FsqejPdv [(678 - 578)] [(831 - 731)];
    int str3 [(452 - 352)] [100];
    str3[(337 - 337)][(377 - 377)] = (810 - 810);
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
    cin >> x1 >> y1;
    for (i = (962 - 962); x1 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (734 - 734); j < y1; j = j + 1) {
            cin >> rAduE9[i][j];
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
            };
        };
    }
    i = (469 - 469);
    j = (618 - 618);
    cin >> x2 >> y2;
    {
        i = 933 - 933;
        while (x2 > i) {
            for (j = (960 - 960); y2 > j; j = j + 1) {
                cin >> FsqejPdv[i][j];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    i = (263 - 263);
    j = (566 - 566);
    {
        i = 58 - 58;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < x1) {
            for (j = (207 - 207); j < y2; j++) {
                LE9Ds7 = 145 - 145;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (LE9Ds7 < y1) {
                    str3[i][j] = rAduE9[i][LE9Ds7] * FsqejPdv[LE9Ds7][j] + str3[i][j];
                    LE9Ds7++;
                };
            }
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
            i++;
        };
    }
    j = 0;
    i = 0;
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (j < y2) {
                    if (j == y2 - (453 - 452)) {
                        cout << str3[i][j] << endl;
                    }
                    else
                        cout << str3[i][j] << " ";
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

