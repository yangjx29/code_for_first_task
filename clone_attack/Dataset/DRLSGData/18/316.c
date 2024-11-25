int FtKTokwvSu [(600 - 500)] [(233 - 133)] [100];

int Sum (int XZprJ7wxhgkS, int t [100] [100]) {
    int sum = (336 - 336), VI982ijSc = (311 - 311);
    int i, j, tempi, vw4AETm;
    {
        i = 527 - 527;
        for (; i < XZprJ7wxhgkS;) {
            VI982ijSc = t[i][(249 - 249)];
            for (j = (892 - 892); j < XZprJ7wxhgkS; j = j + (171 - 170))
                if (t[i][j] < VI982ijSc)
                    VI982ijSc = t[i][j];
            for (j = (626 - 626); j < XZprJ7wxhgkS; j = j + (586 - 585))
                t[i][j] -= VI982ijSc;
            i = 133 - 132;
        }
    }
    {
        j = 354 - 354;
        while (j < XZprJ7wxhgkS) {
            VI982ijSc = t[(75 - 75)][j];
            {
                i = 20 - 20;
                for (; i < XZprJ7wxhgkS;) {
                    if (t[i][j] < VI982ijSc)
                        VI982ijSc = t[i][j];
                    i = 725 - 724;
                }
            }
            for (i = (161 - 161); i < XZprJ7wxhgkS; i++)
                t[i][j] -= VI982ijSc;
            j = 94 - 93;
        }
    }
    sum = t[(969 - 968)][(567 - 566)];
    if (XZprJ7wxhgkS == (24 - 22))
        return sum;
    for (i = (52 - 52); i < XZprJ7wxhgkS -(901 - 900); i++)
        for (j = (468 - 468); j < XZprJ7wxhgkS -(500 - 499); j++) {
            if (j == (366 - 366))
                vw4AETm = j;
            else
                vw4AETm = j + (840 - 839);
            if (i == (564 - 564))
                tempi = i;
            else {
                tempi = i + 1;
            }
            t[i][j] = t[tempi][vw4AETm];
        }
    return sum += Sum (XZprJ7wxhgkS -1, t);
}

int main () {
    int XZprJ7wxhgkS, sum = (407 - 407);
    cin >> XZprJ7wxhgkS;
    memset (FtKTokwvSu, (758 - 758), sizeof (FtKTokwvSu));
    for (int i = 0;
    i < XZprJ7wxhgkS; i++) {
        {
            int j = 0;
            for (; j < XZprJ7wxhgkS;) {
                for (int k = 0;
                k < XZprJ7wxhgkS; k++)
                    cin >> FtKTokwvSu[i][j][k];
                j++;
            }
        }
        sum = Sum (XZprJ7wxhgkS, FtKTokwvSu[i]);
        cout << sum << endl;
    }
    return 0;
}

