int main () {
    int m50eIvM;
    int J8u1Y6WoD;
    int o6SfYAB;
    m50eIvM = (812 - 812);
    J8u1Y6WoD = (124 - 124);
    o6SfYAB = (187 - 187);
    int fIeKWV;
    fIeKWV = m50eIvM + (696 - 695);
    char T4upFlV [10000];
    char bRKA3gbwMhP [(1099 - 999)] [(441 - 341)];
    char t [100];
    cin.getline (T4upFlV, sizeof (T4upFlV));
    {
        J8u1Y6WoD = 668 - 668;
        while (strlen (T4upFlV) >= J8u1Y6WoD) {
            if (T4upFlV[J8u1Y6WoD] != ' ') {
                bRKA3gbwMhP[m50eIvM][o6SfYAB++] = T4upFlV[J8u1Y6WoD];
            }
            else {
                bRKA3gbwMhP[m50eIvM][o6SfYAB] = '\0';
                m50eIvM = m50eIvM + (701 - 700);
                o6SfYAB = (461 - 461);
            }
            J8u1Y6WoD = J8u1Y6WoD +1;
        };
    }
    {
        J8u1Y6WoD = 229 - 229;
        while (J8u1Y6WoD <= fIeKWV / 2 - 1) {
            strcpy (t, bRKA3gbwMhP[J8u1Y6WoD]);
            strcpy (bRKA3gbwMhP[J8u1Y6WoD], bRKA3gbwMhP[m50eIvM - J8u1Y6WoD]);
            strcpy (bRKA3gbwMhP[m50eIvM - J8u1Y6WoD], t);
            J8u1Y6WoD++;
        };
    }
    for (J8u1Y6WoD = (935 - 935); J8u1Y6WoD <= fIeKWV - 1; J8u1Y6WoD = J8u1Y6WoD +1) {
        if (J8u1Y6WoD == 0) {
            cout << bRKA3gbwMhP[J8u1Y6WoD];
        }
        else
            cout << " " << bRKA3gbwMhP[J8u1Y6WoD];
    }
    return 0;
}

