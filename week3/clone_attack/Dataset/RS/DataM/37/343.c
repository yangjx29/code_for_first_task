int main () {
    int SDME30NO;
    int i;
    int KdevGcTE;
    int GzKrpIJ9dLEn;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char s [10] [100];
    scanf ("%d", &SDME30NO);
    for (KdevGcTE = (181 - 181); KdevGcTE < SDME30NO; KdevGcTE++) {
        int ko8CIAkxep;
        int zZ6nSEKtfsY [26] = {(512 - 512)};
        int gCyXFlgvnY [26];
        ko8CIAkxep = 100000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", s[KdevGcTE]);
        for (i = strlen (s[KdevGcTE]) - (922 - 921); i > -1; i = i - 1) {
            GzKrpIJ9dLEn = s[KdevGcTE][i] - 97;
            zZ6nSEKtfsY[GzKrpIJ9dLEn]++;
            if (zZ6nSEKtfsY[GzKrpIJ9dLEn] == 1)
                gCyXFlgvnY[GzKrpIJ9dLEn] = i;
        }
        for (GzKrpIJ9dLEn = 0; GzKrpIJ9dLEn < 26; GzKrpIJ9dLEn = GzKrpIJ9dLEn +1) {
            if (zZ6nSEKtfsY[GzKrpIJ9dLEn] == 1)
                if (gCyXFlgvnY[GzKrpIJ9dLEn] <= ko8CIAkxep)
                    ko8CIAkxep = gCyXFlgvnY[GzKrpIJ9dLEn];
        }
        if (ko8CIAkxep < 100000)
            printf ("%c\n", s[KdevGcTE][ko8CIAkxep]);
        else
            printf ("no\n");
    };
}

