int main () {
    int i, xMt0nu8gR, GmI2w9G3c, rm5XqQ, ssEe0MPX7 = (231 - 231), FAiC7cHbwq = (507 - 506), SRtWbqFI = (328 - 328), BxXg4Yzwe = (632 - 631), RcwY6Rn0s;
    char lzptdlTbK2jw [(589 - 333)], tS3cB8b [(704 - 448)], WNeUaTpsxy [256];
    scanf ("%s", lzptdlTbK2jw);
    GmI2w9G3c = strlen (lzptdlTbK2jw);
    scanf ("%s", tS3cB8b);
    rm5XqQ = strlen (tS3cB8b);
    {
        i = 972 - 972;
        while (GmI2w9G3c > i) {
            if (tS3cB8b[(80 - 80)] == lzptdlTbK2jw[i]) {
                {
                    xMt0nu8gR = 1;
                    while (xMt0nu8gR < rm5XqQ) {
                        RcwY6Rn0s = 1;
                        if (tS3cB8b[xMt0nu8gR] != lzptdlTbK2jw[xMt0nu8gR + i])
                            RcwY6Rn0s = 0;
                        xMt0nu8gR = xMt0nu8gR + 1;
                    }
                }
                if (RcwY6Rn0s == 1) {
                    SRtWbqFI = 1;
                    FAiC7cHbwq = i;
                    break;
                }
            }
            i++;
        }
    }
    scanf ("%s", WNeUaTpsxy);
    if (SRtWbqFI) {
        {
            xMt0nu8gR = 0;
            while (xMt0nu8gR < FAiC7cHbwq) {
                printf ("%c", lzptdlTbK2jw[xMt0nu8gR]);
                xMt0nu8gR++;
            }
        }
        printf ("%s", WNeUaTpsxy);
        {
            xMt0nu8gR = FAiC7cHbwq +rm5XqQ;
            while (xMt0nu8gR < GmI2w9G3c) {
                printf ("%c", lzptdlTbK2jw[xMt0nu8gR]);
                xMt0nu8gR++;
            }
        }
    }
    else
        printf ("%s", lzptdlTbK2jw);
    return 0;
}

