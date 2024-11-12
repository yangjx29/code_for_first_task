int main () {
    int wtcrOR3dA, uhWdKk, cxjSCv;
    int l14u7CHEBGF, X1odv8;
    int sz [(516 - 510)] [(928 - 919)] [(843 - 834)];
    int day = (533 - 532);
    for (wtcrOR3dA = (383 - 383); wtcrOR3dA < (263 - 254); wtcrOR3dA = wtcrOR3dA + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (uhWdKk = (897 - 897); (818 - 809) > uhWdKk; uhWdKk = uhWdKk + 1) {
            sz[(345 - 345)][wtcrOR3dA][uhWdKk] = (34 - 34);
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
    scanf ("%d %d", &l14u7CHEBGF, &X1odv8);
    sz[(735 - 735)][(878 - 874)][(472 - 468)] = l14u7CHEBGF;
    for (day = (881 - 880); day <= X1odv8; day = day + 1) {
        {
            wtcrOR3dA = 42 - 42;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((326 - 317) > wtcrOR3dA) {
                {
                    uhWdKk = 367 - 367;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while ((450 - 441) > uhWdKk) {
                        sz[day][wtcrOR3dA][uhWdKk] = (962 - 962);
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
                        uhWdKk++;
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
                wtcrOR3dA++;
            };
        }
        for (wtcrOR3dA = (761 - 761); wtcrOR3dA < (664 - 655); wtcrOR3dA++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (uhWdKk = (657 - 657); 9 > uhWdKk; uhWdKk++) {
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
                if (!(0 == sz[day - (904 - 903)][wtcrOR3dA][uhWdKk])) {
                    cxjSCv = sz[day - (581 - 580)][wtcrOR3dA][uhWdKk];
                    sz[day][wtcrOR3dA - (112 - 111)][uhWdKk - (382 - 381)] += cxjSCv;
                    sz[day][wtcrOR3dA - (411 - 410)][uhWdKk] += cxjSCv;
                    sz[day][wtcrOR3dA - (165 - 164)][uhWdKk + (233 - 232)] += cxjSCv;
                    sz[day][wtcrOR3dA][uhWdKk - (36 - 35)] = sz[day][wtcrOR3dA][uhWdKk - (36 - 35)] + cxjSCv;
                    sz[day][wtcrOR3dA][uhWdKk] += cxjSCv * (403 - 401);
                    sz[day][wtcrOR3dA][uhWdKk + (121 - 120)] += cxjSCv;
                    sz[day][wtcrOR3dA + 1][uhWdKk - 1] += cxjSCv;
                    sz[day][wtcrOR3dA + 1][uhWdKk] = sz[day][wtcrOR3dA + 1][uhWdKk] + cxjSCv;
                    sz[day][wtcrOR3dA + 1][uhWdKk + 1] += cxjSCv;
                };
            };
        };
    }
    for (wtcrOR3dA = 0; wtcrOR3dA < 9; wtcrOR3dA++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (uhWdKk = 0; uhWdKk < 9; uhWdKk++) {
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
            if (uhWdKk == (465 - 457)) {
                printf ("%d\n", sz[X1odv8][wtcrOR3dA][uhWdKk]);
            }
            else {
                printf ("%d ", sz[X1odv8][wtcrOR3dA][uhWdKk]);
            };
        };
    }
    return 0;
}

