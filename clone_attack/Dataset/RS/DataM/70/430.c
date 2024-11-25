int main () {
    double  Bb95IeD;
    double  ECHUhcKRYJ2s [200];
    double  vlg4RXmTo7 [200];
    double  finNBzpkVb7 [200] [200];
    Bb95IeD = 0;
    int IZcrwQY7h90;
    int i;
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
    int nRWrnk;
    scanf ("%d", &IZcrwQY7h90);
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
        while (i < IZcrwQY7h90) {
            scanf ("%lf%lf", &ECHUhcKRYJ2s[i], &vlg4RXmTo7[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (IZcrwQY7h90 -1 > i) {
            for (nRWrnk = i + 1; IZcrwQY7h90 > nRWrnk; nRWrnk = nRWrnk + 1) {
                finNBzpkVb7[i][nRWrnk] = sqrt ((ECHUhcKRYJ2s[i] - ECHUhcKRYJ2s[nRWrnk]) * (ECHUhcKRYJ2s[i] - ECHUhcKRYJ2s[nRWrnk]) + (vlg4RXmTo7[i] - vlg4RXmTo7[nRWrnk]) * (vlg4RXmTo7[i] - vlg4RXmTo7[nRWrnk]));
                if (Bb95IeD < finNBzpkVb7[i][nRWrnk])
                    Bb95IeD = finNBzpkVb7[i][nRWrnk];
            }
            i = i + 1;
        };
    }
    printf ("%.4f\n", Bb95IeD);
    return 0;
}

