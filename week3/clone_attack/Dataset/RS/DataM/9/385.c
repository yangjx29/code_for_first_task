int main () {
    int aRkVtr;
    int OKRU4MZW1N;
    int Y6jy345;
    int je548JfKuRbC;
    int n;
    int XLF1i2aR9T [100];
    int yKvfruq [100];
    int whu7oTOlNp;
    aRkVtr = (916 - 916);
    OKRU4MZW1N = (987 - 987);
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
    char v19csaPTJML [100] [10];
    char RARcBuyY [100] [10];
    char HRMj81rb9KA [10];
    scanf ("%d", &n);
    {
        Y6jy345 = 0;
        while (n > Y6jy345) {
            Y6jy345++;
            scanf ("%s", HRMj81rb9KA);
            scanf ("%d", &whu7oTOlNp);
            if (whu7oTOlNp >= 60) {
                XLF1i2aR9T[aRkVtr] = whu7oTOlNp;
                strcpy (v19csaPTJML[aRkVtr], HRMj81rb9KA);
                aRkVtr = aRkVtr + 1;
            }
            else {
                yKvfruq[OKRU4MZW1N] = whu7oTOlNp;
                strcpy (RARcBuyY[OKRU4MZW1N], HRMj81rb9KA);
                OKRU4MZW1N++;
            };
        };
    }
    {
        Y6jy345 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (Y6jy345 <= aRkVtr) {
            {
                je548JfKuRbC = 0;
                while (je548JfKuRbC < aRkVtr - Y6jy345) {
                    if (XLF1i2aR9T[je548JfKuRbC] < XLF1i2aR9T[je548JfKuRbC + 1]) {
                        whu7oTOlNp = XLF1i2aR9T[je548JfKuRbC];
                        XLF1i2aR9T[je548JfKuRbC] = XLF1i2aR9T[je548JfKuRbC + 1];
                        XLF1i2aR9T[je548JfKuRbC + 1] = whu7oTOlNp;
                        strcpy (HRMj81rb9KA, v19csaPTJML[je548JfKuRbC]);
                        strcpy (v19csaPTJML[je548JfKuRbC], v19csaPTJML[je548JfKuRbC + 1]);
                        strcpy (v19csaPTJML[je548JfKuRbC + 1], HRMj81rb9KA);
                    }
                    je548JfKuRbC++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Y6jy345++;
        };
    }
    {
        Y6jy345 = 0;
        while (Y6jy345 < aRkVtr) {
            puts (v19csaPTJML [Y6jy345]);
            Y6jy345++;
        };
    }
    {
        Y6jy345 = 0;
        while (Y6jy345 < OKRU4MZW1N) {
            puts (RARcBuyY [Y6jy345]);
            Y6jy345++;
        };
    }
    return 0;
}

