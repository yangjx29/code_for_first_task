int main () {
    int fvQ94A8;
    int Oe76sF5odfLl;
    int hGpfOdMrtXo;
    int t;
    int C1ipE6rn09q;
    scanf ("%d", &C1ipE6rn09q);
    {
        t = 330 - 330;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (C1ipE6rn09q > t) {
            int a [100] [100] = {0};
            int f5bIUnZo;
            int j2JzoE7FPBQ;
            int MlNJrF9y0;
            MlNJrF9y0 = 0;
            t = t + 1;
            scanf ("%d %d", &f5bIUnZo, &j2JzoE7FPBQ);
            for (fvQ94A8 = 0; fvQ94A8 < f5bIUnZo; fvQ94A8 = fvQ94A8 + 1)
                for (Oe76sF5odfLl = 0; Oe76sF5odfLl < j2JzoE7FPBQ; Oe76sF5odfLl++)
                    scanf ("%d", &a[fvQ94A8][Oe76sF5odfLl]);
            if (f5bIUnZo == 1)
                for (fvQ94A8 = 0; j2JzoE7FPBQ > fvQ94A8; fvQ94A8 = fvQ94A8 + 1)
                    MlNJrF9y0 = MlNJrF9y0 +a[0][fvQ94A8];
            else if (!(1 != j2JzoE7FPBQ)) {
                Oe76sF5odfLl = 0;
                while (Oe76sF5odfLl < f5bIUnZo) {
                    MlNJrF9y0 = MlNJrF9y0 +a[Oe76sF5odfLl][0];
                    Oe76sF5odfLl++;
                };
            }
            else {
                for (fvQ94A8 = 0; fvQ94A8 < j2JzoE7FPBQ; fvQ94A8++)
                    MlNJrF9y0 = MlNJrF9y0 +a[0][fvQ94A8] + a[f5bIUnZo - 1][fvQ94A8];
                for (Oe76sF5odfLl = 1; Oe76sF5odfLl < f5bIUnZo - 1; Oe76sF5odfLl++)
                    MlNJrF9y0 = MlNJrF9y0 +a[Oe76sF5odfLl][0] + a[Oe76sF5odfLl][j2JzoE7FPBQ - 1];
            }
            printf ("%d\n", MlNJrF9y0);
        };
    };
}

