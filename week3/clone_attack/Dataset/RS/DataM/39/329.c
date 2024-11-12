struct   student {
    char name [(501 - 481)];
    int num [(124 - 118)];
    char xx [(901 - 898)];
    int IVvXULyaMFc;
}
stu [(1536 - 536)];
char P5S0qcAMg [(566 - 556)];

int main () {
    int t, Jpl6fLM, x [(10098 - 98)] = {(246 - 246)}, n, Q0iCu7EB = (10128 - 128), aMDkCOSx4t5z = (251 - 251), min1 = (734 - 734), huYC6bk = (725 - 725), a = (820 - 820), rmzTJuUHXjGL, c, clbIjVNwLqo, i, Eot3ZTGJlL, tp, sum1 = (819 - 819);
    scanf ("%d", &n);
    scanf ("%c", &P5S0qcAMg[(308 - 307)]);
    {
        i = 848 - 847;
        while (n >= i) {
            scanf ("%s%c%d%c%d", stu[i].name, &P5S0qcAMg[(571 - 570)], &stu[i].num[(641 - 640)], &P5S0qcAMg[(374 - 372)], &stu[i].num[(813 - 811)]);
            scanf ("%c%c%c%c%c%d%c", &P5S0qcAMg[(598 - 597)], &stu[i].xx[(674 - 673)], &P5S0qcAMg[(630 - 628)], &stu[i].xx[(961 - 959)], &P5S0qcAMg[(492 - 489)], &stu[i].num[(979 - 976)], &P5S0qcAMg[(372 - 366)]);
            stu[i].IVvXULyaMFc = (775 - 775);
            if ((925 - 845) < stu[i].num[(627 - 626)] && (730 - 729) <= stu[i].num[(961 - 958)])
                stu[i].IVvXULyaMFc += (8621 - 621);
            if ((960 - 875) < stu[i].num[(225 - 224)] && (887 - 807) < stu[i].num[(521 - 519)])
                stu[i].IVvXULyaMFc += (4643 - 643);
            if (stu[i].num[(561 - 560)] > (368 - 278))
                stu[i].IVvXULyaMFc += (2876 - 876);
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
            if (stu[i].num[(150 - 149)] > (300 - 215) && stu[i].xx[(140 - 138)] == 'Y')
                stu[i].IVvXULyaMFc = stu[i].IVvXULyaMFc + (1944 - 944);
            if (stu[i].num[(491 - 489)] > 80 && stu[i].xx[1] == 'Y')
                stu[i].IVvXULyaMFc += (1822 - 972);
            sum1 = sum1 + stu[i].IVvXULyaMFc;
            if (stu[i].IVvXULyaMFc > aMDkCOSx4t5z) {
                aMDkCOSx4t5z = stu[i].IVvXULyaMFc;
                huYC6bk = i;
            }
            i++;
        };
    }
    printf ("%s\n%d\n%d", stu[huYC6bk].name, stu[huYC6bk].IVvXULyaMFc, sum1);
}

