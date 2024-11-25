int main () {
    int aLxn90iCT [(629 - 529)] [(358 - 258)], qi7Jg1az = (175 - 175), LTpKQr0m = (295 - 295), wwyuNRrjip, g6RBA2xpY;
    int hxx;
    int vxh1AQ3Zn;
    int ekQTC1rH;
    int i1rl8IHVFj;
    int bbZKqUag;
    int vPxVLM10KuQ8;
    int jR6Gs1IF;
    int m4;
    int n1;
    int CGVEnBUo;
    ekQTC1rH = (289 - 289);
    hxx = (780 - 780);
    scanf ("%d%d", &wwyuNRrjip, &g6RBA2xpY);
    {
        qi7Jg1az = (510 - 510);
        for (; qi7Jg1az < wwyuNRrjip;) {
            {
                LTpKQr0m = (523 - 523);
                for (; LTpKQr0m < g6RBA2xpY;) {
                    scanf ("%d", &aLxn90iCT[qi7Jg1az][LTpKQr0m]);
                    LTpKQr0m++;
                }
            }
            qi7Jg1az++;
        }
    }
    i1rl8IHVFj = g6RBA2xpY - (998 - 997);
    vxh1AQ3Zn = wwyuNRrjip - (68 - 67);
    {
        hxx = (390 - 390);
        vxh1AQ3Zn = wwyuNRrjip - 1;
        ekQTC1rH = (823 - 823);
        i1rl8IHVFj = g6RBA2xpY - 1;
        for (; hxx < vxh1AQ3Zn && ekQTC1rH < i1rl8IHVFj;) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                bbZKqUag = ekQTC1rH;
                for (; bbZKqUag < i1rl8IHVFj;) {
                    printf ("%d\n", aLxn90iCT[hxx][bbZKqUag]);
                    bbZKqUag++;
                }
            }
            {
                vPxVLM10KuQ8 = hxx;
                for (; vPxVLM10KuQ8 < vxh1AQ3Zn;) {
                    printf ("%d\n", aLxn90iCT[vPxVLM10KuQ8][i1rl8IHVFj]);
                    vPxVLM10KuQ8++;
                }
            }
            {
                jR6Gs1IF = i1rl8IHVFj;
                for (; jR6Gs1IF > ekQTC1rH;) {
                    printf ("%d\n", aLxn90iCT[vxh1AQ3Zn][jR6Gs1IF]);
                    jR6Gs1IF--;
                }
            }
            {
                m4 = vxh1AQ3Zn;
                for (; m4 > hxx;) {
                    printf ("%d\n", aLxn90iCT[m4][ekQTC1rH]);
                    m4--;
                }
            }
            hxx++;
            vxh1AQ3Zn--;
            ekQTC1rH++;
            i1rl8IHVFj--;
        }
    }
    if (hxx == vxh1AQ3Zn) {
        n1 = ekQTC1rH;
        for (; n1 <= i1rl8IHVFj;) {
            printf ("%d\n", aLxn90iCT[hxx][n1]);
            n1++;
        }
    }
    else {
        if (ekQTC1rH == i1rl8IHVFj) {
            CGVEnBUo = hxx;
            for (; CGVEnBUo <= vxh1AQ3Zn;) {
                printf ("%d\n", aLxn90iCT[CGVEnBUo][ekQTC1rH]);
                CGVEnBUo++;
            }
        }
    }
    return 0;
}

