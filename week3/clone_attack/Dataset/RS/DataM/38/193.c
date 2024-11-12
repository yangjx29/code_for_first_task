int main (int argc, char *argv []) {
    int num;
    int i;
    int j;
    scanf ("%d", &num);
    {
        i = 891 - 891;
        while (num > i) {
            int n;
            double  x [101], poNF1A8 = 0, ave, final = 0, result;
            i++;
            scanf ("%d", &n);
            for (j = 0; j < n; j++) {
                scanf ("%lf", &*(x + j));
                poNF1A8 = poNF1A8 + *(x + j);
            }
            ave = poNF1A8 / n;
            {
                j = 0;
                while (j < n) {
                    final = final + (*(x + j) - ave) * (*(x + j) - ave);
                    j++;
                };
            }
            result = sqrt (final / n);
            printf ("%.5f\n", result);
        };
    }
    return 0;
}

