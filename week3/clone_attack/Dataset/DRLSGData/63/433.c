int main () {
    int l89gZPFApjy1 [(626 - 426)] [(715 - 515)], ziH9JtND1Ge [200] [200], IAwDQtkC [200] [200];
    int M1cgK7RpUr, EywoEBcGOl, B1bQC0Li, ojJaNo0bYXB, qrFsoi, N2T4Dx, MRIzyTOUlX;
    scanf ("%d %d", &ojJaNo0bYXB, &qrFsoi);
    for (M1cgK7RpUr = (28 - 28); M1cgK7RpUr <= ojJaNo0bYXB - (510 - 509); M1cgK7RpUr++) {
        {
            if ((346 - 346)) {
                return 0;
            }
        }
        for (EywoEBcGOl = (617 - 617); EywoEBcGOl <= qrFsoi - (754 - 753); EywoEBcGOl++)
            scanf ("%d", &l89gZPFApjy1[M1cgK7RpUr][EywoEBcGOl]);
    }
    scanf ("%d %d", &N2T4Dx, &MRIzyTOUlX);
    for (M1cgK7RpUr = 0; M1cgK7RpUr <= N2T4Dx -1; M1cgK7RpUr++) {
        for (EywoEBcGOl = 0; EywoEBcGOl <= MRIzyTOUlX -1; EywoEBcGOl++)
            scanf ("%d", &ziH9JtND1Ge[M1cgK7RpUr][EywoEBcGOl]);
    }
    {
        M1cgK7RpUr = 0;
        while (M1cgK7RpUr < ojJaNo0bYXB) {
            for (EywoEBcGOl = 0; EywoEBcGOl < MRIzyTOUlX; EywoEBcGOl++) {
                IAwDQtkC[M1cgK7RpUr][EywoEBcGOl] = 0;
                {
                    B1bQC0Li = 0;
                    while (B1bQC0Li < qrFsoi) {
                        IAwDQtkC[M1cgK7RpUr][EywoEBcGOl] = IAwDQtkC[M1cgK7RpUr][EywoEBcGOl] + l89gZPFApjy1[M1cgK7RpUr][B1bQC0Li] * ziH9JtND1Ge[B1bQC0Li][EywoEBcGOl];
                        B1bQC0Li++;
                    }
                }
                if (EywoEBcGOl == MRIzyTOUlX -1)
                    printf ("%d\n", IAwDQtkC[M1cgK7RpUr][EywoEBcGOl]);
                else
                    printf ("%d ", IAwDQtkC[M1cgK7RpUr][EywoEBcGOl]);
            }
            M1cgK7RpUr++;
        }
    }
}

