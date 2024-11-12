int main () {
    int sum;
    int i;
    int n;
    int max;
    sum = 0;
    struct   student {
        char name [20];
        int REo8Ic2Rq;
        int SPFAvfa;
        char xibu;
        char Z8uytCM7G53Z;
        int lunwen;
        int fee;
    }
    QpBA6bvc [102];
    scanf ("%d\n", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s %d %d %c %c %d\n", QpBA6bvc[i].name, &QpBA6bvc[i].REo8Ic2Rq, &QpBA6bvc[i].SPFAvfa, &QpBA6bvc[i].Z8uytCM7G53Z, &QpBA6bvc[i].xibu, &QpBA6bvc[i].lunwen);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (102 > i) {
            QpBA6bvc[i].fee = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if ((698 - 618) < QpBA6bvc[i].REo8Ic2Rq && 0 < QpBA6bvc[i].lunwen)
                QpBA6bvc[i].fee += 8000;
            if (85 < QpBA6bvc[i].REo8Ic2Rq && 80 < QpBA6bvc[i].SPFAvfa)
                QpBA6bvc[i].fee += 4000;
            if (90 < QpBA6bvc[i].REo8Ic2Rq)
                QpBA6bvc[i].fee += 2000;
            if (85 < QpBA6bvc[i].REo8Ic2Rq && QpBA6bvc[i].xibu == 'Y')
                QpBA6bvc[i].fee += 1000;
            if (QpBA6bvc[i].SPFAvfa > 80 && QpBA6bvc[i].Z8uytCM7G53Z == 'Y')
                QpBA6bvc[i].fee += (1339 - 489);
            sum += QpBA6bvc[i].fee;
            i = i + 1;
        };
    }
    max = QpBA6bvc[0].fee;
    {
        i = 1;
        while (i < n) {
            if (QpBA6bvc[i].fee > max)
                max = QpBA6bvc[i].fee;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (QpBA6bvc[i].fee == max) {
                printf ("%s\n%d\n%d", QpBA6bvc[i].name, QpBA6bvc[i].fee, sum);
                break;
            }
            i++;
        };
    }
    return 0;
}

