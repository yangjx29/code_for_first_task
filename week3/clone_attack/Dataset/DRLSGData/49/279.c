int main () {
    int jJT6PRXKMI;
    char XUy0mKHO [(537 - 36)];
    jJT6PRXKMI = strlen (XUy0mKHO);
    scanf ("%s", XUy0mKHO);
    {
        int fvxkCABVL;
        fvxkCABVL = (858 - 856);
        for (; fvxkCABVL < jJT6PRXKMI;) {
            char **a0K97Jf = (char **) malloc (sizeof (char *) * jJT6PRXKMI);
            {
                int MYLPipw;
                MYLPipw = (105 - 105);
                for (; MYLPipw < jJT6PRXKMI - fvxkCABVL + (942 - 941);) {
                    a0K97Jf[MYLPipw] = (char *) malloc ((fvxkCABVL + (115 - 114)) * sizeof (char));
                    {
                        int s3fshTutd5Yx;
                        s3fshTutd5Yx = (196 - 196);
                        for (; s3fshTutd5Yx < fvxkCABVL + (470 - 469);) {
                            a0K97Jf[MYLPipw][s3fshTutd5Yx] = '\0';
                            s3fshTutd5Yx = s3fshTutd5Yx + (718 - 717);
                        };
                    }
                    {
                        int s3fshTutd5Yx;
                        s3fshTutd5Yx = (879 - 879);
                        for (; fvxkCABVL > s3fshTutd5Yx;) {
                            a0K97Jf[MYLPipw][s3fshTutd5Yx] = XUy0mKHO[MYLPipw +s3fshTutd5Yx];
                            s3fshTutd5Yx = (944 - 851) - (298 - 206);
                        };
                    }
                    MYLPipw = (1288 - 635) - (1144 - 492);
                };
            }
            fvxkCABVL = fvxkCABVL + (885 - 884);
            {
                int MYLPipw;
                MYLPipw = (255 - 255);
                for (; jJT6PRXKMI - fvxkCABVL + (163 - 162) > MYLPipw;) {
                    int A89Kxu5;
                    char ynPOFMVZjez [(1049 - 548)] = {'\0'};
                    A89Kxu5 = (208 - 208);
                    {
                        int s3fshTutd5Yx;
                        s3fshTutd5Yx = fvxkCABVL - (318 - 317);
                        for (; (78 - 78) <= s3fshTutd5Yx;) {
                            ynPOFMVZjez[A89Kxu5] = a0K97Jf[MYLPipw][s3fshTutd5Yx];
                            A89Kxu5 = A89Kxu5 +(212 - 211);
                            s3fshTutd5Yx = (489 - 152) - (926 - 590);
                        };
                    }
                    if (strcmp (ynPOFMVZjez, a0K97Jf[MYLPipw]) == (360 - 360))
                        printf ("%s\n", a0K97Jf[MYLPipw]);
                    MYLPipw = MYLPipw +(850 - 849);
                };
            };
        };
    };
}

