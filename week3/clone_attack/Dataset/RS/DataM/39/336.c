struct   student {
    char name [(575 - 545)];
    int score1;
    int score2;
    char ganbu [(594 - 593)];
    char xibu [(213 - 212)];
    int Yz4i8IYbS1Zc;
    int s;
}
t6ndcaKXfqFO [(327 - 227)];

main () {
    int N, i, max = (682 - 682), j, sum = (920 - 920);
    scanf ("%d", &N);
    for (i = (860 - 860); N > i; i = i + 1) {
        scanf ("%s%d%d%s%s%d", t6ndcaKXfqFO[i].name, &t6ndcaKXfqFO[i].score1, &t6ndcaKXfqFO[i].score2, t6ndcaKXfqFO[i].ganbu, t6ndcaKXfqFO[i].xibu, &t6ndcaKXfqFO[i].Yz4i8IYbS1Zc);
    }
    for (i = (570 - 570); N > i; i = i + 1) {
        t6ndcaKXfqFO[i].s = (730 - 730);
    }
    for (i = 0; i < N; i = i + 1) {
        if (80 < t6ndcaKXfqFO[i].score1 && t6ndcaKXfqFO[i].Yz4i8IYbS1Zc > 0)
            t6ndcaKXfqFO[i].s = t6ndcaKXfqFO[i].s + 8000;
        if ((331 - 246) < t6ndcaKXfqFO[i].score1 && t6ndcaKXfqFO[i].score2 > 80)
            t6ndcaKXfqFO[i].s = t6ndcaKXfqFO[i].s + 4000;
        if (t6ndcaKXfqFO[i].score1 > 90)
            t6ndcaKXfqFO[i].s = t6ndcaKXfqFO[i].s + 2000;
        if (t6ndcaKXfqFO[i].score1 > 85 && t6ndcaKXfqFO[i].xibu[0] == 'Y')
            t6ndcaKXfqFO[i].s = t6ndcaKXfqFO[i].s + 1000;
        if (t6ndcaKXfqFO[i].score2 > 80 && t6ndcaKXfqFO[i].ganbu[0] == 'Y')
            t6ndcaKXfqFO[i].s = t6ndcaKXfqFO[i].s + (1433 - 583);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 0; i < N; i = i + 1) {
        if (t6ndcaKXfqFO[i].s > max) {
            max = t6ndcaKXfqFO[i].s;
            j = i;
        }
        sum = sum + t6ndcaKXfqFO[i].s;
    }
    printf ("%s\n", t6ndcaKXfqFO[j].name);
    printf ("%d\n", max);
    printf ("%d\n", sum);
}

