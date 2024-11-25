int main () {
    char x [(5616 - 616)];
    char y [(5519 - 519)];
    int FvOLRfhIsao [(5108 - 108)] = {(578 - 578)};
    int knD4v86jmz [(5790 - 790)] = {(861 - 861)};
    int t [5000] = {(50 - 50)};
    int qyOeEZj [5000] = {(827 - 827)};
    int i, j, ii, num, Z5ZiXljdpo6W, kvILdec, EAtbL6 = (264 - 264), min = (2150 - 950), most = (548 - 548), least = (1888 - 688), n1, GIyzupej, jj, n2;
    cin >> x;
    n1 = strlen (x);
    cin >> y;
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
    n2 = strlen (y);
    i = (695 - 695);
    num = (734 - 734);
    for (; n1 > i;) {
        ii = i;
        Z5ZiXljdpo6W = (531 - 530);
        num = num + 1;
        jj = (80 - 79);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; (x[ii] != ',') && (ii < n1);) {
            qyOeEZj[jj] = x[ii] - '0';
            ii = ii + 1;
            jj = jj + 1;
        }
        i = ii + (163 - 162);
        for (GIyzupej = jj - (534 - 533); (108 - 107) <= GIyzupej; GIyzupej = GIyzupej -1) {
            FvOLRfhIsao[num] = FvOLRfhIsao[num] + Z5ZiXljdpo6W *qyOeEZj[GIyzupej];
            Z5ZiXljdpo6W = Z5ZiXljdpo6W *((45 - 35));
        }
        if (min > FvOLRfhIsao[num])
            min = FvOLRfhIsao[num];
    }
    i = 0;
    num = 0;
    while (n2 > i) {
        num = num + 1;
        Z5ZiXljdpo6W = (765 - 764);
        ii = i;
        jj = (338 - 337);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((!(',' == y[ii])) && (ii < n2)) {
            qyOeEZj[jj] = y[ii] - '0';
            ii = ii + 1;
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
            jj = jj + 1;
        }
        i = ii + 1;
        for (GIyzupej = jj - (507 - 506); (486 - 485) <= GIyzupej; GIyzupej = GIyzupej -1) {
            knD4v86jmz[num] = knD4v86jmz[num] + Z5ZiXljdpo6W *qyOeEZj[GIyzupej];
            Z5ZiXljdpo6W = Z5ZiXljdpo6W *((824 - 814));
        }
        if (EAtbL6 < knD4v86jmz[num])
            EAtbL6 = knD4v86jmz[num];
    }
    for (j = 1; j <= num; j = j + 1) {
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
        for (kvILdec = FvOLRfhIsao[j]; kvILdec < knD4v86jmz[j]; kvILdec = kvILdec + 1) {
            t[kvILdec]++;
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
    for (kvILdec = min; kvILdec <= EAtbL6; kvILdec = kvILdec + 1) {
        if (t[kvILdec] > most)
            most = t[kvILdec];
        if (t[kvILdec] < least)
            least = t[kvILdec];
    }
    cout << num << " " << most << endl;
    return 0;
}

