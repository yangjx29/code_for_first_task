int main () {
    int iPkYVHX8hd = (138 - 138), bI1HvrNsU = (674 - 674), epD = (796 - 796), ypD = (984 - 984);
    int month2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month1 [12] = {(620 - 589), 28, (332 - 301), (172 - 142), (481 - 450), 30, (507 - 476), (326 - 295), 30, 31, 30, 31};
    int sY;
    int sM;
    int lYXrM9TKyiI;
    int eY;
    int eM;
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
    int uTYjDygJv3En;
    int QmuGkB;
    cin >> sY >> sM >> lYXrM9TKyiI >> eY >> eM >> uTYjDygJv3En;
    if (sY % (363 - 359) == 0 && sY % (674 - 574) != 0 || sY % 400 == 0) {
        for (QmuGkB = (781 - 780); QmuGkB < sM; QmuGkB++) {
            bI1HvrNsU = bI1HvrNsU + month2[QmuGkB -(384 - 383)];
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
        }
        bI1HvrNsU = bI1HvrNsU + lYXrM9TKyiI;
        bI1HvrNsU = (1263 - 897) - bI1HvrNsU;
    }
    else {
        for (QmuGkB = 1; QmuGkB < sM; QmuGkB++) {
            bI1HvrNsU += month1[QmuGkB -1];
        }
        bI1HvrNsU += lYXrM9TKyiI;
        bI1HvrNsU = (934 - 569) - bI1HvrNsU;
    }
    if (eY % (661 - 657) == 0 && eY % (943 - 843) != 0 || eY % 400 == 0) {
        for (QmuGkB = 1; eM > QmuGkB; QmuGkB++) {
            epD += month2[QmuGkB -1];
        }
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
        epD = epD + uTYjDygJv3En;
    }
    else {
        for (QmuGkB = 1; eM > QmuGkB; QmuGkB++) {
            epD += month1[QmuGkB -1];
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
        epD += uTYjDygJv3En;
    }
    if (sY == eY) {
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
        if (sY % (248 - 244) == 0 && sY % 100 != 0 || sY % 400 == 0) {
            iPkYVHX8hd = bI1HvrNsU + epD - 366;
        }
        else {
            iPkYVHX8hd = bI1HvrNsU + epD - 365;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    else {
        for (QmuGkB = sY + 1; QmuGkB < eY; QmuGkB++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (QmuGkB % 4 == 0 && QmuGkB % 100 != 0 || QmuGkB % 400 == 0) {
                ypD += 366;
            }
            else {
                ypD += 365;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
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
        iPkYVHX8hd = bI1HvrNsU + epD + ypD;
    }
    cout << iPkYVHX8hd << endl;
    return 0;
}

