int main () {
    int F3C56zW;
    int cmD9r1nvhSqw;
    int BKdNm17vJFpr [100];
    int HH8otXvJrGj [100];
    int ZAPkt1FXHgT;
    int SIsPac;
    int eDVdMcaYhS1;
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
    scanf ("%d%d", &F3C56zW, &cmD9r1nvhSqw);
    for (ZAPkt1FXHgT = 0; ZAPkt1FXHgT <= F3C56zW -1; ZAPkt1FXHgT = ZAPkt1FXHgT +1) {
        scanf ("%d", &BKdNm17vJFpr[ZAPkt1FXHgT]);
    }
    for (ZAPkt1FXHgT = 0; ZAPkt1FXHgT <= cmD9r1nvhSqw - 1; ZAPkt1FXHgT = ZAPkt1FXHgT +1) {
        scanf ("%d", &HH8otXvJrGj[ZAPkt1FXHgT]);
    }
    {
        ZAPkt1FXHgT = 0;
        while (ZAPkt1FXHgT <= F3C56zW -2) {
            {
                SIsPac = ZAPkt1FXHgT +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (SIsPac <= F3C56zW -1) {
                    if (BKdNm17vJFpr[ZAPkt1FXHgT] > BKdNm17vJFpr[SIsPac]) {
                        eDVdMcaYhS1 = BKdNm17vJFpr[SIsPac];
                        BKdNm17vJFpr[SIsPac] = BKdNm17vJFpr[ZAPkt1FXHgT];
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
                        BKdNm17vJFpr[ZAPkt1FXHgT] = eDVdMcaYhS1;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    SIsPac = SIsPac +1;
                };
            }
            printf ("%d ", BKdNm17vJFpr[ZAPkt1FXHgT]);
            ZAPkt1FXHgT = ZAPkt1FXHgT +1;
        };
    }
    printf ("%d", BKdNm17vJFpr[F3C56zW -1]);
    for (ZAPkt1FXHgT = 0; ZAPkt1FXHgT <= cmD9r1nvhSqw - 2; ++ZAPkt1FXHgT) {
        {
            SIsPac = ZAPkt1FXHgT +1;
            while (SIsPac <= cmD9r1nvhSqw - 1) {
                if (HH8otXvJrGj[ZAPkt1FXHgT] > HH8otXvJrGj[SIsPac]) {
                    eDVdMcaYhS1 = HH8otXvJrGj[SIsPac];
                    HH8otXvJrGj[SIsPac] = HH8otXvJrGj[ZAPkt1FXHgT];
                    HH8otXvJrGj[ZAPkt1FXHgT] = eDVdMcaYhS1;
                }
                ++SIsPac;
            };
        }
        printf (" %d", HH8otXvJrGj[ZAPkt1FXHgT]);
    }
    printf (" %d", HH8otXvJrGj[cmD9r1nvhSqw - 1]);
    return 0;
}

