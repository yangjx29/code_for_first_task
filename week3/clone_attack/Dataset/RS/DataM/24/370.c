int main () {
    int riAlb8ux, Pym5pE = 0, ZHeYjoK = 0, UojQw67iFI = 99, b4B8CdFp7tY = 0, f5Z29F6XaKoC, oJmPXU;
    char ktvlPx47ond [(1574 - 574)], qz6Nd7 [50] [20];
    gets (ktvlPx47ond);
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
    for (riAlb8ux = 0; riAlb8ux < 999; riAlb8ux = riAlb8ux + 1) {
        if (!(' ' == ktvlPx47ond[riAlb8ux]) && ktvlPx47ond[riAlb8ux] != '.' && ktvlPx47ond[riAlb8ux] != '\0') {
            qz6Nd7[Pym5pE][ZHeYjoK] = ktvlPx47ond[riAlb8ux];
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
            ZHeYjoK = ZHeYjoK +1;
        }
        else {
            qz6Nd7[Pym5pE][ZHeYjoK] = '\0';
            if (ZHeYjoK < UojQw67iFI) {
                UojQw67iFI = ZHeYjoK;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                f5Z29F6XaKoC = Pym5pE;
            }
            if (ZHeYjoK > b4B8CdFp7tY) {
                b4B8CdFp7tY = ZHeYjoK;
                oJmPXU = Pym5pE;
            }
            Pym5pE++;
            ZHeYjoK = 0;
        }
        if (ktvlPx47ond[riAlb8ux] == '\0' || ktvlPx47ond[riAlb8ux] == '.')
            break;
    }
    printf ("%s\n%s", qz6Nd7[oJmPXU], qz6Nd7[f5Z29F6XaKoC]);
    return 0;
}

