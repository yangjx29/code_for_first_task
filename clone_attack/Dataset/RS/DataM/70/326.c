double  dis (double  NBqEX4, double  y1, double  iPOHWI, double  lDad3bJYB) {
    double  x;
    x = pow (iPOHWI - NBqEX4, 2);
    double  dis;
    double  VfhQrsP;
    VfhQrsP = pow (lDad3bJYB - y1, 2);
    dis = sqrt (x + VfhQrsP);
    return dis;
    return 0;
}

int main () {
    int h4Oo6ZJ8;
    int S4cuyPVrnT;
    double  x [100];
    double  VfhQrsP [100];
    int n;
    double  prhzRAo;
    prhzRAo = 0;
    cin >> n;
    {
        h4Oo6ZJ8 = 0;
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
        while (h4Oo6ZJ8 < n) {
            cin >> x[h4Oo6ZJ8] >> VfhQrsP[h4Oo6ZJ8];
            h4Oo6ZJ8 = h4Oo6ZJ8 + 1;
        };
    }
    {
        h4Oo6ZJ8 = 0;
        while (h4Oo6ZJ8 < n) {
            {
                S4cuyPVrnT = 0;
                while (S4cuyPVrnT < n) {
                    if (dis (x[h4Oo6ZJ8], VfhQrsP[h4Oo6ZJ8], x[S4cuyPVrnT], VfhQrsP[S4cuyPVrnT]) > prhzRAo)
                        prhzRAo = dis (x[h4Oo6ZJ8], VfhQrsP[h4Oo6ZJ8], x[S4cuyPVrnT], VfhQrsP[S4cuyPVrnT]);
                    S4cuyPVrnT++;
                };
            }
            h4Oo6ZJ8++;
        };
    }
    printf ("%.4f\n", prhzRAo);
    return 0;
}

