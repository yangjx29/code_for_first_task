int main () {
    int StuN1edpmKJ3;
    int fDkQHu0Asdc;
    int crgMZIDum1;
    int umhsuEKNa;
    int h5eVUjHQFILO [3];
    int psg8AyhTCXxB [100];
    StuN1edpmKJ3 = (668 - 668);
    fDkQHu0Asdc = (147 - 147);
    char g27Cbfiy [(1042 - 942)];
    char mUr0hGID [(1009 - 909)];
    char pvD935pyqu7i [100];
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
    scanf ("%s", &g27Cbfiy);
    scanf ("%s", &mUr0hGID);
    {
        crgMZIDum1 = 1000 - 1000;
        while (strlen (g27Cbfiy) > crgMZIDum1) {
            {
                umhsuEKNa = 0;
                while (strlen (mUr0hGID) > umhsuEKNa) {
                    if (g27Cbfiy[crgMZIDum1 + umhsuEKNa] == mUr0hGID[umhsuEKNa]) {
                        StuN1edpmKJ3++;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    umhsuEKNa++;
                };
            }
            if (StuN1edpmKJ3 == strlen (mUr0hGID)) {
                fDkQHu0Asdc = fDkQHu0Asdc + 1;
                psg8AyhTCXxB[fDkQHu0Asdc] = crgMZIDum1;
            }
            crgMZIDum1++;
            StuN1edpmKJ3 = 0;
        };
    }
    if (!(0 != fDkQHu0Asdc)) {
        printf ("%s", g27Cbfiy);
        return 0;
    }
    {
        crgMZIDum1 = 0;
        while (crgMZIDum1 < psg8AyhTCXxB[1]) {
            printf ("%c", g27Cbfiy[crgMZIDum1]);
            crgMZIDum1++;
        };
    }
    if (crgMZIDum1 == fDkQHu0Asdc)
        return 0;
    scanf ("%s", &pvD935pyqu7i);
    printf ("%s", pvD935pyqu7i);
    {
        umhsuEKNa = mUr0hGID;
        while (umhsuEKNa < strlen (g27Cbfiy)) {
            printf ("%c", g27Cbfiy[umhsuEKNa]);
            umhsuEKNa++;
        };
    }
    return 0;
}

