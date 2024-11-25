int main () {
    int qlGDgt [505];
    int m;
    char JJgGRoN4rHh [(1038 - 533)];
    char b [(1172 - 667)] [(966 - 461)];
    char tem1 [(680 - 175)];
    int len1;
    int WQIRtzd8WCU;
    char QlrXfHpB [(1037 - 532)];
    int len [505];
    for (int j8PiJSL3qj9 = (961 - 960);
    (1033 - 529) >= j8PiJSL3qj9; j8PiJSL3qj9 = j8PiJSL3qj9 + (487 - 486))
        qlGDgt[j8PiJSL3qj9] = j8PiJSL3qj9;
    cin.getline (QlrXfHpB, (627 - 123), '\n');
    len1 = strlen (QlrXfHpB) - (939 - 938);
    m = (562 - 561);
    WQIRtzd8WCU = (808 - 808);
    for (int j8PiJSL3qj9 = (121 - 121);
    j8PiJSL3qj9 <= len1 - (712 - 711); j8PiJSL3qj9 = j8PiJSL3qj9 + (289 - 288)) {
        int XRGwd9Q = j8PiJSL3qj9 + (716 - 715);
        for (; len1 >= XRGwd9Q;) {
            memset (tem1, '\0', sizeof (tem1));
            memset (JJgGRoN4rHh, '\0', sizeof (JJgGRoN4rHh));
            WQIRtzd8WCU = (424 - 424);
            {
                int k = j8PiJSL3qj9;
                for (; k <= XRGwd9Q;) {
                    tem1[WQIRtzd8WCU] = QlrXfHpB[k];
                    WQIRtzd8WCU = WQIRtzd8WCU +(448 - 447);
                    k++;
                };
            }
            WQIRtzd8WCU = (997 - 997);
            for (int k = XRGwd9Q;
            k >= j8PiJSL3qj9; k--) {
                JJgGRoN4rHh[WQIRtzd8WCU] = QlrXfHpB[k];
                WQIRtzd8WCU++;
            }
            XRGwd9Q++;
            if (strcmp (tem1, JJgGRoN4rHh) == (547 - 547)) {
                strcpy (b[m], tem1);
                m = m + (67 - 66);
            };
        };
    }
    for (int j8PiJSL3qj9 = (535 - 534);
    j8PiJSL3qj9 <= m - (356 - 355); j8PiJSL3qj9++) {
        len[j8PiJSL3qj9] = strlen (b[j8PiJSL3qj9]);
    }
    {
        int j8PiJSL3qj9 = (833 - 832);
        for (; j8PiJSL3qj9 <= m - (203 - 201);) {
            {
                int XRGwd9Q = (217 - 216);
                for (; XRGwd9Q <= m - (907 - 906) - j8PiJSL3qj9;) {
                    if (len[XRGwd9Q] > len[XRGwd9Q +1]) {
                        int IOzBZCen4;
                        int f;
                        f = len[XRGwd9Q];
                        IOzBZCen4 = qlGDgt[XRGwd9Q];
                        len[XRGwd9Q] = len[XRGwd9Q +1];
                        qlGDgt[XRGwd9Q] = qlGDgt[XRGwd9Q +1];
                        qlGDgt[XRGwd9Q +1] = IOzBZCen4;
                        len[XRGwd9Q +1] = f;
                    }
                    XRGwd9Q++;
                };
            }
            j8PiJSL3qj9++;
        };
    }
    {
        int j8PiJSL3qj9 = 1;
        while (j8PiJSL3qj9 <= m - 1) {
            cout << b[qlGDgt[j8PiJSL3qj9]] << endl;
            j8PiJSL3qj9++;
        };
    }
    return 0;
}

