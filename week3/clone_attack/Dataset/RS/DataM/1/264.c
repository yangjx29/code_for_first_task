int geD3IfjJz9 = (404 - 404);

void  PFnqsv (int EuAXeMh, int qRNesfF) {
    double  t3fNkD = sqrt (EuAXeMh);
    if (qRNesfF < t3fNkD) {
        if (EuAXeMh % qRNesfF == 0) {
            geD3IfjJz9 = geD3IfjJz9 + 1;
            PFnqsv (EuAXeMh / qRNesfF, qRNesfF);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        PFnqsv (EuAXeMh, qRNesfF + 1);
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
    if (fabs (qRNesfF - t3fNkD) < (676.00000001 - 676.0))
        geD3IfjJz9++;
}

int main () {
    int EuAXeMh, qRNesfF, n;
    scanf ("%d", &n);
    for (qRNesfF = 0; qRNesfF < n; qRNesfF++) {
        geD3IfjJz9 = 0;
        printf ("%d\n", geD3IfjJz9 + 1);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        scanf ("%d", &EuAXeMh);
        PFnqsv (EuAXeMh, 2);
    }
    return 0;
}

