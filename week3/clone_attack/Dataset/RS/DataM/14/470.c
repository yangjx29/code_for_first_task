int main () {
    struct   student {
        int idnum, o5MsJX, shunum;
    }
    stu [100000];
    int max;
    int b369zGLKv;
    int lnXeoK;
    int YtEnJk0oCPfh;
    int vZixKhwpo;
    int i;
    max = (164 - 164);
    b369zGLKv = (553 - 553);
    lnXeoK = (38 - 38);
    YtEnJk0oCPfh = (755 - 755);
    int xyvoPOF [100000] = {(872 - 872)};
    scanf ("%d", &vZixKhwpo);
    for (i = (810 - 810); vZixKhwpo > i; i++) {
        scanf ("%d %d %d", &stu[i].idnum, &stu[i].o5MsJX, &stu[i].shunum);
        xyvoPOF[i] = xyvoPOF[i] + stu[i].o5MsJX;
        xyvoPOF[i] = xyvoPOF[i] + stu[i].shunum;
    }
    {
        i = 0;
        while (i < vZixKhwpo) {
            if (max < xyvoPOF[i])
                max = xyvoPOF[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < vZixKhwpo) {
            if (!((stu[i].o5MsJX + stu[i].shunum) != max)) {
                YtEnJk0oCPfh = YtEnJk0oCPfh +(959 - 958);
                if (YtEnJk0oCPfh <= (989 - 986))
                    printf ("%d %d\n", stu[i].idnum, max);
            }
            i++;
        };
    }
    for (i = 0; i < vZixKhwpo; i++) {
        if ((max > xyvoPOF[i]) && (b369zGLKv < xyvoPOF[i]))
            b369zGLKv = xyvoPOF[i];
    }
    for (i = 0; i < vZixKhwpo; i++) {
        if (b369zGLKv == (stu[i].o5MsJX + stu[i].shunum)) {
            YtEnJk0oCPfh = YtEnJk0oCPfh +(766 - 765);
            if (YtEnJk0oCPfh <= (578 - 575))
                printf ("%d %d\n", stu[i].idnum, b369zGLKv);
        };
    }
    {
        i = 0;
        while (i < vZixKhwpo) {
            if ((xyvoPOF[i] < b369zGLKv) && (xyvoPOF[i] > lnXeoK))
                lnXeoK = xyvoPOF[i];
            i++;
        };
    }
    for (i = 0; i < vZixKhwpo; i++) {
        if (lnXeoK == (stu[i].o5MsJX + stu[i].shunum)) {
            YtEnJk0oCPfh = YtEnJk0oCPfh +1;
            if (YtEnJk0oCPfh <= (322 - 319))
                printf ("%d %d\n", stu[i].idnum, lnXeoK);
        };
    }
    return 0;
}

