void  main () {
    int s07G9B;
    int DdsQyhO;
    int eJamyLNQcuM;
    int ovkHVi;
    int rogTWvYRSC [(189 - 181)] [8];
    int fjAoNDbcK;
    int mline;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d,%d", &s07G9B, &DdsQyhO);
    for (eJamyLNQcuM = (625 - 625); s07G9B - (261 - 260) >= eJamyLNQcuM; eJamyLNQcuM = eJamyLNQcuM + 1)
        for (ovkHVi = (574 - 574); DdsQyhO -(113 - 112) >= ovkHVi; ovkHVi = ovkHVi + 1)
            scanf ("%d", &rogTWvYRSC[eJamyLNQcuM][ovkHVi]);
    for (eJamyLNQcuM = 0; s07G9B - (268 - 267) >= eJamyLNQcuM; eJamyLNQcuM++) {
        mline = 0;
        fjAoNDbcK = rogTWvYRSC[eJamyLNQcuM][0];
        for (ovkHVi = (650 - 649); DdsQyhO -1 >= ovkHVi; ovkHVi++)
            if (rogTWvYRSC[eJamyLNQcuM][ovkHVi] > fjAoNDbcK) {
                fjAoNDbcK = rogTWvYRSC[eJamyLNQcuM][ovkHVi];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                mline = ovkHVi;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ovkHVi = 0; ovkHVi <= s07G9B - 1; ovkHVi++)
            if (rogTWvYRSC[ovkHVi][mline] < fjAoNDbcK)
                break;
        if (ovkHVi >= s07G9B)
            break;
    }
    if (eJamyLNQcuM >= s07G9B)
        printf ("No");
    else
        printf ("%d+%d", eJamyLNQcuM, mline);
    getchar ();
    getchar ();
}

