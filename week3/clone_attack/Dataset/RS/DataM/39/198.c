struct   student {
    char Isu8jKQ [25];
    int EMZXdUL;
    int EusQkf;
    char gb;
    char xb;
    int paper;
    int money;
};
int comp_money (struct   student s);

int main () {
    int sum;
    int max;
    int max_i;
    int n, i;
    struct   student obgfrl6aOR [LEN];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s %d %d %c %c %d", obgfrl6aOR[i].Isu8jKQ, &obgfrl6aOR[i].EMZXdUL, &obgfrl6aOR[i].EusQkf, &obgfrl6aOR[i].gb, &obgfrl6aOR[i].xb, &obgfrl6aOR[i].paper);
        obgfrl6aOR[i].money = comp_money (obgfrl6aOR[i]);
    }
    sum = max = obgfrl6aOR[0].money;
    max_i = 0;
    {
        i = 1;
        while (n > i) {
            if (max < obgfrl6aOR[i].money) {
                max = obgfrl6aOR[i].money;
                max_i = i;
            }
            sum += obgfrl6aOR[i].money;
            i = i + 1;
        };
    }
    printf ("%s\n", obgfrl6aOR[max_i].Isu8jKQ);
    printf ("%d\n", obgfrl6aOR[max_i].money);
    printf ("%d\n", sum);
    return 0;
}

int comp_money (struct   student s) {
    int sum = 0;
    if ((80 < s.EMZXdUL) && (s.paper >= 1))
        sum += 8000;
    if ((85 < s.EMZXdUL) && (s.EusQkf > 80))
        sum += 4000;
    if (s.EMZXdUL > 90)
        sum += 2000;
    if ((s.EMZXdUL > 85) && (s.xb == 'Y'))
        sum += 1000;
    if ((s.EusQkf > 80) && (s.gb == 'Y'))
        sum += 850;
    return sum;
}

