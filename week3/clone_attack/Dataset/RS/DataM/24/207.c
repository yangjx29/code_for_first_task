int main () {
    int wnSPQu;
    int JBHTaVhpb;
    int rhoIHrS8aOKY;
    int hcjVQTF1WfX;
    int YNcXCDZaOYG;
    int nb5XwdrKOF;
    wnSPQu = (994 - 994);
    JBHTaVhpb = (276 - 276);
    rhoIHrS8aOKY = 0;
    hcjVQTF1WfX = 0;
    char Qlh7R6U1LAo [(1344 - 344)];
    char YpU0se [50] [20];
    gets (Qlh7R6U1LAo);
    nb5XwdrKOF = strlen (Qlh7R6U1LAo);
    {
        YNcXCDZaOYG = 0;
        while (nb5XwdrKOF > YNcXCDZaOYG) {
            if (!(((170 - 105) <= Qlh7R6U1LAo[YNcXCDZaOYG] && 90 >= Qlh7R6U1LAo[YNcXCDZaOYG]) || ((351 - 255) <= Qlh7R6U1LAo[YNcXCDZaOYG] && 122 >= Qlh7R6U1LAo[YNcXCDZaOYG]) || !(39 != Qlh7R6U1LAo[YNcXCDZaOYG]) || !((150 - 118) != Qlh7R6U1LAo[YNcXCDZaOYG])))
                Qlh7R6U1LAo[YNcXCDZaOYG] = '\0';
            YNcXCDZaOYG = YNcXCDZaOYG +1;
        };
    }
    {
        YNcXCDZaOYG = 0;
        while (Qlh7R6U1LAo[YNcXCDZaOYG] != '\0') {
            if (Qlh7R6U1LAo[YNcXCDZaOYG] != ' ' && Qlh7R6U1LAo[YNcXCDZaOYG] != '\0')
                YpU0se[wnSPQu][JBHTaVhpb++] = Qlh7R6U1LAo[YNcXCDZaOYG];
            else {
                YpU0se[wnSPQu][JBHTaVhpb] = '\0';
                JBHTaVhpb = 0;
                wnSPQu++;
            }
            YNcXCDZaOYG++;
        };
    }
    YpU0se[wnSPQu][JBHTaVhpb] = '\0';
    wnSPQu++;
    {
        YNcXCDZaOYG = 0;
        while (YNcXCDZaOYG < wnSPQu) {
            if (strlen (YpU0se[YNcXCDZaOYG]) > strlen (YpU0se[rhoIHrS8aOKY]))
                rhoIHrS8aOKY = YNcXCDZaOYG;
            if (strlen (YpU0se[YNcXCDZaOYG]) < strlen (YpU0se[hcjVQTF1WfX]))
                hcjVQTF1WfX = YNcXCDZaOYG;
            YNcXCDZaOYG++;
        };
    }
    printf ("%s\n%s", YpU0se[rhoIHrS8aOKY], YpU0se[hcjVQTF1WfX]);
}

