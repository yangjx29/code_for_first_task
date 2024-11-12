void  main () {
    int QJmuNZ3hnv89;
    int j03o9bXqhVF;
    int RsYokzf;
    int ywsYOlEU4NK;
    char SwW52yO3b [10];
    char baNi1b [3];
    char res [15];
    char max;
    for (; !(EOF == scanf ("%s %s", SwW52yO3b, baNi1b));) {
        RsYokzf = strlen (SwW52yO3b);
        max = SwW52yO3b[0];
        {
            QJmuNZ3hnv89 = 0;
            while (RsYokzf > QJmuNZ3hnv89) {
                if (SwW52yO3b[QJmuNZ3hnv89] > max)
                    max = SwW52yO3b[QJmuNZ3hnv89];
                QJmuNZ3hnv89++;
            };
        }
        {
            QJmuNZ3hnv89 = 0;
            while (RsYokzf > QJmuNZ3hnv89) {
                if (!(max == SwW52yO3b[QJmuNZ3hnv89]))
                    res[QJmuNZ3hnv89] = SwW52yO3b[QJmuNZ3hnv89];
                else {
                    res[QJmuNZ3hnv89] = SwW52yO3b[QJmuNZ3hnv89];
                    QJmuNZ3hnv89++;
                    break;
                }
                QJmuNZ3hnv89++;
            };
        }
        for (j03o9bXqhVF = 0; 3 > j03o9bXqhVF; j03o9bXqhVF++)
            res[QJmuNZ3hnv89 +j03o9bXqhVF] = baNi1b[j03o9bXqhVF];
        for (; QJmuNZ3hnv89 < RsYokzf; QJmuNZ3hnv89 = QJmuNZ3hnv89 +1)
            res[QJmuNZ3hnv89 +j03o9bXqhVF] = SwW52yO3b[QJmuNZ3hnv89];
        for (ywsYOlEU4NK = 0; ywsYOlEU4NK < QJmuNZ3hnv89 +j03o9bXqhVF; ywsYOlEU4NK = ywsYOlEU4NK + 1)
            printf ("%c", res[ywsYOlEU4NK]);
        printf ("\n");
    };
}

