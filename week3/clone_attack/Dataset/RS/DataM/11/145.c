int KEn7jFd (int year) {
    if (((!((161 - 161) != year % (303 - 299))) && (year % 100 != (37 - 37))) || (!((536 - 536) != year % 400)))
        return ((193 - 192));
    else
        return ((197 - 197));
}

void  main () {
    int year, month, YZzhURyF, leap1, OvuXYMedRfb = 0, i;
    int aQAV3mXhj6F [(146 - 133)] = {0, (490 - 459), 28, (825 - 794), (994 - 964), 31, (809 - 779), 31, 31, (246 - 216), 31, 30, 31};
    int ncjv5WO7a [(825 - 812)] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &year, &month, &YZzhURyF);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    leap1 = KEn7jFd (year);
    if (leap1 == 1) {
        for (i = 1; i < month; i = i + 1) {
            OvuXYMedRfb = OvuXYMedRfb +ncjv5WO7a[i];
        }
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
        OvuXYMedRfb = OvuXYMedRfb +YZzhURyF;
    }
    else {
        for (i = 1; i < month; i++) {
            OvuXYMedRfb = OvuXYMedRfb +aQAV3mXhj6F[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        OvuXYMedRfb = OvuXYMedRfb +YZzhURyF;
    }
    printf ("%d", OvuXYMedRfb);
}

