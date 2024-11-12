int main () {
    int GTNlkQBd0, wcrqL3Cfypd2 = (186 - 186), pFb3G0rz [500] = {(168 - 168)}, max = (25 - 25);
    char xv4jxQoq [10000], a [500] [10] = {(788 - 788)}, onMZTAVu0gy3 [10] = {(538 - 538)};
    gets (xv4jxQoq);
    scanf ("%d\n", &GTNlkQBd0);
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
    for (int qT0ChqN4Zvd = 0;
    qT0ChqN4Zvd + GTNlkQBd0 <= strlen (xv4jxQoq); qT0ChqN4Zvd = qT0ChqN4Zvd + 1) {
        int J4PeC5Z = 0;
        {
            int j = 0;
            while (j < GTNlkQBd0) {
                onMZTAVu0gy3[j] = xv4jxQoq[qT0ChqN4Zvd + j];
                j = j + 1;
            };
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
        for (int j = 0;
        j < wcrqL3Cfypd2; j = j + 1)
            if (strcmp (onMZTAVu0gy3, a[j]) == 0) {
                J4PeC5Z = 1;
                pFb3G0rz[j]++;
                break;
            }
        if (J4PeC5Z == 0) {
            strcpy (a[wcrqL3Cfypd2], onMZTAVu0gy3);
            wcrqL3Cfypd2++;
        };
    }
    {
        int qT0ChqN4Zvd = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (qT0ChqN4Zvd < wcrqL3Cfypd2) {
            if (pFb3G0rz[qT0ChqN4Zvd] > max) {
                max = pFb3G0rz[qT0ChqN4Zvd];
            }
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
            qT0ChqN4Zvd = qT0ChqN4Zvd + 1;
        };
    }
    if (max == 0) {
        return 0;
    }
    printf ("%d\n", max + 1);
    {
        int qT0ChqN4Zvd = 0;
        while (qT0ChqN4Zvd < wcrqL3Cfypd2) {
            if (pFb3G0rz[qT0ChqN4Zvd] == max)
                printf ("%s\n", a[qT0ChqN4Zvd]);
            qT0ChqN4Zvd = qT0ChqN4Zvd + 1;
        };
    };
}

