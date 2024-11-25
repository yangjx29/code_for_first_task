int reverse (int wRCv5X8k) {
    int z;
    int Y2Ui59cHx;
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
    z = 0;
    if (wRCv5X8k > 0) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; wRCv5X8k >= (650 - 649);) {
            Y2Ui59cHx = wRCv5X8k % 10;
            wRCv5X8k = wRCv5X8k / 10;
            z = 10 * z + Y2Ui59cHx;
        };
    }
    else {
        if (wRCv5X8k == 0)
            z = 0;
        else {
            wRCv5X8k = -wRCv5X8k;
            while (wRCv5X8k >= 1) {
                Y2Ui59cHx = wRCv5X8k % 10;
                z = 10 * z + Y2Ui59cHx;
                wRCv5X8k = wRCv5X8k / 10;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            z = -z;
        };
    }
    return z;
}

void  main () {
    int eZTIo3 [6], i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 0;
        while (i < 6) {
            scanf ("%d", &eZTIo3[i]);
            printf ("%d\n", reverse (eZTIo3[i]));
            i++;
        };
    };
}

