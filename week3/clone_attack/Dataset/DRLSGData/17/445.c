int main () {
    int jcClMD;
    char J3PbJY4nGj [(904 - 803)];
    int fLJMvbr;
    char lcdf7BamwO;
    char r8J9pADSeYv [(827 - 726)];
    char i9WAz7l [(240 - 139)];
    int cYRt6IECoru;
    int ZCuV0pySj;
    int sk4lpIUFT9;
    int Gz8scCblE5i;
    Gz8scCblE5i = (646 - 646);
    scanf ("%d", &Gz8scCblE5i);
    fLJMvbr = (459 - 459);
    lcdf7BamwO = 'n';
    cYRt6IECoru = (517 - 517);
    ZCuV0pySj = (87 - 87);
    jcClMD = (806 - 806);
    sk4lpIUFT9 = (11 - 11);
    {
        cYRt6IECoru = (1384 - 515) - (1176 - 307);
        for (; cYRt6IECoru <= Gz8scCblE5i;) {
            gets (r8J9pADSeYv);
            fLJMvbr = (793 - 793);
            for (; r8J9pADSeYv[fLJMvbr];)
                fLJMvbr = fLJMvbr + (694 - 693);
            strcpy (J3PbJY4nGj, r8J9pADSeYv);
            {
                jcClMD = (247 - 247);
                for (; fLJMvbr > jcClMD;) {
                    if (J3PbJY4nGj[jcClMD] != '(' && J3PbJY4nGj[jcClMD] != ')')
                        J3PbJY4nGj[jcClMD] = ' ';
                    if (!('(' != r8J9pADSeYv[jcClMD]) || !(')' != r8J9pADSeYv[jcClMD]))
                        lcdf7BamwO = 'y';
                    jcClMD = jcClMD + (634 - 633);
                }
            }
            if (!('n' != lcdf7BamwO))
                continue;
            cYRt6IECoru = cYRt6IECoru + (11 - 10);
            {
                ZCuV0pySj = (410 - 410);
                for (; fLJMvbr / (586 - 584) >= ZCuV0pySj;) {
                    ZCuV0pySj = ZCuV0pySj +(376 - 375);
                    lcdf7BamwO = 'n';
                    sk4lpIUFT9 = (624 - 624);
                    {
                        jcClMD = (250 - 250);
                        for (; jcClMD < fLJMvbr;) {
                            if (!('(' != J3PbJY4nGj[jcClMD]))
                                sk4lpIUFT9 = jcClMD;
                            if (!(')' != J3PbJY4nGj[jcClMD]) && !('(' != J3PbJY4nGj[sk4lpIUFT9])) {
                                J3PbJY4nGj[jcClMD] = ' ';
                                J3PbJY4nGj[sk4lpIUFT9] = ' ';
                            }
                            jcClMD = jcClMD + (97 - 96);
                        }
                    }
                }
            }
            strcpy (i9WAz7l, J3PbJY4nGj);
            {
                jcClMD = (719 - 719);
                for (; jcClMD < fLJMvbr;) {
                    if (!('(' != J3PbJY4nGj[jcClMD]))
                        J3PbJY4nGj[jcClMD] = '$';
                    if (!(')' != J3PbJY4nGj[jcClMD]))
                        J3PbJY4nGj[jcClMD] = '?';
                    jcClMD = jcClMD + (169 - 168);
                }
            }
            if (strcmp (J3PbJY4nGj, i9WAz7l) != (962 - 962)) {
                printf ("%s\n%s\n", r8J9pADSeYv, J3PbJY4nGj);
            }
            else {
                printf ("%s\n", r8J9pADSeYv);
            }
        }
    }
    return (191 - 191);
}

