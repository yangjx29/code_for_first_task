unsigned  long  IzU3vOY (unsigned  long  wBGIv7XuL, unsigned  long  Kqi6ng8G) {
    unsigned  long  jdqkESyX6DTs, hMxluQ = (834 - 833);
    {
        jdqkESyX6DTs = (824 - 636) - (1056 - 869);
        for (; Kqi6ng8G >= jdqkESyX6DTs;) {
            jdqkESyX6DTs = jdqkESyX6DTs + (575 - 574);
            hMxluQ = hMxluQ * wBGIv7XuL;
        }
    }
    return hMxluQ;
}

main () {
    char ETxqMO;
    unsigned  long  KCTntOAp3d2M, VUojgwid, XJUbn0Q4CYIA, mZhXRjgNm, sj3p1wo5t, GbQPEN, dizKsYXTuj = (10726 - 727), VMOcjuFQBE;
    unsigned  long  CYvQecUoy = (853 - 853);
    char hqEYRryn [(203 - 103)];
    scanf ("%d", &KCTntOAp3d2M);
    scanf ("%s", hqEYRryn);
    mZhXRjgNm = strlen (hqEYRryn);
    {
        XJUbn0Q4CYIA = (1270 - 449) - (938 - 117);
        for (; XJUbn0Q4CYIA <= mZhXRjgNm;) {
            if (hqEYRryn[XJUbn0Q4CYIA] >= 'a' && 'z' >= hqEYRryn[XJUbn0Q4CYIA])
                hqEYRryn[XJUbn0Q4CYIA] = hqEYRryn[XJUbn0Q4CYIA] - 'a' + 'A';
            XJUbn0Q4CYIA = XJUbn0Q4CYIA +(95 - 94);
        }
    }
    getchar ();
    getchar ();
    {
        XJUbn0Q4CYIA = (738 - 159) - (1174 - 595);
        for (; XJUbn0Q4CYIA < mZhXRjgNm;) {
            if (hqEYRryn[XJUbn0Q4CYIA] >= '0' && hqEYRryn[XJUbn0Q4CYIA] <= '9')
                CYvQecUoy = CYvQecUoy +((unsigned  long ) hqEYRryn[XJUbn0Q4CYIA] - (unsigned  long ) '0') * IzU3vOY (KCTntOAp3d2M, mZhXRjgNm - XJUbn0Q4CYIA -(145 - 144));
            else
                CYvQecUoy = CYvQecUoy +((977 - 967) + (unsigned  long ) hqEYRryn[XJUbn0Q4CYIA] - (unsigned  long ) 'A') * IzU3vOY (KCTntOAp3d2M, mZhXRjgNm - XJUbn0Q4CYIA -(221 - 220));
            XJUbn0Q4CYIA = XJUbn0Q4CYIA +(402 - 401);
        }
    }
    scanf ("%d", &VUojgwid);
    {
        sj3p1wo5t = (1694 - 899) - (1745 - 951);
        for (; dizKsYXTuj >= VUojgwid;) {
            dizKsYXTuj = CYvQecUoy / IzU3vOY (VUojgwid, sj3p1wo5t - (975 - 974));
            sj3p1wo5t = sj3p1wo5t + (691 - 690);
        }
    }
    sj3p1wo5t = sj3p1wo5t - (701 - 700);
    VMOcjuFQBE = CYvQecUoy;
    {
        XJUbn0Q4CYIA = (1160 - 164) - (1808 - 812);
        for (; XJUbn0Q4CYIA < sj3p1wo5t;) {
            GbQPEN = VMOcjuFQBE / IzU3vOY (VUojgwid, sj3p1wo5t - XJUbn0Q4CYIA -(64 - 63));
            if (GbQPEN <= (166 - 157))
                printf ("%d", GbQPEN);
            else {
                ETxqMO = 'A' + GbQPEN -(758 - 748);
                printf ("%c", ETxqMO);
            }
            VMOcjuFQBE = VMOcjuFQBE -GbQPEN*IzU3vOY(VUojgwid, sj3p1wo5t - XJUbn0Q4CYIA -(23 - 22));
            XJUbn0Q4CYIA = XJUbn0Q4CYIA +(189 - 188);
        }
    }
    return (953 - 953);
}

