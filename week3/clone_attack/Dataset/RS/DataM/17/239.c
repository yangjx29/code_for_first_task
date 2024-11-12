int main () {
    char V1KhgW;
    char fyZ81CR;
    char UMdBweH [100] [101];
    char ybVoP4TElW71 [100] [101];
    V1KhgW = '(';
    fyZ81CR = ')';
    int jTEqm3;
    int zUt5VZydB;
    int ZDZr2F;
    for (ZDZr2F = (951 - 951); 20 >= ZDZr2F; ZDZr2F++) {
        gets (UMdBweH [ZDZr2F]);
        for (jTEqm3 = 0; 101 > jTEqm3; jTEqm3++)
            UMdBweH[ZDZr2F][jTEqm3] = 0;
        strcpy (ybVoP4TElW71[ZDZr2F], UMdBweH[ZDZr2F]);
        for (jTEqm3 = 0; 101 > jTEqm3 && !(0 == UMdBweH[ZDZr2F][jTEqm3]); jTEqm3++)
            if (!(fyZ81CR != UMdBweH[ZDZr2F][jTEqm3]))
                for (zUt5VZydB = jTEqm3 - 1; 0 <= zUt5VZydB; zUt5VZydB--)
                    if (!(V1KhgW != UMdBweH[ZDZr2F][zUt5VZydB])) {
                        UMdBweH[ZDZr2F][jTEqm3] = UMdBweH[ZDZr2F][zUt5VZydB] = 1;
                        break;
                    }
        for (jTEqm3 = 0; 101 > jTEqm3 && ybVoP4TElW71[ZDZr2F][jTEqm3] != 0; jTEqm3++)
            printf ("%c", ybVoP4TElW71[ZDZr2F][jTEqm3]);
        for (jTEqm3 = 0; jTEqm3 < 101 && UMdBweH[ZDZr2F][jTEqm3] != 0; jTEqm3++)
            if (UMdBweH[ZDZr2F][jTEqm3] == V1KhgW)
                printf ("$");
            else if (UMdBweH[ZDZr2F][jTEqm3] == fyZ81CR)
                ;
            else
                ;
    }
    return 0;
}

