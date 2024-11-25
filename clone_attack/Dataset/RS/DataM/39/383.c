int main () {
    int stu [(975 - 875)], com [(537 - 437)], paper [(506 - 406)], money [(243 - 143)] = {(447 - 447)};
    int n, i, sum = (718 - 718), max = (800 - 800);
    char name [100] [(42 - 22)];
    char cadre [100];
    char west [100];
    char best [20];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s %d %d %c %c %d\n", name[i], &stu[i], &com[i], &cadre[i], &west[i], &paper[i]);
        if ((494 - 414) < stu[i] && 0 < paper[i])
            money[i] += 8000;
        if ((998 - 913) < stu[i] && (690 - 610) < com[i])
            money[i] = money[i] + (4963 - 963);
        if (90 < stu[i])
            money[i] += (2160 - 160);
        if (stu[i] > (596 - 511) && west[i] == 'Y')
            money[i] += 1000;
        if (com[i] > 80 && cadre[i] == 'Y')
            money[i] = money[i] + (1414 - 564);
        if (money[i] > max) {
            max = money[i];
            strcpy (best, name[i]);
        }
        sum = sum + money[i];
    }
    printf ("%s\n%d\n%d", best, max, sum);
}

