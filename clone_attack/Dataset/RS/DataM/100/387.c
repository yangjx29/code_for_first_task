int main () {
    int VPMHfAZ3U = (413 - 413), HgClYazkvKe, p3l2yvRT, LYHv6JX [300];
    char wA97i2Gs [300];
    char *rOhi13;
    char j62tOj [300];
    char VnW8F02;
    scanf ("%s", wA97i2Gs);
    {
        rOhi13 = wA97i2Gs;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == *rOhi13)) {
            if (*rOhi13 >= 'a' && 'z' >= *rOhi13) {
                j62tOj[VPMHfAZ3U] = *rOhi13;
                VPMHfAZ3U = VPMHfAZ3U +1;
            }
            rOhi13++;
        };
    }
    if (!(0 != VPMHfAZ3U)) {
        printf ("No");
        return 0;
    }
    for (HgClYazkvKe = 0; VPMHfAZ3U > HgClYazkvKe; HgClYazkvKe++) {
        p3l2yvRT = HgClYazkvKe +1;
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
        while (p3l2yvRT < VPMHfAZ3U) {
            if (j62tOj[p3l2yvRT] < j62tOj[HgClYazkvKe]) {
                VnW8F02 = j62tOj[HgClYazkvKe];
                j62tOj[HgClYazkvKe] = j62tOj[p3l2yvRT];
                j62tOj[p3l2yvRT] = VnW8F02;
            }
            p3l2yvRT = p3l2yvRT + 1;
        };
    }
    {
        HgClYazkvKe = 0;
        while (HgClYazkvKe < VPMHfAZ3U) {
            LYHv6JX[HgClYazkvKe] = 1;
            for (p3l2yvRT = HgClYazkvKe +1; p3l2yvRT < VPMHfAZ3U; p3l2yvRT = p3l2yvRT + 1) {
                if (j62tOj[HgClYazkvKe] == j62tOj[p3l2yvRT]) {
                    LYHv6JX[HgClYazkvKe]++;
                    j62tOj[p3l2yvRT] = '0';
                };
            }
            HgClYazkvKe = HgClYazkvKe +1;
        };
    }
    {
        HgClYazkvKe = 0;
        while (HgClYazkvKe < VPMHfAZ3U) {
            if (j62tOj[HgClYazkvKe] != '0') {
                printf ("%c=%d\n", j62tOj[HgClYazkvKe], LYHv6JX[HgClYazkvKe]);
            }
            HgClYazkvKe++;
        };
    }
    return 0;
}

