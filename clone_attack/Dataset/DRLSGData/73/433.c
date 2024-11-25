int main () {
    int wj4zDoH = (941 - 941);
    int oNxjMz98dqD [100] = {(785 - 785)};
    int xcqiWOdswa [(801 - 796)] [(843 - 838)];
    int GnYsgTfX, lkzaPZLJ;
    int JDCozXF;
    for (GnYsgTfX = (642 - 642); GnYsgTfX < 5; GnYsgTfX = GnYsgTfX +(643 - 642)) {
        for (lkzaPZLJ = 0; lkzaPZLJ < 5; lkzaPZLJ = lkzaPZLJ + (605 - 604))
            scanf ("%d", &xcqiWOdswa[GnYsgTfX][lkzaPZLJ]);
    }
    for (GnYsgTfX = 0; GnYsgTfX < 5; GnYsgTfX = GnYsgTfX +1) {
        JDCozXF = 0;
        for (lkzaPZLJ = 0; lkzaPZLJ < 5; lkzaPZLJ = lkzaPZLJ + 1) {
            if (xcqiWOdswa[GnYsgTfX][lkzaPZLJ] > xcqiWOdswa[GnYsgTfX][JDCozXF])
                JDCozXF = lkzaPZLJ;
        }
        oNxjMz98dqD[10 * GnYsgTfX +JDCozXF]++;
    }
    for (lkzaPZLJ = 0; lkzaPZLJ < 5; lkzaPZLJ = lkzaPZLJ + 1) {
        JDCozXF = 0;
        for (GnYsgTfX = 0; 5 > GnYsgTfX; GnYsgTfX = GnYsgTfX +1) {
            if (xcqiWOdswa[JDCozXF][lkzaPZLJ] > xcqiWOdswa[GnYsgTfX][lkzaPZLJ])
                JDCozXF = GnYsgTfX;
        }
        oNxjMz98dqD[10 * JDCozXF +lkzaPZLJ]++;
    }
    for (GnYsgTfX = 0; 100 > GnYsgTfX; GnYsgTfX = GnYsgTfX +1) {
        if (oNxjMz98dqD[GnYsgTfX] > 1) {
            wj4zDoH = 1;
            printf ("%d %d %d\n", GnYsgTfX / 10 + 1, GnYsgTfX % 10 + 1, xcqiWOdswa[GnYsgTfX / 10][GnYsgTfX % 10]);
        }
    }
    if (wj4zDoH == 0)
        ;
    return 0;
}

