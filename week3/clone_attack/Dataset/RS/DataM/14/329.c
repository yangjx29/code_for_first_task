struct   student {
    int id;
    int chinese;
    int math;
}
student [100000];

void  main () {
    int thi;
    thi = 0;
    int k1G9RVxf;
    k1G9RVxf = 0;
    int h1;
    int dBb8yf0JS;
    int h3;
    int pi30wqxr;
    int pLJ0giMX5d;
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
    int j;
    int sum [100000] = {(102 - 102)};
    h1 = 0;
    dBb8yf0JS = 0;
    h3 = 0;
    int sec = 0;
    scanf ("%d", &pi30wqxr);
    {
        pLJ0giMX5d = 0;
        while (pi30wqxr > pLJ0giMX5d) {
            scanf ("%d%d%d", &student[pLJ0giMX5d].id, &student[pLJ0giMX5d].chinese, &student[pLJ0giMX5d].math);
            pLJ0giMX5d = pLJ0giMX5d + 1;
        };
    }
    for (j = 0; j < pi30wqxr; j = j + 1) {
        if (k1G9RVxf < student[j].chinese + student[j].math) {
            thi = sec;
            h3 = dBb8yf0JS;
            dBb8yf0JS = h1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sec = k1G9RVxf;
            k1G9RVxf = student[j].chinese + student[j].math;
            h1 = student[j].id;
        }
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
            if ((student[j].chinese + student[j].math < k1G9RVxf) && (student[j].chinese + student[j].math > sec)) {
                h3 = dBb8yf0JS;
                thi = sec;
                sec = student[j].chinese + student[j].math;
                dBb8yf0JS = student[j].id;
            }
            else if ((student[j].chinese + student[j].math < sec) && (student[j].chinese + student[j].math > thi)) {
                thi = student[j].chinese + student[j].math;
                h3 = student[j].id;
            }
            else if ((!(student[j].chinese + student[j].math != k1G9RVxf)) && (sec < student[j].chinese + student[j].math)) {
                h3 = dBb8yf0JS;
                thi = sec;
                sec = student[j].chinese + student[j].math;
                dBb8yf0JS = student[j].id;
            }
            else if ((sec == student[j].chinese + student[j].math) && (thi < student[j].chinese + student[j].math)) {
                thi = student[j].chinese + student[j].math;
                h3 = student[j].id;
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d", h1, k1G9RVxf, dBb8yf0JS, sec, h3, thi);
}

