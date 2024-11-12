int main () {
    double  fGSy6RWNYl [100], b [100], PtKbDrm1uYB5 = 0;
    int tVOmhlBA3f, i, bRQkCLXF85mM;
    cin >> tVOmhlBA3f;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tVOmhlBA3f > i) {
            cin >> fGSy6RWNYl[i] >> b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (tVOmhlBA3f > i) {
            {
                bRQkCLXF85mM = i + 1;
                while (bRQkCLXF85mM < tVOmhlBA3f) {
                    if ((fGSy6RWNYl[i] - fGSy6RWNYl[bRQkCLXF85mM]) * (fGSy6RWNYl[i] - fGSy6RWNYl[bRQkCLXF85mM]) + (b[i] - b[bRQkCLXF85mM]) * (b[i] - b[bRQkCLXF85mM]) > PtKbDrm1uYB5) {
                        PtKbDrm1uYB5 = (fGSy6RWNYl[i] - fGSy6RWNYl[bRQkCLXF85mM]) * (fGSy6RWNYl[i] - fGSy6RWNYl[bRQkCLXF85mM]) + (b[i] - b[bRQkCLXF85mM]) * (b[i] - b[bRQkCLXF85mM]);
                    }
                    bRQkCLXF85mM++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf", sqrt (PtKbDrm1uYB5));
    return 0;
}

