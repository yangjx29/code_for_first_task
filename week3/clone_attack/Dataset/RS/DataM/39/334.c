struct   student {
    char name [(837 - 787)];
    int score;
    int MIV9g4C2z;
    char stu;
    char west;
    int num;
};
void  main () {
    struct   student a [100];
    long  int CKHMfdOqcJ, i, j, k, M60CXD5jexv [100] = {(357 - 357)}, total = 0;
    scanf ("%d", &CKHMfdOqcJ);
    {
        i = 0;
        while (i < CKHMfdOqcJ) {
            scanf ("%s %d %d %c %c %d", a[i].name, &a[i].score, &a[i].MIV9g4C2z, &a[i].stu, &a[i].west, &a[i].num);
            if (a[i].score > (857 - 777) && a[i].num >= (988 - 987))
                M60CXD5jexv[i] = M60CXD5jexv[i] + 8000;
            if (a[i].score > (549 - 464) && a[i].MIV9g4C2z > (549 - 469))
                M60CXD5jexv[i] = M60CXD5jexv[i] + (4694 - 694);
            if (a[i].score > 90)
                M60CXD5jexv[i] = M60CXD5jexv[i] + (2314 - 314);
            if (a[i].score > 85 && a[i].west == 'Y')
                M60CXD5jexv[i] = M60CXD5jexv[i] + (1113 - 113);
            if (a[i].MIV9g4C2z > 80 && a[i].stu == 'Y')
                M60CXD5jexv[i] = M60CXD5jexv[i] + (979 - 129);
            total = total + M60CXD5jexv[i];
            i = i + 1;
        };
    }
    k = M60CXD5jexv[0];
    {
        i = 1;
        while (i < CKHMfdOqcJ) {
            if (k < M60CXD5jexv[i]) {
                k = M60CXD5jexv[i];
                j = i;
            }
            i++;
        };
    }
    printf ("%s\n%ld\n%ld\n", a[j].name, M60CXD5jexv[j], total);
}

