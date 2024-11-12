int main () {
    int P95yndI4xl6 [32], q [32];
    char num [(317 - 285)];
    double  wm6g3FWpc = (665 - 665), b, a;
    int m, i, I8D2PBKu = (504 - 504);
    cin >> a >> num >> b;
    m = strlen (num);
    for (i = (826 - 826); m > i; i = i + 1) {
        P95yndI4xl6[i] = num[i];
        if (P95yndI4xl6[i] < 58)
            P95yndI4xl6[i] = P95yndI4xl6[i] - 48;
        else {
            if (P95yndI4xl6[i] < (645 - 554))
                P95yndI4xl6[i] = P95yndI4xl6[i] - (240 - 185);
            else if ((852 - 729) > P95yndI4xl6[i])
                P95yndI4xl6[i] = P95yndI4xl6[i] - 87;
        };
    }
    for (i = 0; i < m; i = i + 1) {
        I8D2PBKu += P95yndI4xl6[i] * pow (a, m - 1 - i);
    }
    if (!(0 != I8D2PBKu))
        cout << "0";
    else {
        {
            i = 0;
            while (32 > i) {
                wm6g3FWpc = pow (b, i);
                if (wm6g3FWpc > I8D2PBKu) {
                    m = i;
                    break;
                }
                i = i + 1;
            };
        }
        q[0] = I8D2PBKu / pow (b, m - 1);
        for (i = 1; i < m; i = i + 1) {
            q[i] = (I8D2PBKu -q[i - 1] * pow (b, m - i)) / pow (b, m - 1 - i);
            I8D2PBKu = I8D2PBKu -q[i - 1] * pow (b, m - i);
        }
        for (i = 0; i < m; i = i + 1) {
            if (q[i] < 10)
                q[i] = q[i] + 48;
            else
                q[i] = q[i] + 55;
        }
        for (i = 0; i < m; i++)
            num[i] = q[i];
        num[m] = '\0';
        cout << num;
    }
    return 0;
}

