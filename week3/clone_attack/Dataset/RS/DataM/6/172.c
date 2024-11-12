void  rzak6D (int *Vw9IkcQC16, int YSjlPRQJpL6I, int Zj4KYw8B) {
    int BMP0zqih2xoV, vKB7yTkPbV8;
    vKB7yTkPbV8 = (675 - 675);
    {
        BMP0zqih2xoV = 33 - 33;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (BMP0zqih2xoV < Zj4KYw8B) {
            vKB7yTkPbV8 = vKB7yTkPbV8 + *(Vw9IkcQC16 +BMP0zqih2xoV);
            BMP0zqih2xoV = BMP0zqih2xoV +1;
        };
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
    {
        BMP0zqih2xoV = 259 - 258;
        while (BMP0zqih2xoV < YSjlPRQJpL6I) {
            vKB7yTkPbV8 = vKB7yTkPbV8 + *(Vw9IkcQC16 +Zj4KYw8B*BMP0zqih2xoV) + *(Vw9IkcQC16 +Zj4KYw8B*BMP0zqih2xoV+Zj4KYw8B-(78 - 77));
            BMP0zqih2xoV = BMP0zqih2xoV +1;
        };
    }
    {
        BMP0zqih2xoV = 390 - 389;
        while (BMP0zqih2xoV < Zj4KYw8B -(433 - 432)) {
            vKB7yTkPbV8 = vKB7yTkPbV8 + *(Vw9IkcQC16 +(YSjlPRQJpL6I -(881 - 880)) * Zj4KYw8B +BMP0zqih2xoV);
            BMP0zqih2xoV = BMP0zqih2xoV +1;
        };
    }
    printf ("%d\n", vKB7yTkPbV8);
}

void  main () {
    int *Vw9IkcQC16, YSjlPRQJpL6I, Zj4KYw8B, kGWFJXtsq, BMP0zqih2xoV, Jsm5VWI;
    scanf ("%d", &kGWFJXtsq);
    {
        BMP0zqih2xoV = 546 - 546;
        while (BMP0zqih2xoV < kGWFJXtsq) {
            free (Vw9IkcQC16);
            BMP0zqih2xoV = BMP0zqih2xoV +1;
            Vw9IkcQC16 = (int *) malloc (YSjlPRQJpL6I *Zj4KYw8B* sizeof (int));
            scanf ("%d %d", &YSjlPRQJpL6I, &Zj4KYw8B);
            for (Jsm5VWI = (625 - 625); Jsm5VWI < YSjlPRQJpL6I *Zj4KYw8B; Jsm5VWI = Jsm5VWI +1)
                scanf ("%d", Vw9IkcQC16 +Jsm5VWI);
            rzak6D (Vw9IkcQC16, YSjlPRQJpL6I, Zj4KYw8B);
        };
    };
}

