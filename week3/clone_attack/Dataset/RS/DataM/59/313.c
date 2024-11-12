int main () {
    int Ef5xb0Rm8S = 0;
    int xCBd7JF;
    int uepwo9xR;
    char T6Esoc0 [(991 - 889)] [(173 - 71)];
    scanf ("%d", &uepwo9xR);
    {
        int mRezBuw54 = (648 - 647);
        while (uepwo9xR >= mRezBuw54) {
            for (int gx8cigmFkQH = (177 - 176);
            uepwo9xR >= gx8cigmFkQH; gx8cigmFkQH++) {
                scanf ("%c", &T6Esoc0[mRezBuw54][gx8cigmFkQH]);
                if (!('\n' != T6Esoc0[mRezBuw54][gx8cigmFkQH])) {
                    gx8cigmFkQH--;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            mRezBuw54 = mRezBuw54 + 1;
        };
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
    {
        int mRezBuw54 = (961 - 961);
        while (uepwo9xR + (409 - 408) >= mRezBuw54) {
            T6Esoc0[(769 - 769)][mRezBuw54] = T6Esoc0[uepwo9xR + (917 - 916)][mRezBuw54] = T6Esoc0[mRezBuw54][0] = T6Esoc0[mRezBuw54][uepwo9xR + (26 - 25)] = '#';
            mRezBuw54 = mRezBuw54 + 1;
        };
    }
    scanf ("%d", &xCBd7JF);
    while (xCBd7JF > (260 - 259)) {
        xCBd7JF--;
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
            int mRezBuw54 = (227 - 226);
            while (uepwo9xR >= mRezBuw54) {
                {
                    int gx8cigmFkQH = (278 - 277);
                    while (gx8cigmFkQH <= uepwo9xR) {
                        if (T6Esoc0[mRezBuw54][gx8cigmFkQH] == '@') {
                            if (T6Esoc0[mRezBuw54][gx8cigmFkQH + (971 - 970)] == '.')
                                T6Esoc0[mRezBuw54][gx8cigmFkQH + (656 - 655)] = '$';
                            if (T6Esoc0[mRezBuw54][gx8cigmFkQH - (636 - 635)] == '.')
                                T6Esoc0[mRezBuw54][gx8cigmFkQH - 1] = '$';
                            if (T6Esoc0[mRezBuw54 + 1][gx8cigmFkQH] == '.')
                                T6Esoc0[mRezBuw54 + 1][gx8cigmFkQH] = '$';
                            if (T6Esoc0[mRezBuw54 - 1][gx8cigmFkQH] == '.')
                                T6Esoc0[mRezBuw54 - 1][gx8cigmFkQH] = '$';
                        }
                        gx8cigmFkQH = gx8cigmFkQH + 1;
                    };
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
                mRezBuw54++;
            };
        }
        {
            int mRezBuw54 = 1;
            while (mRezBuw54 <= uepwo9xR) {
                {
                    int gx8cigmFkQH = 1;
                    while (gx8cigmFkQH <= uepwo9xR) {
                        if (T6Esoc0[mRezBuw54][gx8cigmFkQH] == '$')
                            T6Esoc0[mRezBuw54][gx8cigmFkQH] = '@';
                        gx8cigmFkQH++;
                    };
                }
                mRezBuw54++;
            };
        };
    }
    {
        int mRezBuw54 = 1;
        while (mRezBuw54 <= uepwo9xR) {
            {
                int gx8cigmFkQH = 1;
                while (gx8cigmFkQH <= uepwo9xR) {
                    if (T6Esoc0[mRezBuw54][gx8cigmFkQH] == '@')
                        Ef5xb0Rm8S++;
                    gx8cigmFkQH++;
                };
            }
            mRezBuw54++;
        };
    }
    printf ("%d", Ef5xb0Rm8S);
    return 0;
}

