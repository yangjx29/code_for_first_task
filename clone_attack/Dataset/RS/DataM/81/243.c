void  main () {
    int whMjp7NwTD;
    int KOVn78KthyM [5] [5];
    int Ui7vaEd1s;
    int WcAi7yLO;
    int KzwjbclT4V;
    int t5dUM1 (int *NHYTzLb7j, int WcAi7yLO, int Ui7vaEd1s);
    int *ayIecaPiz9;
    for (whMjp7NwTD = 0; 5 > whMjp7NwTD; whMjp7NwTD++) {
        KzwjbclT4V = 0;
        while (5 > KzwjbclT4V) {
            scanf ("%d", &KOVn78KthyM[whMjp7NwTD][KzwjbclT4V]);
            KzwjbclT4V++;
        };
    }
    scanf ("%d %d", &WcAi7yLO, &Ui7vaEd1s);
    ayIecaPiz9 = &KOVn78KthyM[0][0];
    if (t5dUM1 (ayIecaPiz9, WcAi7yLO, Ui7vaEd1s) == 0)
        ;
    else
        for (whMjp7NwTD = 0; whMjp7NwTD < 5; whMjp7NwTD++) {
            for (KzwjbclT4V = 0; 5 > KzwjbclT4V; KzwjbclT4V++) {
                if (KzwjbclT4V == 0)
                    printf ("%d", KOVn78KthyM[whMjp7NwTD][KzwjbclT4V]);
                else
                    printf (" %d", KOVn78KthyM[whMjp7NwTD][KzwjbclT4V]);
            };
        };
}

int t5dUM1 (int *NHYTzLb7j, int FFgXGMqwu, int eEkayhAt) {
    int zvMafJu2Yb;
    int Yl9GLbOAi;
    int HaF5wJ;
    if (FFgXGMqwu >= 0 && FFgXGMqwu < 5 && eEkayhAt >= 0 && eEkayhAt < 5) {
        for (Yl9GLbOAi = 0; Yl9GLbOAi < 5; Yl9GLbOAi++) {
            *(NHYTzLb7j +Yl9GLbOAi+FFgXGMqwu*5) = *(NHYTzLb7j +Yl9GLbOAi+eEkayhAt * 5);
            HaF5wJ = *(NHYTzLb7j +Yl9GLbOAi+5 * FFgXGMqwu);
            *(NHYTzLb7j +Yl9GLbOAi+eEkayhAt * 5) = HaF5wJ;
        }
        zvMafJu2Yb = 1;
    }
    else
        zvMafJu2Yb = 0;
    return (zvMafJu2Yb);
}

