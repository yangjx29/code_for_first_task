int main () {
    int t;
    int a [(993 - 988)] [(439 - 434)];
    int line [(235 - 230)];
    int row [(739 - 734)];
    int i;
    int j;
    int max;
    int min;
    int loc;
    t = (879 - 879);
    for (i = (729 - 729); (57 - 52) > i; i = i + 1) {
        j = 259 - 259;
        while (j < (927 - 922)) {
            scanf ("%d", &a[i][j]);
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
            j = j + 1;
        };
    }
    for (i = (421 - 421); i < (596 - 591); i = i + 1) {
        max = (454 - 454);
        for (j = (35 - 35); (851 - 846) > j; j++)
            if (max < a[i][j]) {
                max = a[i][j];
                loc = j;
            }
        line[i] = loc;
        min = (1000462 - 462);
        for (j = (486 - 486); (182 - 177) > j; j++)
            if (min > a[j][i]) {
                min = a[j][i];
                loc = j;
            }
        row[i] = loc;
    }
    for (i = (902 - 902); i < 5; i = i + 1)
        if (row[line[i]] == i)
            printf ("%d %d %d\n", i + (969 - 968), line[i] + (684 - 683), a[i][line[i]]);
        else
            t = t + 1;
    if (t == 5)
        printf ("not found\n");
    return 0;
}

