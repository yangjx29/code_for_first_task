int main (int ZgzW1nY, char *YILoWvMu []) {
    int NpqY1dE5Qw;
    NpqY1dE5Qw = 1;
    char jZp6gw [1000];
    int IQ5gCtIoxsH7;
    char FYqtEH8I [1000] [100];
    int DtP5AJLBeH;
    int iKFjpVrkue4;
    int MaMELh;
    int nN3CDfa [10000] = {0};
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
    int PKA621;
    char J4SIlV3oJHw [100];
    char oVE5fH4UX [100] = "AMA";
    scanf ("%d", &IQ5gCtIoxsH7);
    scanf ("%s", jZp6gw);
    iKFjpVrkue4 = strlen (jZp6gw);
    {
        DtP5AJLBeH = 0;
        while (iKFjpVrkue4 - IQ5gCtIoxsH7 >= DtP5AJLBeH) {
            {
                PKA621 = 0;
                while (IQ5gCtIoxsH7 > PKA621) {
                    FYqtEH8I[DtP5AJLBeH][PKA621] = jZp6gw[DtP5AJLBeH +PKA621];
                    PKA621 = PKA621 +1;
                };
            }
            FYqtEH8I[DtP5AJLBeH][IQ5gCtIoxsH7] = '\0';
            DtP5AJLBeH = DtP5AJLBeH +1;
        };
    }
    {
        PKA621 = 0;
        while (iKFjpVrkue4 - IQ5gCtIoxsH7 >= PKA621) {
            strcpy (J4SIlV3oJHw, FYqtEH8I[PKA621]);
            {
                DtP5AJLBeH = 0;
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
                while (DtP5AJLBeH <= iKFjpVrkue4 - IQ5gCtIoxsH7) {
                    if (strcmp (J4SIlV3oJHw, FYqtEH8I[DtP5AJLBeH]) == 0) {
                        nN3CDfa[PKA621]++;
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
                        };
                    }
                    DtP5AJLBeH = DtP5AJLBeH +1;
                };
            }
            PKA621 = PKA621 +1;
        };
    }
    {
        PKA621 = 0;
        while (PKA621 <= iKFjpVrkue4 - IQ5gCtIoxsH7) {
            if (NpqY1dE5Qw < nN3CDfa[PKA621]) {
                NpqY1dE5Qw = nN3CDfa[PKA621];
            }
            PKA621 = PKA621 +1;
        };
    }
    if (NpqY1dE5Qw == 1)
        ;
    else {
        printf ("%d\n", NpqY1dE5Qw);
        for (PKA621 = 0; PKA621 <= iKFjpVrkue4 - IQ5gCtIoxsH7; PKA621 = PKA621 +1) {
            if (strcmp (oVE5fH4UX, FYqtEH8I[PKA621]) == 0)
                continue;
            else if (nN3CDfa[PKA621] == NpqY1dE5Qw) {
                printf ("%s\n", FYqtEH8I[PKA621]);
                {
                    MaMELh = PKA621 +1;
                    while (MaMELh <= iKFjpVrkue4 - IQ5gCtIoxsH7) {
                        if (strcmp (FYqtEH8I[PKA621], FYqtEH8I[MaMELh]) == 0) {
                            strcpy (FYqtEH8I[MaMELh], oVE5fH4UX);
                        }
                        MaMELh = MaMELh +1;
                    };
                };
            }
            else
                ;
        };
    }
    return 0;
}

