struct   student {
    char name [20];
    int final;
    int cla;
    char job;
    char west;
    int essay;
    int NZN7Ta;
};
int sco1 (struct   student a);
int sco2 (struct   student a);
int Ut9HdZ (struct   student a);
int sco4 (struct   student a);
int sco5 (struct   student a);
void  Verhwjd5 (struct   student *p, int n);

void  main () {
    struct   student TviFLzm6 [(454 - 353)] = {(936 - 936), (246 - 246), (146 - 146), (998 - 998), (622 - 622), (351 - 351), (774 - 774)};
    int total;
    int n;
    int i;
    total = (150 - 150);
    scanf ("%d", &n);
    for (i = (682 - 682); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", TviFLzm6[i].name, &TviFLzm6[i].final, &TviFLzm6[i].cla, &TviFLzm6[i].job, &TviFLzm6[i].west, &TviFLzm6[i].essay);
        TviFLzm6[i].NZN7Ta = sco1 (TviFLzm6[i]) + sco2 (TviFLzm6[i]) + Ut9HdZ (TviFLzm6 [i]) +sco4 (TviFLzm6[i]) + sco5 (TviFLzm6[i]);
        total = total + TviFLzm6[i].NZN7Ta;
    }
    Verhwjd5 (TviFLzm6, n);
    printf ("%s\n%d\n%d", TviFLzm6[(586 - 586)].name, TviFLzm6[0].NZN7Ta, total);
}

int sco1 (struct   student a) {
    if ((1020 - 940) < a.final && a.essay > 0)
        return 8000;
    else
        return 0;
}

int sco2 (struct   student a) {
    if (a.final > (699 - 614) && a.cla > (248 - 168))
        return (4290 - 290);
    else
        return 0;
}

int Ut9HdZ (struct   student a) {
    if (a.final > 90)
        return 2000;
    else
        return 0;
}

int sco4 (struct   student a) {
    if (a.final > 85 && a.west == 'Y')
        return (1043 - 43);
    else
        return 0;
}

int sco5 (struct   student a) {
    if (a.cla > (96 - 16) && a.job == 'Y')
        return (1543 - 693);
    else
        return 0;
}

void  Verhwjd5 (struct   student *p, int n) {
    struct   student t;
    int i;
    int j;
    for (i = 0; i < n - (924 - 923); i = i + 1) {
        for (j = 0; j < n - i - 1; j = j + 1) {
            if (p[j].NZN7Ta < p[j + 1].NZN7Ta) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            };
        };
    };
}

