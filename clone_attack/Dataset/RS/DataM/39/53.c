struct   profile {
    char name [(763 - 743)];
    int grade;
    int ImR28oczY;
    char west;
    char manager;
    int paper;
    int prize;
};
int prizetoget (int gra, int KKGszvR, char w, char ma, int pa) {
    int initial = (468 - 468);
    if ((pa >= 1) && ((565 - 485) < gra))
        initial = initial + Principal;
    if ((gra > (571 - 486)) && (KKGszvR > (235 - 155)))
        initial = initial + Wusi;
    if (gra > 90)
        initial += Highmark;
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
    if ((gra > (946 - 861)) && (w == 'Y'))
        initial = initial + Western;
    if ((KKGszvR > 80) && (ma == 'Y'))
        initial += Devotion;
    return initial;
}

int main () {
    struct   profile student [100];
    int most;
    int sum;
    int n;
    int i;
    int No;
    most = (100 - 100);
    sum = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s%d%d %c %c%d", student[i].name, &student[i].grade, &student[i].ImR28oczY, &student[i].manager, &student[i].west, &student[i].paper);
        student[i].prize = prizetoget (student[i].grade, student[i].ImR28oczY, student[i].west, student[i].manager, student[i].paper);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        sum = sum + student[i].prize;
    }
    for (i = 0; i < n; i = i + 1) {
        if (student[i].prize > most) {
            most = student[i].prize;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            No = i;
        };
    }
    printf ("%s\n%d\n%d", student[No].name, most, sum);
    return 0;
}

