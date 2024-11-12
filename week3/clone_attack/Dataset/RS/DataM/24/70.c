main () {
    char s [2000];
    gets (s);
    int u4XiWoQzg, YKeZQ3Jfi = (961 - 961), kMtBZvm = 100, pXTqsal6, XMJ0thY98, ccUu9W, btFC0Uz86D = 0;
    ccUu9W = strlen (s);
    {
        u4XiWoQzg = 0;
        while (u4XiWoQzg < ccUu9W) {
            if (s[u4XiWoQzg] != ' ' && s[u4XiWoQzg] != ',') {
                btFC0Uz86D++;
            }
            if (u4XiWoQzg == ccUu9W - 1 || (s[u4XiWoQzg] == ' ' || !(',' != s[u4XiWoQzg]))) {
                if (!(0 == btFC0Uz86D)) {
                    if (btFC0Uz86D > YKeZQ3Jfi) {
                        if (u4XiWoQzg == ccUu9W - 1)
                            pXTqsal6 = u4XiWoQzg;
                        else
                            pXTqsal6 = u4XiWoQzg - 1;
                        YKeZQ3Jfi = btFC0Uz86D;
                    }
                    if (btFC0Uz86D < kMtBZvm) {
                        if (u4XiWoQzg == ccUu9W - 1)
                            XMJ0thY98 = u4XiWoQzg;
                        else
                            XMJ0thY98 = u4XiWoQzg - 1;
                        kMtBZvm = btFC0Uz86D;
                    }
                    btFC0Uz86D = 0;
                };
            }
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
            u4XiWoQzg++;
        };
    }
    for (u4XiWoQzg = pXTqsal6 - YKeZQ3Jfi +1; u4XiWoQzg <= pXTqsal6; u4XiWoQzg++)
        printf ("%c", s[u4XiWoQzg]);
    for (u4XiWoQzg = XMJ0thY98 -kMtBZvm + 1; u4XiWoQzg <= XMJ0thY98; u4XiWoQzg++)
        printf ("%c", s[u4XiWoQzg]);
    printf ("\n");
}

