int main (int smPgRHt, char *argv []) {
    double  s;
    double  Lvoq9y0;
    struct   yuoaLJtin {
        double  ZkVYW93v, AuhG9I7g;
    };
    struct   yuoaLJtin yuoaLJtin [100];
    int n;
    int M78TB6Yl;
    int aK0BgsC;
    scanf ("%d", &n);
    {
        M78TB6Yl = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > M78TB6Yl) {
            scanf ("%lf %lf", &yuoaLJtin[M78TB6Yl].ZkVYW93v, &yuoaLJtin[M78TB6Yl].AuhG9I7g);
            M78TB6Yl = M78TB6Yl +1;
        };
    }
    Lvoq9y0 = 0;
    {
        M78TB6Yl = 0;
        while (M78TB6Yl < n) {
            {
                aK0BgsC = M78TB6Yl +1;
                while (n > aK0BgsC) {
                    s = sqrt (pow (yuoaLJtin[M78TB6Yl].ZkVYW93v - yuoaLJtin[aK0BgsC].ZkVYW93v, 2) + pow (yuoaLJtin[M78TB6Yl].AuhG9I7g - yuoaLJtin[aK0BgsC].AuhG9I7g, 2));
                    aK0BgsC = aK0BgsC + 1;
                    if (s > Lvoq9y0) {
                        Lvoq9y0 = s;
                    };
                };
            }
            M78TB6Yl++;
        };
    }
    printf ("%.4lf", Lvoq9y0);
    return 0;
}

