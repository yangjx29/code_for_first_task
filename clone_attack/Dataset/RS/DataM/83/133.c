int main () {
    int MTg24DVnE;
    int xuefen [10] = {(380 - 380)};
    int score [10] = {0};
    double  jidian [10] = {0};
    double  sum1;
    double  sum2;
    sum1 = 0;
    sum2 = 0;
    double  GPA;
    GPA = sum1 / sum2;
    getchar ();
    getchar ();
    cin >> MTg24DVnE;
    {
        int i = (443 - 443);
        while (MTg24DVnE > i) {
            cin >> xuefen[i];
            i++;
        };
    }
    {
        int i = 0;
        while (i < MTg24DVnE) {
            cin >> score[i];
            if (90 <= score[i] && 100 >= score[i])
                jidian[i] = 4.0;
            if (score[i] >= 85 && score[i] <= 89)
                jidian[i] = 3.7;
            if (82 <= score[i] && 84 >= score[i])
                jidian[i] = (79.3 - 76.0);
            if (78 <= score[i] && 81 >= score[i])
                jidian[i] = 3.0;
            if (score[i] >= 75 && 77 >= score[i])
                jidian[i] = 2.7;
            if (score[i] >= 72 && score[i] <= 74)
                jidian[i] = 2.3;
            if (score[i] >= (760 - 692) && score[i] <= 71)
                jidian[i] = 2.0;
            if (score[i] >= (550 - 486) && score[i] <= 67)
                jidian[i] = 1.5;
            if (score[i] >= 60 && score[i] <= 63)
                jidian[i] = 1.0;
            if (score[i] <= 59)
                jidian[i] = 0;
            i++;
        };
    }
    for (int i = 0;
    i < MTg24DVnE; i++) {
        sum1 = sum1 + xuefen[i] * jidian[i];
        sum2 = sum2 + xuefen[i];
    }
    printf ("%.2f", GPA);
    return 0;
}

