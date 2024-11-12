void  main () {
    char line1 [(490 - 389)] = {'\0'}, line2 [(853 - 752)] = {'\0'};
    gets (line1);
    int len, ZZlnK2w, j;
    len = strlen (line1);
    for (ZZlnK2w = (538 - 538); !(' ' != line1[ZZlnK2w]); ZZlnK2w++)
        ;
    line2[0] = line1[ZZlnK2w];
    ZZlnK2w++;
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZZlnK2w < len) {
            if (!(' ' != line1[ZZlnK2w]) && line2[j] == ' ')
                continue;
            else {
                j++;
                line2[j] = line1[ZZlnK2w];
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
            ZZlnK2w++;
        };
    }
    len = strlen (line2);
    if (line2[len - (518 - 517)] == ' ')
        line2[len - (193 - 192)] = '\0';
    printf ("%s", line2);
}

