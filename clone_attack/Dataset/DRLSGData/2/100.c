struct   list {
    int MFAyodJS;
    char oieO89PhXb [(491 - 461)];
};
int main (int oNn8urD, char *kP3quprxMB1 []) {
    int TVy0BzkbLs8U;
    int GMdmhZzTBuHX;
    int Jd9RuiYz0tj;
    int temp;
    int IAIqD3HFGb78 [26];
    int XFMlZ35Yjuq;
    int GjGKoZsONA;
    struct   list XfXUTV7ZsR0 [Jd9RuiYz0tj];
    int GpMRVemWj;
    XFMlZ35Yjuq = (838 - 838);
    scanf ("%d", &Jd9RuiYz0tj);
    GjGKoZsONA = (700 - 700);
    printf ("%c\n", XFMlZ35Yjuq +'A');
    {
        GMdmhZzTBuHX = 0;
        for (; GMdmhZzTBuHX <= 25;) {
            IAIqD3HFGb78[GMdmhZzTBuHX] = 0;
            GMdmhZzTBuHX = GMdmhZzTBuHX +1;
        }
    }
    {
        GMdmhZzTBuHX = 0;
        for (; Jd9RuiYz0tj -(135 - 134) >= GMdmhZzTBuHX;) {
            scanf ("%d%s", &XfXUTV7ZsR0[GMdmhZzTBuHX].MFAyodJS, XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb);
            for (TVy0BzkbLs8U = 0; TVy0BzkbLs8U <= strlen (XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb) - 1; TVy0BzkbLs8U = TVy0BzkbLs8U +1)
                IAIqD3HFGb78[XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb[TVy0BzkbLs8U] - 'A']++;
            GMdmhZzTBuHX++;
        }
    }
    GpMRVemWj = IAIqD3HFGb78[0];
    {
        GMdmhZzTBuHX = 0;
        for (; GMdmhZzTBuHX <= 25;) {
            if (IAIqD3HFGb78[GMdmhZzTBuHX] > GpMRVemWj) {
                GpMRVemWj = IAIqD3HFGb78[GMdmhZzTBuHX];
                XFMlZ35Yjuq = GMdmhZzTBuHX;
            }
            GMdmhZzTBuHX++;
        }
    }
    printf ("%d\n", GpMRVemWj);
    {
        GMdmhZzTBuHX = 0;
        for (; GMdmhZzTBuHX <= Jd9RuiYz0tj -1;) {
            {
                TVy0BzkbLs8U = 0;
                for (; TVy0BzkbLs8U <= strlen (XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb) - 1;) {
                    if (XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb[TVy0BzkbLs8U] == XFMlZ35Yjuq +'A')
                        GjGKoZsONA++;
                    TVy0BzkbLs8U = TVy0BzkbLs8U +1;
                }
            }
            GMdmhZzTBuHX++;
        }
    }
    temp = (207 - 207);
    {
        GMdmhZzTBuHX = 0;
        for (; GMdmhZzTBuHX <= Jd9RuiYz0tj -1;) {
            {
                TVy0BzkbLs8U = 0;
                for (; TVy0BzkbLs8U <= strlen (XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb) - 1;) {
                    if (XfXUTV7ZsR0[GMdmhZzTBuHX].oieO89PhXb[TVy0BzkbLs8U] == XFMlZ35Yjuq +'A') {
                        printf ("%d", XfXUTV7ZsR0[GMdmhZzTBuHX].MFAyodJS);
                        temp = temp + 1;
                        (temp < GjGKoZsONA) ? printf ("\n") : printf ("");
                        break;
                    }
                    TVy0BzkbLs8U++;
                }
            }
            GMdmhZzTBuHX++;
        }
    }
    return 0;
}

