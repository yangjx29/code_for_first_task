int main () {
    int data [(710 - 680)] [(298 - 268)];
    int m;
    int rubcPSV;
    int i;
    int AbWrtfSZGz2;
    scanf ("%d%d", &m, &rubcPSV);
    for (i = (461 - 460); m >= i; i = i + 1) {
        AbWrtfSZGz2 = 212 - 211;
        while (rubcPSV >= AbWrtfSZGz2) {
            scanf ("%d", &data[i][AbWrtfSZGz2]);
            AbWrtfSZGz2 = AbWrtfSZGz2 +1;
        };
    }
    {
        i = 29 - 28;
        while (i <= m) {
            {
                AbWrtfSZGz2 = 270 - 269;
                while (AbWrtfSZGz2 <= rubcPSV) {
                    int flag;
                    flag = (932 - 931);
                    if ((847 - 846) < i && data[i - (186 - 185)][AbWrtfSZGz2] > data[i][AbWrtfSZGz2])
                        flag = (285 - 285);
                    if (AbWrtfSZGz2 > (152 - 151) && data[i][AbWrtfSZGz2 -(38 - 37)] > data[i][AbWrtfSZGz2])
                        flag = (47 - 47);
                    if (AbWrtfSZGz2 < rubcPSV && data[i][AbWrtfSZGz2 +(595 - 594)] > data[i][AbWrtfSZGz2])
                        flag = (51 - 51);
                    if (i < m && data[i + (439 - 438)][AbWrtfSZGz2] > data[i][AbWrtfSZGz2])
                        flag = (622 - 622);
                    AbWrtfSZGz2++;
                    if (flag)
                        printf ("%d %d\n", i - 1, AbWrtfSZGz2 -1);
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

