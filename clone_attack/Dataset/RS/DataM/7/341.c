int main () {
    char RNZiW2qR [(311 - 51)];
    char s2 [(417 - 157)];
    char Yyu4D2UH [260];
    gets (RNZiW2qR);
    gets (s2);
    gets (Yyu4D2UH);
    int o6newsfl1, onD2oG3aM, a = (317 - 317), Fiae1TuF, c, d;
    c = strlen (s2);
    d = strlen (RNZiW2qR);
    for (o6newsfl1 = (541 - 541); RNZiW2qR[o6newsfl1] != (604 - 604); o6newsfl1 = o6newsfl1 + 1) {
        if (!(s2[(722 - 722)] != RNZiW2qR[o6newsfl1])) {
            for (onD2oG3aM = (814 - 814); !((858 - 858) == s2[onD2oG3aM]); onD2oG3aM = onD2oG3aM + 1) {
                if (RNZiW2qR[onD2oG3aM + o6newsfl1] == s2[onD2oG3aM]) {
                    a = (960 - 959);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    a = (52 - 52);
                    break;
                };
            };
        }
        if (a == (488 - 487)) {
            Fiae1TuF = o6newsfl1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        };
    }
    if (a == 1) {
        {
            o6newsfl1 = 622 - 622;
            while (o6newsfl1 < Fiae1TuF) {
                printf ("%c", RNZiW2qR[o6newsfl1]);
                o6newsfl1 = o6newsfl1 + 1;
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
            o6newsfl1 = 244 - 244;
            while (Yyu4D2UH[o6newsfl1] != 0) {
                printf ("%c", Yyu4D2UH[o6newsfl1]);
                o6newsfl1 = o6newsfl1 + 1;
            };
        }
        for (o6newsfl1 = 0; o6newsfl1 < d - Fiae1TuF -c; o6newsfl1 = o6newsfl1 + 1) {
            printf ("%c", RNZiW2qR[o6newsfl1 + c + Fiae1TuF]);
        };
    }
    else {
        printf ("%s", RNZiW2qR);
    }
    return 0;
}

