int nnz156RPrGw, Z7dDYJjz4k;
int HZHrYpcmkK [(102 - 62)] [(233 - 193)];
double  ehqVPcOjUy [(608 - 568)] [(722 - 682)];

int main () {
    int JqeM6O9g, N12tLa;
    scanf ("%d%d", &nnz156RPrGw, &Z7dDYJjz4k);
    memset (ehqVPcOjUy, (464 - 464), sizeof (ehqVPcOjUy));
    {
        JqeM6O9g = (133 - 133);
        for (; JqeM6O9g < nnz156RPrGw;) {
            {
                N12tLa = (622 - 622);
                for (; N12tLa < Z7dDYJjz4k;) {
                    scanf ("%d", &HZHrYpcmkK[JqeM6O9g][N12tLa]);
                    N12tLa++;
                }
            }
            JqeM6O9g++;
        }
    }
    {
        JqeM6O9g = (28 - 28);
        while (JqeM6O9g < nnz156RPrGw) {
            {
                N12tLa = (516 - 516);
                while (N12tLa < Z7dDYJjz4k) {
                    int DEURqp5KaT = (436 - 436), mBhs382oMIl = (785 - 785);
                    if (JqeM6O9g > 0) {
                        mBhs382oMIl = mBhs382oMIl + HZHrYpcmkK[JqeM6O9g -(620 - 619)][N12tLa];
                        DEURqp5KaT++;
                    }
                    if (JqeM6O9g < nnz156RPrGw - (853 - 852)) {
                        DEURqp5KaT++;
                        mBhs382oMIl = mBhs382oMIl + HZHrYpcmkK[JqeM6O9g +(495 - 494)][N12tLa];
                    }
                    if (N12tLa > 0) {
                        mBhs382oMIl = mBhs382oMIl + HZHrYpcmkK[JqeM6O9g][N12tLa -1];
                        DEURqp5KaT++;
                    }
                    if (N12tLa < Z7dDYJjz4k -1) {
                        DEURqp5KaT++;
                        mBhs382oMIl = mBhs382oMIl + HZHrYpcmkK[JqeM6O9g][N12tLa +1];
                    }
                    ehqVPcOjUy[JqeM6O9g][N12tLa] = (double ) mBhs382oMIl / DEURqp5KaT;
                    N12tLa++;
                }
            }
            JqeM6O9g++;
        }
    }
    {
        JqeM6O9g = 0;
        for (; nnz156RPrGw > JqeM6O9g;) {
            {
                N12tLa = 0;
                for (; Z7dDYJjz4k > N12tLa;) {
                    double  rBCxODGJ;
                    rBCxODGJ = HZHrYpcmkK[JqeM6O9g][N12tLa];
                    if (0 < JqeM6O9g &&rBCxODGJ < HZHrYpcmkK[JqeM6O9g -1][N12tLa]) {
                        rBCxODGJ = HZHrYpcmkK[JqeM6O9g -1][N12tLa];
                    }
                    if (nnz156RPrGw - 1 > JqeM6O9g &&rBCxODGJ < HZHrYpcmkK[JqeM6O9g +1][N12tLa]) {
                        rBCxODGJ = HZHrYpcmkK[JqeM6O9g +1][N12tLa];
                    }
                    if (N12tLa > 0 && HZHrYpcmkK[JqeM6O9g][N12tLa -1] > rBCxODGJ) {
                        rBCxODGJ = HZHrYpcmkK[JqeM6O9g][N12tLa -1];
                    }
                    if (N12tLa < Z7dDYJjz4k -1 && HZHrYpcmkK[JqeM6O9g][N12tLa +1] > rBCxODGJ) {
                        rBCxODGJ = HZHrYpcmkK[JqeM6O9g][N12tLa +1];
                    }
                    if (abs (rBCxODGJ - (double ) HZHrYpcmkK[JqeM6O9g][N12tLa]) < 0.000001)
                        printf ("%d %d\n", JqeM6O9g, N12tLa);
                    N12tLa++;
                }
            }
            JqeM6O9g++;
        }
    }
    return 0;
}

