int main () {
    int i;
    int hM3d2iSw6;
    int PHuNdKz;
    int KU5swB9IeYRS;
    int qwJyLmSifrp;
    int hchP26xfbq;
    int HptXVw67Gu;
    int yZ8M2U;
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
    int IfVATYEihRW;
    int Rr9YcSsnvx8;
    int H4kvlS;
    int M8nDjQJi;
    scanf ("%d", &Rr9YcSsnvx8);
    {
        i = 505 - 504;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Rr9YcSsnvx8 >= i) {
            int pi [100001];
            i = i + 1;
            hchP26xfbq = 0;
            KU5swB9IeYRS = 0;
            PHuNdKz = 0;
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
            qwJyLmSifrp = 0;
            scanf ("%d %d", &HptXVw67Gu, &yZ8M2U);
            {
                hM3d2iSw6 = 1;
                while (hM3d2iSw6 <= HptXVw67Gu *yZ8M2U) {
                    scanf ("%d", pi + hM3d2iSw6 - 1);
                    hM3d2iSw6 = hM3d2iSw6 + 1;
                };
            }
            for (IfVATYEihRW = 1; IfVATYEihRW <= yZ8M2U; IfVATYEihRW = IfVATYEihRW +1) {
                PHuNdKz = PHuNdKz +*(pi + IfVATYEihRW -1);
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
                KU5swB9IeYRS = KU5swB9IeYRS +*(pi + HptXVw67Gu *yZ8M2U - IfVATYEihRW);
            }
            {
                H4kvlS = 1;
                while (H4kvlS < HptXVw67Gu -1) {
                    H4kvlS++;
                    qwJyLmSifrp = qwJyLmSifrp + *(pi + H4kvlS *yZ8M2U);
                    hchP26xfbq = hchP26xfbq + *(pi + yZ8M2U - 1 + H4kvlS *yZ8M2U);
                };
            }
            M8nDjQJi = PHuNdKz +KU5swB9IeYRS+qwJyLmSifrp + hchP26xfbq;
            if (HptXVw67Gu == 1 & yZ8M2U == 1) {
                printf ("%d\n", M8nDjQJi / 2);
            }
            else {
                printf ("%d\n", M8nDjQJi);
            };
        };
    }
    return 0;
}

