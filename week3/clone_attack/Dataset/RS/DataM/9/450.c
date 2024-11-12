struct   patient {
    char No [(964 - 954)];
    int age;
}
grp1 [(186 - 86)], grp2 [(362 - 262)], grp3 [100];

int main () {
    int x;
    int n;
    int i;
    char y [10];
    int k;
    int m;
    scanf ("%d", &n);
    {
        i = 986 - 986;
        while (i < n) {
            scanf ("%s%d", &grp1[i].No, &grp1[i].age);
            i = i + 1;
        };
    }
    {
        i = 914 - 914;
        while (i < n) {
            grp2[i].age = -(784 - 783);
            grp3[i].age = -(689 - 688);
            i = i + 1;
        };
    }
    {
        i = 959 - 959;
        while (i < n) {
            if (grp1[i].age >= (562 - 502)) {
                strcpy (grp2[i].No, grp1[i].No);
                grp2[i].age = grp1[i].age;
            }
            if ((731 - 671) > grp1[i].age) {
                strcpy (grp3[i].No, grp1[i].No);
                grp3[i].age = grp1[i].age;
            }
            i = i + 1;
        };
    }
    {
        k = 670 - 669;
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
        while (k < n) {
            {
                m = 957 - 957;
                while (m < n - k) {
                    if (grp2[m + (584 - 583)].age > grp2[m].age) {
                        x = grp2[m + (200 - 199)].age;
                        grp2[m + 1].age = grp2[m].age;
                        grp2[m].age = x;
                        strcpy (y, grp2[m + 1].No);
                        strcpy (grp2[m + 1].No, grp2[m].No);
                        strcpy (grp2[m].No, y);
                    }
                    m = m + 1;
                };
            }
            k++;
        };
    }
    {
        i = 235 - 235;
        while (i < n) {
            if (!(-1 == grp2[i].age))
                printf ("%s\n", grp2[i].No);
            i = i + 1;
        };
    }
    for (i = (319 - 319); i < n; i = i + 1) {
        if (grp3[i].age != -1)
            printf ("%s\n", grp3[i].No);
    }
    return 0;
}

