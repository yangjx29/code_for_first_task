void  main () {
    for (;;) {
        int LMnJc4w2ICjk, dUWvOwDq, upcBur = 0;
        char elSXnqZIza [19], Bw09ZK6U [4], s2R9vBC [20];
        puts (s2R9vBC);
        int ZyxVC0PhvR;
        if (scanf ("%s%s", elSXnqZIza, Bw09ZK6U) == EOF)
            break;
        ZyxVC0PhvR = strlen (elSXnqZIza);
        {
            LMnJc4w2ICjk = 0;
            while (LMnJc4w2ICjk < ZyxVC0PhvR) {
                if (elSXnqZIza[LMnJc4w2ICjk] > elSXnqZIza[upcBur])
                    upcBur = LMnJc4w2ICjk;
                LMnJc4w2ICjk = LMnJc4w2ICjk +1;
            };
        }
        {
            LMnJc4w2ICjk = 0;
            while (LMnJc4w2ICjk <= upcBur) {
                s2R9vBC[LMnJc4w2ICjk] = elSXnqZIza[LMnJc4w2ICjk];
                LMnJc4w2ICjk = LMnJc4w2ICjk +1;
            };
        }
        {
            dUWvOwDq = upcBur + 1;
            LMnJc4w2ICjk = 0;
            while (LMnJc4w2ICjk < 3) {
                s2R9vBC[dUWvOwDq] = Bw09ZK6U[LMnJc4w2ICjk];
                dUWvOwDq++;
                LMnJc4w2ICjk++;
            };
        }
        for (LMnJc4w2ICjk = upcBur + 1, dUWvOwDq = upcBur + 4; LMnJc4w2ICjk < ZyxVC0PhvR; LMnJc4w2ICjk = LMnJc4w2ICjk +1, dUWvOwDq = dUWvOwDq + 1)
            s2R9vBC[dUWvOwDq] = elSXnqZIza[LMnJc4w2ICjk];
        s2R9vBC[ZyxVC0PhvR +3] = '\0';
    };
}

