int main () {
    int a [100] [100];
    int ECBeQaP0 [100];
    int H9UrMY2S, AVvo90T5SU8, yMJbtu7o, ZoklLT, daRWdphZn, dW8jyZp;
    scanf ("%d", &H9UrMY2S);
    {
        dW8jyZp = 0;
        while (H9UrMY2S > dW8jyZp) {
            scanf ("%d %d", &AVvo90T5SU8, &yMJbtu7o);
            ECBeQaP0[dW8jyZp] = 0;
            {
                ZoklLT = 0;
                while (AVvo90T5SU8 > ZoklLT) {
                    {
                        daRWdphZn = 0;
                        while (daRWdphZn < yMJbtu7o) {
                            scanf ("%d", &a[ZoklLT][daRWdphZn]);
                            daRWdphZn = daRWdphZn + 1;
                        }
                    }
                    ZoklLT = ZoklLT +1;
                }
            }
            {
                ZoklLT = 0;
                while (ZoklLT < AVvo90T5SU8) {
                    ECBeQaP0[dW8jyZp] = ECBeQaP0[dW8jyZp] + a[ZoklLT][0] + a[ZoklLT][yMJbtu7o - 1];
                    ZoklLT = ZoklLT +1;
                }
            }
            {
                daRWdphZn = 0;
                while (daRWdphZn < yMJbtu7o) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    ECBeQaP0[dW8jyZp] = ECBeQaP0[dW8jyZp] + a[0][daRWdphZn] + a[AVvo90T5SU8 -1][daRWdphZn];
                    daRWdphZn = daRWdphZn + 1;
                }
            }
            ECBeQaP0[dW8jyZp] = ECBeQaP0[dW8jyZp] - a[0][0] + a[0][yMJbtu7o - 1] + a[AVvo90T5SU8 -1][0] + a[AVvo90T5SU8 -1][yMJbtu7o - 1];
            dW8jyZp = dW8jyZp + 1;
        }
    }
    {
        dW8jyZp = 0;
        while (H9UrMY2S > dW8jyZp) {
            if (dW8jyZp != H9UrMY2S -1) {
                printf ("%d\n", ECBeQaP0[dW8jyZp]);
            }
            else {
                printf ("%d", ECBeQaP0[dW8jyZp]);
            }
            dW8jyZp = dW8jyZp + 1;
        }
    }
    return 0;
}

