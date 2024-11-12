int jis (int x, int y, int iJ9n8h [(426 - 421)] [(838 - 833)]);

void  main () {
    int s [(641 - 636)] [(977 - 972)], v1gQThDyP6, a0fNH276rh9, m, ouRa3plhO, x [(901 - 896)];
    {
        v1gQThDyP6 = 543 - 543;
        while ((262 - 257) > v1gQThDyP6) {
            for (a0fNH276rh9 = 0; 5 > a0fNH276rh9; a0fNH276rh9++) {
                scanf ("%d", &s[v1gQThDyP6][a0fNH276rh9]);
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
            v1gQThDyP6++;
        };
    }
    scanf ("%d %d", &ouRa3plhO, &m);
    if (jis (ouRa3plhO, m, s[5][5]) == 0)
        ;
    if (!(1 != jis (ouRa3plhO, m, s[5][5]))) {
        {
            a0fNH276rh9 = 0;
            while (5 > a0fNH276rh9) {
                x[a0fNH276rh9] = s[m][a0fNH276rh9];
                s[m][a0fNH276rh9] = s[ouRa3plhO][a0fNH276rh9];
                s[ouRa3plhO][a0fNH276rh9] = x[a0fNH276rh9];
                a0fNH276rh9 = a0fNH276rh9 + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (v1gQThDyP6 = 0; 5 > v1gQThDyP6; v1gQThDyP6++) {
            printf ("%d %d %d %d %d\n", s[v1gQThDyP6][0], s[v1gQThDyP6][1], s[v1gQThDyP6][2], s[v1gQThDyP6][3], s[v1gQThDyP6][(889 - 885)]);
        };
    };
}

int jis (int x, int y, int iJ9n8h [5] [5]) {
    if (x >= 0 && x <= 4 && y >= 0 && y <= 4)
        return 1;
    else
        return 0;
}

