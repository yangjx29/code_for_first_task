int main () {
    int i, mMPQLNGAmB, tVNr1lK, veYPq8RE = 0, EOnugwmvIRzY = 0;
    char words [100] [100];
    char s [1000];
    gets (s);
    int L [100], yazYyUCDMe = strlen (words[0]);
    int cK9dPfguqF [100], min = strlen (words[0]);
    tVNr1lK = 0;
    mMPQLNGAmB = 0;
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
        while (!(0 == s[i])) {
            if (!(' ' != s[i])) {
                s[i] = '\0';
                strcpy (words[mMPQLNGAmB], (s + tVNr1lK));
                mMPQLNGAmB = mMPQLNGAmB + 1;
                tVNr1lK = i + 1;
            }
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
            i++;
        };
    }
    strcpy (words[mMPQLNGAmB], (s + tVNr1lK));
    mMPQLNGAmB++;
    for (i = 1; mMPQLNGAmB > i; i = i + 1) {
        L[i] = strlen (words[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (L[i] > yazYyUCDMe) {
            yazYyUCDMe = L[i];
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
            veYPq8RE = i;
        };
    }
    for (i = 1; i < mMPQLNGAmB; i++) {
        cK9dPfguqF[i] = strlen (words[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (cK9dPfguqF[i] < min) {
            min = cK9dPfguqF[i];
            EOnugwmvIRzY = i;
        };
    }
    printf ("%s\n%s", words[veYPq8RE], words[EOnugwmvIRzY]);
    return 0;
}

