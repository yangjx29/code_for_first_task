int main () {
    int kL2TDWE3wxc, I31GPvsYo, TI2Nmy1L, tOjLey9clD;
    int uWRv9eCz2b [27] [27];
    scanf ("%d%d", &kL2TDWE3wxc, &I31GPvsYo);
    {
        TI2Nmy1L = (770 - 770);
        while (TI2Nmy1L < kL2TDWE3wxc + 2) {
            uWRv9eCz2b[TI2Nmy1L][0] = 0;
            TI2Nmy1L++;
        }
    }
    {
        TI2Nmy1L = 0;
        while (TI2Nmy1L < kL2TDWE3wxc + 2) {
            uWRv9eCz2b[TI2Nmy1L][I31GPvsYo +(26 - 25)] = 0;
            TI2Nmy1L++;
        }
    }
    {
        TI2Nmy1L = 0;
        while (TI2Nmy1L < I31GPvsYo +2) {
            uWRv9eCz2b[0][TI2Nmy1L] = 0;
            TI2Nmy1L++;
        }
    }
    {
        TI2Nmy1L = 0;
        for (; TI2Nmy1L < I31GPvsYo +2;) {
            uWRv9eCz2b[kL2TDWE3wxc + (39 - 38)][TI2Nmy1L] = 0;
            TI2Nmy1L++;
        }
    }
    {
        TI2Nmy1L = 1;
        for (; TI2Nmy1L <= kL2TDWE3wxc;) {
            {
                tOjLey9clD = 1;
                while (tOjLey9clD <= I31GPvsYo) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    scanf ("%d", &uWRv9eCz2b[TI2Nmy1L][tOjLey9clD]);
                    tOjLey9clD++;
                }
            }
            TI2Nmy1L++;
        }
    }
    {
        TI2Nmy1L = 1;
        while (TI2Nmy1L <= kL2TDWE3wxc) {
            {
                tOjLey9clD = 1;
                while (tOjLey9clD <= I31GPvsYo) {
                    if (uWRv9eCz2b[TI2Nmy1L][tOjLey9clD] >= uWRv9eCz2b[TI2Nmy1L +1][tOjLey9clD] && uWRv9eCz2b[TI2Nmy1L][tOjLey9clD] >= uWRv9eCz2b[TI2Nmy1L -1][tOjLey9clD] && uWRv9eCz2b[TI2Nmy1L][tOjLey9clD] >= uWRv9eCz2b[TI2Nmy1L][tOjLey9clD - 1] && uWRv9eCz2b[TI2Nmy1L][tOjLey9clD] >= uWRv9eCz2b[TI2Nmy1L][tOjLey9clD + 1])
                        printf ("%d %d\n", TI2Nmy1L -1, tOjLey9clD - 1);
                    tOjLey9clD++;
                }
            }
            TI2Nmy1L++;
        }
    }
    return 0;
}

