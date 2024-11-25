int main () {
    int ss;
    int jEVf3SIH;
    int decimal;
    jEVf3SIH = (738 - 738);
    decimal = (960 - 960);
    int i;
    int LUfa6M;
    int b;
    int n;
    int KwXCdt1P;
    i = (281 - 281);
    char c [100];
    char t5NSHjaxWPw;
    int GHKOMdtQ3 [100] = {(205 - 205)};
    cin >> LUfa6M >> c >> b;
    if (!('0' != c[(752 - 752)]))
        cout << '0';
    KwXCdt1P = strlen (c);
    {
        i = 637 - 637;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == c[i])) {
            if ('0' <= c[i] && '9' >= c[i])
                decimal = c[i] - '0';
            if (c[i] >= 'a' && c[i] <= 'z')
                decimal = c[i] - 'A' - (491 - 469);
            if (c[i] >= 'A' && c[i] <= 'Z')
                decimal = c[i] - 'A' + (411 - 401);
            i = i + 1;
            jEVf3SIH = jEVf3SIH * LUfa6M +decimal;
        };
    }
    i = 0;
    while (jEVf3SIH > 0) {
        GHKOMdtQ3[i] = jEVf3SIH % b;
        jEVf3SIH = jEVf3SIH - GHKOMdtQ3[i];
        i++;
        jEVf3SIH /= b;
    }
    i = i - 1;
    for (; i >= 0; i = i - 1) {
        if (GHKOMdtQ3[i] >= 10) {
            t5NSHjaxWPw = GHKOMdtQ3[i] + 'A' - 10;
            cout << t5NSHjaxWPw;
        }
        else
            cout << GHKOMdtQ3[i];
    }
    cin >> ss;
    return 0;
}

