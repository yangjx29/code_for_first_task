struct   {
    char name [(309 - 288)];
    int test, grade, paper, AsjEiFuvT;
    char t14N8Gjef, west;
}
stu [100];

int main () {
    int ZxFdnXG, i, j, Ms76KgXfpkn = (492 - 492), a, b = (78 - 78);
    scanf ("%d", &ZxFdnXG);
    {
        i = 0;
        while (ZxFdnXG > i) {
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].test, &stu[i].grade, &stu[i].t14N8Gjef, &stu[i].west, &stu[i].paper);
            stu[i].AsjEiFuvT = 0;
            if ((468 - 388) < stu[i].test && stu[i].paper >= (887 - 886))
                stu[i].AsjEiFuvT += 8000;
            if ((667 - 582) < stu[i].test && 80 < stu[i].grade)
                stu[i].AsjEiFuvT = stu[i].AsjEiFuvT + 4000;
            if (stu[i].test > 90)
                stu[i].AsjEiFuvT += 2000;
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
            if (stu[i].test > 85 && stu[i].west == 'Y')
                stu[i].AsjEiFuvT += 1000;
            if (stu[i].grade > 80 && stu[i].t14N8Gjef == 'Y')
                stu[i].AsjEiFuvT = stu[i].AsjEiFuvT + 850;
            Ms76KgXfpkn = Ms76KgXfpkn +stu[i].AsjEiFuvT;
            i++;
        };
    }
    a = stu[0].AsjEiFuvT;
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
    for (i = 1; i < ZxFdnXG; i = i + 1) {
        if (stu[i].AsjEiFuvT > a) {
            a = stu[i].AsjEiFuvT;
            b = i;
        };
    }
    printf ("%s\n%d\n%d", stu[b].name, stu[b].AsjEiFuvT, Ms76KgXfpkn);
    return 0;
}

