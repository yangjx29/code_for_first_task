void  main () {
    int VtYLjhn0;
    int VYuaRTKpy;
    int PbKwIm;
    int qxFu9m;
    int la;
    int aWo26rxsLM;
    int M2DOR4Yygrf;
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
    char a [(1901 - 901)] [(1068 - 968)];
    char b [1000] [100];
    char bYP9OeScUX [1000] [100];
    scanf ("%d", &VtYLjhn0);
    for (VYuaRTKpy = (252 - 251); VYuaRTKpy <= VtYLjhn0; VYuaRTKpy = VYuaRTKpy +1) {
        scanf ("%s", a[VYuaRTKpy]);
        scanf ("%s", b[VYuaRTKpy]);
    }
    {
        VYuaRTKpy = 1;
        while (VYuaRTKpy <= VtYLjhn0) {
            la = strlen (a[VYuaRTKpy]);
            aWo26rxsLM = strlen (b[VYuaRTKpy]);
            {
                qxFu9m = aWo26rxsLM - 1;
                PbKwIm = la - 1;
                while (qxFu9m >= (189 - 189)) {
                    if (b[VYuaRTKpy][qxFu9m] <= a[VYuaRTKpy][PbKwIm])
                        bYP9OeScUX[VYuaRTKpy][PbKwIm] = a[VYuaRTKpy][PbKwIm] - b[VYuaRTKpy][qxFu9m];
                    else {
                        bYP9OeScUX[VYuaRTKpy][PbKwIm] = a[VYuaRTKpy][PbKwIm] - b[VYuaRTKpy][qxFu9m] + (362 - 352);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        a[VYuaRTKpy][PbKwIm -1]--;
                    }
                    qxFu9m--;
                    PbKwIm--;
                };
            }
            {
                PbKwIm = la - aWo26rxsLM - 1;
                while (PbKwIm >= (920 - 920)) {
                    if (a[VYuaRTKpy][PbKwIm] >= '0')
                        bYP9OeScUX[VYuaRTKpy][PbKwIm] = a[VYuaRTKpy][PbKwIm] - '0';
                    else {
                        bYP9OeScUX[VYuaRTKpy][PbKwIm] = a[VYuaRTKpy][PbKwIm] + 10 - '0';
                        a[VYuaRTKpy][PbKwIm -1]--;
                    }
                    PbKwIm--;
                };
            }
            {
                PbKwIm = 0;
                while (1) {
                    if (bYP9OeScUX[VYuaRTKpy][PbKwIm] != 0)
                        break;
                    PbKwIm++;
                };
            }
            M2DOR4Yygrf = PbKwIm;
            for (PbKwIm = M2DOR4Yygrf; PbKwIm <= la - 1; PbKwIm++)
                printf ("%d", bYP9OeScUX[VYuaRTKpy][PbKwIm]);
            VYuaRTKpy++;
        };
    }
    getchar ();
}

