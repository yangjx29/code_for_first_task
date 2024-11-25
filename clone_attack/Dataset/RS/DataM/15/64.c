int main () {
    int Y2z5q6sx, FlwNHY5BUreI;
    int YsNYyo [100] [100];
    int len0, wid0, ca8SiPD, yP5aCJB4Ond8;
    int n;
    scanf ("%d", &n);
    {
        Y2z5q6sx = 937 - 937;
        while (n > Y2z5q6sx) {
            for (FlwNHY5BUreI = 0; n > FlwNHY5BUreI; FlwNHY5BUreI++)
                scanf ("%d", *(YsNYyo +Y2z5q6sx) + FlwNHY5BUreI);
            Y2z5q6sx++;
        };
    }
    for (Y2z5q6sx = 0; n > Y2z5q6sx; Y2z5q6sx++)
        for (FlwNHY5BUreI = 0; n > FlwNHY5BUreI; FlwNHY5BUreI++) {
            if (!(0 != YsNYyo[Y2z5q6sx][FlwNHY5BUreI]) && !(0 != YsNYyo[Y2z5q6sx +1][FlwNHY5BUreI]) && !(0 != YsNYyo[Y2z5q6sx][FlwNHY5BUreI +1])) {
                wid0 = FlwNHY5BUreI;
                len0 = Y2z5q6sx;
            }
            if (YsNYyo[Y2z5q6sx][FlwNHY5BUreI] == 0 && YsNYyo[Y2z5q6sx -1][FlwNHY5BUreI] == 0 && YsNYyo[Y2z5q6sx][FlwNHY5BUreI -1] == 0) {
                yP5aCJB4Ond8 = FlwNHY5BUreI;
                ca8SiPD = Y2z5q6sx;
            };
        }
    printf ("%d\n", abs ((ca8SiPD - len0 - 1) * (yP5aCJB4Ond8 - wid0 - 1)));
    return 0;
}

