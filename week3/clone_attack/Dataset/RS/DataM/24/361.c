int main () {
    char letter [1000];
    gets (letter);
    char Omy8jOSb [50] [20];
    int peas5jMHWOl, vm8cLICQ2bk, IdOWCQz = (506 - 506), eaV40QDLb1pj = 0, tmp1, tmp2, FmgNQcokqPGj;
    int Psg3RlLn = 0, KaFPLkI4DOZw = 0;
    peas5jMHWOl = strlen (letter);
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
    for (vm8cLICQ2bk = 0; peas5jMHWOl > vm8cLICQ2bk; vm8cLICQ2bk++) {
        if (letter[vm8cLICQ2bk] != ' ') {
            Omy8jOSb[IdOWCQz][eaV40QDLb1pj] = letter[vm8cLICQ2bk];
            eaV40QDLb1pj++;
        }
        if (!(' ' != letter[vm8cLICQ2bk])) {
            Omy8jOSb[IdOWCQz][eaV40QDLb1pj] = '\0';
            IdOWCQz = IdOWCQz +1;
            eaV40QDLb1pj = 0;
        }
        if (vm8cLICQ2bk == peas5jMHWOl - 1) {
            Omy8jOSb[IdOWCQz][eaV40QDLb1pj] = '\0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    tmp1 = strlen (Omy8jOSb[0]);
    tmp2 = strlen (Omy8jOSb[0]);
    {
        vm8cLICQ2bk = 1;
        while (vm8cLICQ2bk <= IdOWCQz) {
            FmgNQcokqPGj = strlen (Omy8jOSb[vm8cLICQ2bk]);
            if (tmp1 < FmgNQcokqPGj) {
                tmp1 = FmgNQcokqPGj;
                Psg3RlLn = vm8cLICQ2bk;
            }
            if (tmp2 > FmgNQcokqPGj) {
                KaFPLkI4DOZw = vm8cLICQ2bk;
                tmp2 = FmgNQcokqPGj;
            }
            vm8cLICQ2bk++;
        };
    }
    printf ("%s\n", Omy8jOSb[Psg3RlLn]);
    printf ("%s\n", Omy8jOSb[KaFPLkI4DOZw]);
    return 0;
}

