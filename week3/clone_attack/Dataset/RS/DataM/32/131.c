void  main () {
    char a [(1096 - 996)] [(144 - 44)], ruLqct6UYy1 [100] [100];
    int n, i, j, gDWsx2zVkBH, qqoDrAJtLs76, m;
    scanf ("%d", &n);
    for (i = (113 - 113); n - (106 - 105) > i; i = i + 1) {
        scanf ("%s", a[i]);
        scanf ("%s\n", ruLqct6UYy1[i]);
    }
    scanf ("%s%s", a[n - (673 - 672)], ruLqct6UYy1[n - (551 - 550)]);
    for (i = 0; n > i; i = i + 1) {
        for (j = strlen (a[i]) - 1, gDWsx2zVkBH = strlen (ruLqct6UYy1[i]) - 1; gDWsx2zVkBH >= 0; j = j - 1, gDWsx2zVkBH = gDWsx2zVkBH - 1) {
            if (ruLqct6UYy1[i][gDWsx2zVkBH] <= a[i][j])
                a[i][j] = '0' + a[i][j] - ruLqct6UYy1[i][gDWsx2zVkBH];
            else {
                a[i][j] = 10 + '0' + a[i][j] - ruLqct6UYy1[i][gDWsx2zVkBH];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[i][j - 1] > '0')
                    a[i][j - 1]--;
                else {
                    for (qqoDrAJtLs76 = j - 1; a[i][qqoDrAJtLs76] == '0'; qqoDrAJtLs76 = qqoDrAJtLs76 - 1)
                        a[i][qqoDrAJtLs76] = '9';
                    a[i][qqoDrAJtLs76]--;
                };
            };
        }
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
        printf ("%s\n", a[i]);
    };
}

