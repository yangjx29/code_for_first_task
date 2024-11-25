struct   student {
    long  int id;
    int VCl2ygnXri;
    int math;
};
main () {
    long  int i, maxi1, mav6nI, maxi3, tYrVDSOg;
    struct   student WfkmSWxTdC [tYrVDSOg];
    int I24Tkc1G;
    int hgxOn3dGfp;
    int maxpt3;
    I24Tkc1G = (687 - 687);
    hgxOn3dGfp = (721 - 721);
    maxpt3 = 0;
    scanf ("%d", &tYrVDSOg);
    {
        i = 846 - 846;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tYrVDSOg > i) {
            scanf ("%d %d %d", &WfkmSWxTdC[i].id, &WfkmSWxTdC[i].VCl2ygnXri, &WfkmSWxTdC[i].math);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < tYrVDSOg) {
            if (I24Tkc1G < WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math) {
                maxi3 = mav6nI;
                mav6nI = maxi1;
                maxpt3 = hgxOn3dGfp;
                hgxOn3dGfp = I24Tkc1G;
                I24Tkc1G = WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math;
                maxi1 = WfkmSWxTdC[i].id;
            }
            else if (WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math > hgxOn3dGfp) {
                maxpt3 = hgxOn3dGfp;
                hgxOn3dGfp = WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math;
                maxi3 = mav6nI;
                mav6nI = WfkmSWxTdC[i].id;
            }
            else if (WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math > maxpt3) {
                maxpt3 = WfkmSWxTdC[i].VCl2ygnXri + WfkmSWxTdC[i].math;
                maxi3 = WfkmSWxTdC[i].id;
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", maxi1, I24Tkc1G, mav6nI, hgxOn3dGfp, maxi3, maxpt3);
}

