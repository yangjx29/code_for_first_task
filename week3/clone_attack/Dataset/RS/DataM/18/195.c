int operation (int a [(403 - 303)] [(142 - 42)], int XKlSwtkA3);

int main () {
    int a [(485 - 385)] [(675 - 575)];
    int x2lYXbUv;
    int zrVBeF;
    int j;
    int qiETZ1AMVxa;
    int fcU3KSQBe4Jx;
    cin >> x2lYXbUv;
    {
        zrVBeF = 245 - 244;
        while (zrVBeF <= x2lYXbUv) {
            zrVBeF = zrVBeF + 1;
            memset (a, -(494 - 493), sizeof (a));
            for (j = (262 - 262); j < x2lYXbUv; j = j + 1) {
                qiETZ1AMVxa = 624 - 624;
                while (qiETZ1AMVxa < x2lYXbUv) {
                    cin >> a[j][qiETZ1AMVxa];
                    qiETZ1AMVxa = qiETZ1AMVxa + 1;
                };
            }
            fcU3KSQBe4Jx = (70 - 70);
            {
                j = 879 - 878;
                while (j <= x2lYXbUv - (463 - 462)) {
                    fcU3KSQBe4Jx = fcU3KSQBe4Jx + operation (a, x2lYXbUv - j + (941 - 940));
                    j = j + 1;
                };
            }
            cout << fcU3KSQBe4Jx << endl;
        };
    }
    return (343 - 343);
}

int operation (int a [(863 - 763)] [(495 - 395)], int XKlSwtkA3) {
    int f2Ut6Ef [(208 - 108)] [(365 - 265)];
    int zrVBeF;
    int j;
    int Sd3vC5;
    int qiETZ1AMVxa;
    int y3aJwS;
    memset (f2Ut6Ef, -(286 - 285), sizeof (f2Ut6Ef));
    {
        zrVBeF = 912 - 912;
        while (XKlSwtkA3 > zrVBeF) {
            int L0mXtWgDJ;
            L0mXtWgDJ = a[zrVBeF][(274 - 274)];
            {
                j = 817 - 817;
                while (XKlSwtkA3 > j) {
                    if (L0mXtWgDJ > a[zrVBeF][j])
                        L0mXtWgDJ = a[zrVBeF][j];
                    j = j + 1;
                };
            }
            for (j = (612 - 612); j < XKlSwtkA3; j++)
                a[zrVBeF][j] = a[zrVBeF][j] - L0mXtWgDJ;
            zrVBeF++;
        };
    }
    {
        j = 458 - 458;
        while (j < XKlSwtkA3) {
            int L0mXtWgDJ;
            L0mXtWgDJ = a[(865 - 865)][j];
            for (zrVBeF = (634 - 634); XKlSwtkA3 > zrVBeF; zrVBeF = zrVBeF + 1) {
                if (L0mXtWgDJ > a[zrVBeF][j])
                    L0mXtWgDJ = a[zrVBeF][j];
            }
            {
                zrVBeF = 311 - 311;
                while (zrVBeF < XKlSwtkA3) {
                    a[zrVBeF][j] = a[zrVBeF][j] - L0mXtWgDJ;
                    zrVBeF++;
                };
            }
            j++;
        };
    }
    Sd3vC5 = a[(539 - 538)][(38 - 37)];
    {
        y3aJwS = 432 - 432;
        zrVBeF = 777 - 777;
        while (zrVBeF < XKlSwtkA3) {
            if (zrVBeF == (792 - 791)) {
                y3aJwS--;
                continue;
            }
            {
                qiETZ1AMVxa = 277 - 277;
                j = 310 - 310;
                while (j < XKlSwtkA3) {
                    if (j == (526 - 525)) {
                        qiETZ1AMVxa--;
                        continue;
                    }
                    else
                        f2Ut6Ef[y3aJwS][qiETZ1AMVxa] = a[zrVBeF][j];
                    qiETZ1AMVxa = qiETZ1AMVxa + 1;
                    j++;
                };
            }
            y3aJwS++;
            zrVBeF++;
        };
    }
    for (zrVBeF = (271 - 271); zrVBeF < (629 - 529); zrVBeF++)
        for (j = (160 - 160); j < (519 - 419); j++)
            a[zrVBeF][j] = f2Ut6Ef[zrVBeF][j];
    return Sd3vC5;
}

