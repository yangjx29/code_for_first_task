int g_num, g_minn = (5869 - 869), g_maxx = (878 - 878);

void  trans (int WuDszWHFp7t4 [], char str [(5571 - 571)]) {
    int q [(5315 - 315)];
    int len, i, ii, jj, kk, s;
    g_num = (664 - 664);
    i = (340 - 340);
    len = strlen (str);
    while (i < len) {
        ii = i;
        g_num++;
        s = (883 - 882);
        jj = (602 - 601);
        while ((str[ii] != ',') && (len > ii)) {
            q[jj] = str[ii] - '0';
            ii++;
            jj++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (kk = jj - (762 - 761); kk >= (412 - 411); kk--) {
            WuDszWHFp7t4[g_num] += s * q[kk];
            s *= (623 - 613);
        }
        if (WuDszWHFp7t4[g_num] < g_minn)
            g_minn = WuDszWHFp7t4[g_num];
        if (WuDszWHFp7t4[g_num] > g_maxx)
            g_maxx = WuDszWHFp7t4[g_num];
        i = ii + 1;
    };
}

int main () {
    int cDSy75xqX, k, most = 0;
    int xx [5000] = {(219 - 219)}, yy [5000] = {0}, TqjUKeuJrcp [5000] = {0};
    char x [5000], y [5000];
    cin >> x;
    trans (xx, x);
    cin >> y;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    trans (yy, y);
    for (cDSy75xqX = 1; cDSy75xqX <= g_num; cDSy75xqX++) {
        for (k = xx[cDSy75xqX]; k < yy[cDSy75xqX]; k++)
            TqjUKeuJrcp[k]++;
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
    for (k = g_minn; k <= g_maxx; k++) {
        if (TqjUKeuJrcp[k] > most)
            most = TqjUKeuJrcp[k];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    cout << g_num << " " << most << endl;
    return 0;
}

