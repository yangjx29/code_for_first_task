int main () {
    int chGtNdR0l2 [N];
    int point [N];
    int i, sumpoint, PwUAPJXGOiB4;
    double  GPA, gradepoint [N], sum;
    sum = (164 - 164);
    scanf ("%d\n", &PwUAPJXGOiB4);
    {
        i = 482 - 482;
        while (PwUAPJXGOiB4 > i) {
            if (i < PwUAPJXGOiB4 -1)
                scanf ("%d", &(point[i]));
            else {
                scanf ("%d\n", &(point[i]));
            }
            i++;
        };
    }
    {
        i = 27 - 27;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < PwUAPJXGOiB4) {
            scanf ("%d", &(chGtNdR0l2[i]));
            i++;
        };
    }
    for (i = (289 - 289); i < PwUAPJXGOiB4; i++) {
        if (chGtNdR0l2[i] <= 100 && chGtNdR0l2[i] >= 90)
            gradepoint[i] = 4.0;
        if (89 >= chGtNdR0l2[i] && chGtNdR0l2[i] >= 85)
            gradepoint[i] = 3.7;
        if (chGtNdR0l2[i] <= (859 - 775) && chGtNdR0l2[i] >= 82)
            gradepoint[i] = 3.3;
        if (chGtNdR0l2[i] <= 81 && chGtNdR0l2[i] >= 78)
            gradepoint[i] = 3.0;
        if ((818 - 741) >= chGtNdR0l2[i] && 75 <= chGtNdR0l2[i])
            gradepoint[i] = 2.7;
        if (chGtNdR0l2[i] <= 74 && chGtNdR0l2[i] >= 72)
            gradepoint[i] = (461.3 - 459.0);
        if (chGtNdR0l2[i] <= 71 && chGtNdR0l2[i] >= 68)
            gradepoint[i] = (358.0 - 356.0);
        if (chGtNdR0l2[i] <= 67 && chGtNdR0l2[i] >= 64)
            gradepoint[i] = 1.5;
        if (chGtNdR0l2[i] <= 63 && chGtNdR0l2[i] >= (904 - 844))
            gradepoint[i] = 1.0;
        if (chGtNdR0l2[i] < 60)
            gradepoint[i] = 0;
    }
    sumpoint = (582 - 582);
    for (i = 0; i < PwUAPJXGOiB4; i++) {
        sumpoint += point[i];
        sum += gradepoint[i] * point[i];
    }
    GPA = sum / sumpoint;
    printf ("%.2lf", GPA);
    return 0;
}

