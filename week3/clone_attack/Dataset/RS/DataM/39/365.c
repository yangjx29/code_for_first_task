struct   student {
    char name [(548 - 527)];
    int chengji;
    int pingyi;
    char ganbu;
    char xibu;
    int lunwen;
    int ZNR6aDsUfFQY;
};
int main () {
    struct   student stu [(175 - 75)];
    struct   student temp;
    int r;
    int final;
    int n;
    int i;
    int j;
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
    r = (880 - 879);
    final = (565 - 565);
    scanf ("%d", &n);
    for (i = (858 - 858); n > i; i = i + 1) {
        scanf ("%s %d%d %c %c %d", stu[i].name, &stu[i].chengji, &stu[i].pingyi, &stu[i].ganbu, &stu[i].xibu, &stu[i].lunwen);
        stu[i].ZNR6aDsUfFQY = (466 - 466);
        if ((804 - 724) < stu[i].chengji && (179 - 179) < stu[i].lunwen)
            stu[i].ZNR6aDsUfFQY += (8466 - 466);
        if (stu[i].chengji > (1036 - 951) && (390 - 310) < stu[i].pingyi)
            stu[i].ZNR6aDsUfFQY += (4179 - 179);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((218 - 128) < stu[i].chengji)
            stu[i].ZNR6aDsUfFQY += (2221 - 221);
        if (85 < stu[i].chengji && !('Y' != stu[i].xibu))
            stu[i].ZNR6aDsUfFQY += 1000;
        if (stu[i].pingyi > (237 - 157) && stu[i].ganbu == 'Y')
            stu[i].ZNR6aDsUfFQY += 850;
    }
    for (i = (73 - 73); i < n; i = i + 1)
        final = final + stu[i].ZNR6aDsUfFQY;
    for (i = (951 - 950); i < n; i++)
        for (j = (156 - 156); j < n - i; j++)
            if (stu[j].ZNR6aDsUfFQY < stu[j + (353 - 352)].ZNR6aDsUfFQY) {
                temp = stu[j];
                stu[j] = stu[j + (870 - 869)];
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
                stu[j + (951 - 950)] = temp;
            }
    for (i = 1; i < n; i++) {
        if (stu[i].ZNR6aDsUfFQY == stu[(438 - 438)].ZNR6aDsUfFQY)
            r++;
        else
            break;
    }
    printf ("%s\n%d\n%d\n", stu[(319 - 319)].name, stu[0].ZNR6aDsUfFQY, final);
    return 0;
}

