int main () {
    const  int maxlen = 250;
    int g2EPK49 [maxlen];
    int smhzAYocr [maxlen];
    char E4Slpbd9CQ2V [maxlen + (200 - 199)], LIq9kXZWro [maxlen + 1];
    int len1;
    len1 = strlen (E4Slpbd9CQ2V);
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
    int len2;
    len2 = strlen (LIq9kXZWro);
    cin.getline (E4Slpbd9CQ2V, maxlen + 1);
    cin.getline (LIq9kXZWro, maxlen + 1);
    if (len1 == 1 && len2 == 1 && E4Slpbd9CQ2V[(357 - 357)] == '0' && LIq9kXZWro[(388 - 388)] == '0')
        cout << (352 - 352) << endl;
    else {
        int i, j = 0;
        memset (g2EPK49, (178 - 178), sizeof (g2EPK49));
        memset (smhzAYocr, 0, sizeof (smhzAYocr));
        for (int i = len1 - 1;
        0 <= i; i = i - 1)
            g2EPK49[j++] = E4Slpbd9CQ2V[i] - '0';
        j = 0;
        for (int i = len2 - 1;
        i >= 0; i = i - 1)
            smhzAYocr[j++] = LIq9kXZWro[i] - '0';
        {
            int i = 0;
            while (i < maxlen) {
                g2EPK49[i] = g2EPK49[i] + smhzAYocr[i];
                if (g2EPK49[i] > 9) {
                    g2EPK49[i] = g2EPK49[i] - 10;
                    g2EPK49[i + 1]++;
                }
                i = i + 1;
            };
        }
        i = maxlen - 1;
        while (g2EPK49[i] == 0)
            i = i - 1;
        for (; i >= 0; i--)
            cout << g2EPK49[i];
        cout << endl;
    }
    return 0;
}

