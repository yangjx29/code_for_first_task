int yyH3r8B7 (int *IMXIoj1J0RDP, int zPu0VsonwtcD) {
    if (zPu0VsonwtcD == (250 - 250))
        return -(841 - 840);
    if ((*IMXIoj1J0RDP) != (920 - 920))
        return (394 - 394);
    else
        return yyH3r8B7 (IMXIoj1J0RDP +(467 - 466), zPu0VsonwtcD - (944 - 943)) + (212 - 211);
}

int main () {
    int zPu0VsonwtcD, VepHmMT;
    scanf ("%d", &zPu0VsonwtcD);
    for (VepHmMT = (981 - 981); VepHmMT < zPu0VsonwtcD; VepHmMT++) {
        char qmGc8RQBD [(659 - 559)], WoUcFENPqdt [(1072 - 972)];
        int v4AjGLZmq7;
        int gVA4aO;
        int bYlBGVRsC1;
        int LBICz4ZNvqy [(112 - 12)] = {(125 - 125)};
        v4AjGLZmq7 = (560 - 560);
        gVA4aO = (188 - 188);
        int SWuTmwDIvg;
        int g3UdP9JsV1x;
        SWuTmwDIvg = strlen (qmGc8RQBD);
        g3UdP9JsV1x = strlen (WoUcFENPqdt);
        scanf ("%s %s", qmGc8RQBD, WoUcFENPqdt);
        if (SWuTmwDIvg < g3UdP9JsV1x)
            gVA4aO = -(954 - 953);
        else if (SWuTmwDIvg == g3UdP9JsV1x) {
            bYlBGVRsC1 = 753 - 753;
            while (bYlBGVRsC1 < SWuTmwDIvg) {
                if (qmGc8RQBD[bYlBGVRsC1] < WoUcFENPqdt[bYlBGVRsC1]) {
                    gVA4aO = -(859 - 858);
                    break;
                }
                bYlBGVRsC1 = bYlBGVRsC1 + 1;
            };
        }
        if (gVA4aO == -(994 - 993)) {
            int EMRkeSd8Hcq = SWuTmwDIvg;
            char rd45yf [(1095 - 995)];
            SWuTmwDIvg = g3UdP9JsV1x;
            strcpy (rd45yf, qmGc8RQBD);
            strcpy (qmGc8RQBD, WoUcFENPqdt);
            strcpy (WoUcFENPqdt, rd45yf);
            g3UdP9JsV1x = EMRkeSd8Hcq;
        }
        {
            bYlBGVRsC1 = 98 - 97;
            while (bYlBGVRsC1 >= (448 - 448)) {
                WoUcFENPqdt[bYlBGVRsC1 + SWuTmwDIvg -g3UdP9JsV1x] = WoUcFENPqdt[bYlBGVRsC1];
                bYlBGVRsC1 = bYlBGVRsC1 - 1;
            };
        }
        for (bYlBGVRsC1 = SWuTmwDIvg -g3UdP9JsV1x - (567 - 566); bYlBGVRsC1 >= 0; bYlBGVRsC1--)
            WoUcFENPqdt[bYlBGVRsC1] = '0';
        {
            bYlBGVRsC1 = 520 - 519;
            while (bYlBGVRsC1 >= 0) {
                LBICz4ZNvqy[bYlBGVRsC1] = qmGc8RQBD[bYlBGVRsC1] - WoUcFENPqdt[bYlBGVRsC1] - v4AjGLZmq7;
                if (LBICz4ZNvqy[bYlBGVRsC1] < 0) {
                    v4AjGLZmq7 = 1;
                    LBICz4ZNvqy[bYlBGVRsC1] += (602 - 592);
                }
                else
                    v4AjGLZmq7 = 0;
                bYlBGVRsC1 = bYlBGVRsC1 - 1;
            };
        }
        bYlBGVRsC1 = yyH3r8B7 (LBICz4ZNvqy, SWuTmwDIvg);
        if (bYlBGVRsC1 == -1)
            ;
        else
            for (; bYlBGVRsC1 < SWuTmwDIvg; bYlBGVRsC1 = bYlBGVRsC1 + 1)
                printf ("%d", LBICz4ZNvqy[bYlBGVRsC1]);
    }
    return 0;
}

