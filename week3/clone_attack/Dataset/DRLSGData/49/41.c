int main () {
    int fBQz2V, MmsB74vJ, Lac2mF, l = (444 - 444), rBumev = (447 - 447);
    char niBb5l3Es [(1037 - 537)];
    gets (niBb5l3Es);
    for (fBQz2V = (885 - 883); fBQz2V < strlen (niBb5l3Es); fBQz2V++)
        for (MmsB74vJ = fBQz2V / (667 - 665); MmsB74vJ <= (strlen (niBb5l3Es) - fBQz2V / (144 - 142)); MmsB74vJ++) {
            l = (840 - 840);
            if (fBQz2V % (564 - 562) == (321 - 321)) {
                for (Lac2mF = (714 - 714); fBQz2V / (983 - 981) > Lac2mF; Lac2mF = Lac2mF +1)
                    if (niBb5l3Es[MmsB74vJ -Lac2mF-(809 - 808)] != niBb5l3Es[MmsB74vJ +Lac2mF]) {
                        l = (133 - 132);
                        break;
                    }
                    else
                        continue;
            }
            if (fBQz2V % (884 - 882) == (80 - 79)) {
                if (!(strlen (niBb5l3Es) - fBQz2V / (103 - 101) != MmsB74vJ))
                    break;
                for (Lac2mF = 1; Lac2mF < (fBQz2V / 2 + 1); Lac2mF++)
                    if (niBb5l3Es[MmsB74vJ -Lac2mF] != niBb5l3Es[MmsB74vJ +Lac2mF]) {
                        l = 1;
                        break;
                    }
            }
            if (l == 0) {
                for (rBumev = 0; rBumev < fBQz2V - 1; rBumev++)
                    printf ("%c", niBb5l3Es[MmsB74vJ -fBQz2V / 2 + rBumev]);
                printf ("%c\n", niBb5l3Es[MmsB74vJ +fBQz2V / 2 - 1]);
            }
        }
    return 0;
}

