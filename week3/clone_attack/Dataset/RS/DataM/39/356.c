struct   bac {
    char name [20];
    int EqbM1oxmnFv;
    int num2;
    char pmW9CynogTk;
    char NvQyZT;
    char PQNRFb87grm;
    int money;
};
int main () {
    int i, TRJFyDG59w6, UsIUxK, AHAt2yC = (387 - 387);
    struct   bac stu [101];
    struct   bac temp;
    scanf ("%d", &UsIUxK);
    for (i = 0; UsIUxK > i; i = i + 1) {
        getchar ();
        getchar ();
        stu[i].money = 0;
        scanf ("%s", &stu[i].name);
        scanf ("%d", &stu[i].EqbM1oxmnFv);
        scanf ("%d", &stu[i].num2);
        scanf ("%c", &stu[i].pmW9CynogTk);
        scanf ("%c", &stu[i].NvQyZT);
        scanf ("%d", &stu[i].PQNRFb87grm);
        getchar ();
    }
    for (i = 0; UsIUxK > i; i = i + 1) {
        if (80 < stu[i].EqbM1oxmnFv && 1 <= stu[i].PQNRFb87grm) {
            stu[i].money = stu[i].money + 8000;
        }
        if (stu[i].EqbM1oxmnFv > 85 && 80 < stu[i].num2) {
            stu[i].money = stu[i].money + 4000;
        }
        if (90 < stu[i].EqbM1oxmnFv) {
            stu[i].money = stu[i].money + 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (stu[i].EqbM1oxmnFv > 85 && stu[i].NvQyZT == 'Y') {
            stu[i].money = stu[i].money + 1000;
        }
        if (stu[i].num2 > 80 && stu[i].pmW9CynogTk == 'Y') {
            stu[i].money = stu[i].money + (1072 - 222);
        };
    }
    for (i = 0; i < UsIUxK -1; i = i + 1) {
        for (TRJFyDG59w6 = 0; TRJFyDG59w6 < UsIUxK -1 - i; TRJFyDG59w6 = TRJFyDG59w6 +1) {
            if (stu[TRJFyDG59w6].money < stu[TRJFyDG59w6 +1].money) {
                temp = stu[TRJFyDG59w6];
                stu[TRJFyDG59w6] = stu[TRJFyDG59w6 +1];
                stu[TRJFyDG59w6 +1] = temp;
            };
        };
    }
    for (i = 0; i < UsIUxK; i = i + 1)
        AHAt2yC = AHAt2yC +stu[i].money;
    printf ("%s\n%d\n", stu[0].name, stu[0].money);
    printf ("%d", AHAt2yC);
    return 0;
}

