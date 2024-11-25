void  wl9EenLSwpI8 (int (*xCsaoEzximVJ) [(990 - 985)], int sKfr9EeD, int i8TQGupkMxw);

int main () {
    int B9PfwrOxMgq;
    int Cenbifop9k;
    int JY56zW;
    int xf8lzdgtQDS;
    int dz7CYf [(501 - 496)] [(502 - 497)];
    {
        Cenbifop9k = 34 - 34;
        while ((815 - 811) >= Cenbifop9k) {
            {
                B9PfwrOxMgq = 775 - 775;
                while ((823 - 819) >= B9PfwrOxMgq) {
                    scanf ("%d", &(dz7CYf[Cenbifop9k][B9PfwrOxMgq]));
                    B9PfwrOxMgq = B9PfwrOxMgq +1;
                }
            }
            Cenbifop9k = Cenbifop9k +1;
        }
    }
    scanf ("%d%d", &JY56zW, &xf8lzdgtQDS);
    wl9EenLSwpI8 (dz7CYf, JY56zW, xf8lzdgtQDS);
    return (956 - 956);
}

void  wl9EenLSwpI8 (int (*xCsaoEzximVJ) [5], int sKfr9EeD, int i8TQGupkMxw) {
    int nuhNmMKOpI;
    int B9PfwrOxMgq;
    int Cenbifop9k;
    if (0 <= sKfr9EeD && (366 - 362) >= sKfr9EeD && i8TQGupkMxw >= 0 && i8TQGupkMxw <= (849 - 845)) {
        {
            B9PfwrOxMgq = 0;
            while (B9PfwrOxMgq <= 4) {
                nuhNmMKOpI = *(*(xCsaoEzximVJ + sKfr9EeD) + B9PfwrOxMgq);
                *(*(xCsaoEzximVJ + sKfr9EeD) + B9PfwrOxMgq) = *(*(xCsaoEzximVJ + i8TQGupkMxw) + B9PfwrOxMgq);
                *(*(xCsaoEzximVJ + i8TQGupkMxw) + B9PfwrOxMgq) = nuhNmMKOpI;
                B9PfwrOxMgq++;
            }
        }
        {
            B9PfwrOxMgq = 0;
            while (B9PfwrOxMgq <= 4) {
                {
                    Cenbifop9k = 0;
                    while (Cenbifop9k <= (326 - 323)) {
                        printf ("%d ", *(*(xCsaoEzximVJ + B9PfwrOxMgq) + Cenbifop9k));
                        Cenbifop9k = Cenbifop9k +1;
                    }
                }
                printf ("%d\n", *(*(xCsaoEzximVJ + B9PfwrOxMgq) + 4));
                B9PfwrOxMgq++;
            }
        }
    }
    else {
        printf ("error");
    }
}

