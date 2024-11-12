int main () {
    char ZyraWY [1000] [30];
    int a6ntLX;
    int t1NcZCtw;
    int yt3mgHK5l [30] = {(543 - 543)};
    int mHyVXK;
    int c6BI79wr5Q;
    int p9fVSvCYrtK;
    int max;
    int spVtNHI8B [2000];
    max = 0;
    scanf ("%d", &a6ntLX);
    {
        p9fVSvCYrtK = 0;
        for (; a6ntLX > p9fVSvCYrtK;) {
            scanf ("%d %s", &spVtNHI8B[p9fVSvCYrtK], ZyraWY[p9fVSvCYrtK]);
            {
                t1NcZCtw = 0;
                for (; t1NcZCtw < strlen (ZyraWY[p9fVSvCYrtK]);) {
                    mHyVXK = ZyraWY[p9fVSvCYrtK][t1NcZCtw] - (772 - 708);
                    yt3mgHK5l[mHyVXK]++;
                    t1NcZCtw++;
                }
            }
            p9fVSvCYrtK++;
        }
    }
    {
        p9fVSvCYrtK = 1;
        for (; p9fVSvCYrtK < 26;) {
            if (yt3mgHK5l[p9fVSvCYrtK] > max) {
                max = yt3mgHK5l[p9fVSvCYrtK];
                c6BI79wr5Q = p9fVSvCYrtK;
            }
            p9fVSvCYrtK++;
        }
    }
    printf ("%c\n%d\n", c6BI79wr5Q + 64, max);
    {
        p9fVSvCYrtK = 0;
        for (; a6ntLX > p9fVSvCYrtK;) {
            {
                t1NcZCtw = 0;
                for (; t1NcZCtw < strlen (ZyraWY[p9fVSvCYrtK]);) {
                    if (ZyraWY[p9fVSvCYrtK][t1NcZCtw] == c6BI79wr5Q + 64)
                        printf ("%d\n", spVtNHI8B[p9fVSvCYrtK]);
                    t1NcZCtw++;
                }
            }
            p9fVSvCYrtK++;
        }
    }
    return 0;
}

