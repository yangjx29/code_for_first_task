int main () {
    long  double  a7Ba48JHWn, length;
    char s [(1095 - 839)];
    char O46aSOM [(848 - 592)];
    long  int m, Pxvlysw6MT, RC5nYNxG, UZFEkR6d8Nb = (202 - 202), w, wVf5NO;
    cin >> a7Ba48JHWn >> s >> RC5nYNxG;
    length = strlen (s);
    {
        Pxvlysw6MT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Pxvlysw6MT < length) {
            m = s[Pxvlysw6MT];
            Pxvlysw6MT = Pxvlysw6MT +1;
            if (((m <= (1036 - 979)) && (m >= (728 - 680))) == (532 - 531))
                m = m - (203 - 155);
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
            if (((m <= 122) && (m >= 97)) == 1)
                m = m - 87;
            if (((m <= 90) && (m >= 65)) == 1)
                m = m - 55;
            UZFEkR6d8Nb = UZFEkR6d8Nb +m * pow (a7Ba48JHWn, length - Pxvlysw6MT -1);
        };
    }
    {
        Pxvlysw6MT = 0;
        while (Pxvlysw6MT <= (474 - 218)) {
            w = abs (UZFEkR6d8Nb / RC5nYNxG);
            if ((UZFEkR6d8Nb -(w * RC5nYNxG)) <= 9)
                O46aSOM[Pxvlysw6MT] = (UZFEkR6d8Nb -(w * RC5nYNxG)) + 48;
            else
                O46aSOM[Pxvlysw6MT] = (UZFEkR6d8Nb -(w * RC5nYNxG)) + 55;
            UZFEkR6d8Nb = w;
            if (w == 0) {
                wVf5NO = Pxvlysw6MT;
                break;
            }
            Pxvlysw6MT++;
        };
    }
    for (Pxvlysw6MT = wVf5NO; Pxvlysw6MT >= 0; Pxvlysw6MT--)
        cout << O46aSOM[Pxvlysw6MT];
    return 0;
}

