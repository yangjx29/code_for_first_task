void  main () {
    int i, CkenC68YKxG = 0, cvDP3ZXd2z, YK2hMi [300], ugEJdbx = 0;
    char TCAN7ngmua1 [300] [20];
    for (; !(EOF == (scanf ("%s ", TCAN7ngmua1[ugEJdbx])));)
        ugEJdbx++;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        while (i < ugEJdbx) {
            YK2hMi[i] = strlen (TCAN7ngmua1[i]);
            i = i + 1;
        };
    }
    {
        cvDP3ZXd2z = 0;
        while (cvDP3ZXd2z < ugEJdbx - 1) {
            printf ("%d,", YK2hMi[cvDP3ZXd2z]);
            cvDP3ZXd2z = cvDP3ZXd2z + 1;
        };
    }
    printf ("%d", YK2hMi[ugEJdbx - 1]);
}

