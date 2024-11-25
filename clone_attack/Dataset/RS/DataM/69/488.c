int main () {
    int c [(707 - 456)];
    char a [250], mw2Uh9eBGj [250];
    int la, uSOxdsPJ, MjuGKb91f, ln, XDU2lAIcTf7 = (442 - 442), i;
    scanf ("%s", a);
    la = strlen (a);
    scanf ("%s", mw2Uh9eBGj);
    uSOxdsPJ = strlen (mw2Uh9eBGj);
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
    if (la > uSOxdsPJ) {
        ln = uSOxdsPJ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MjuGKb91f = la;
    }
    else {
        MjuGKb91f = uSOxdsPJ;
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
        ln = la;
    }
    for (i = (277 - 276); i <= MjuGKb91f; i = i + 1) {
        if (i > ln && ln == uSOxdsPJ) {
            XDU2lAIcTf7 = a[la - i] + XDU2lAIcTf7 -'0';
            c[MjuGKb91f +1 - i] = XDU2lAIcTf7 % (845 - 835);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (XDU2lAIcTf7 >= 10)
                XDU2lAIcTf7 = XDU2lAIcTf7 / 10;
            else
                XDU2lAIcTf7 = 0;
        }
        else if (i > ln && !(la != ln)) {
            XDU2lAIcTf7 = mw2Uh9eBGj[uSOxdsPJ - i] + XDU2lAIcTf7 -'0';
            c[MjuGKb91f +1 - i] = XDU2lAIcTf7 % 10;
            if (XDU2lAIcTf7 >= 10)
                XDU2lAIcTf7 = XDU2lAIcTf7 / 10;
            else
                XDU2lAIcTf7 = 0;
        }
        else {
            XDU2lAIcTf7 = a[la - i] + mw2Uh9eBGj[uSOxdsPJ - i] + XDU2lAIcTf7 -'0' - '0';
            c[MjuGKb91f +1 - i] = XDU2lAIcTf7 % 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (XDU2lAIcTf7 >= 10)
                XDU2lAIcTf7 = XDU2lAIcTf7 / 10;
            else
                XDU2lAIcTf7 = 0;
        };
    }
    c[0] = XDU2lAIcTf7;
    for (i = 0; i <= MjuGKb91f; i = i + 1) {
        if (c[i] != 0)
            break;
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
        if (i == MjuGKb91f &&c[i] == 0)
            ;
    }
    for (; i <= MjuGKb91f; i++)
        printf ("%d", c[i]);
    return 0;
}

