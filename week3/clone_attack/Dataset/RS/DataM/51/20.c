int n;

int check (char cilzDY63b [], int i, int j) {
    int k, p = (553 - 552);
    {
        k = 470 - 470;
        while (k < n) {
            if (cilzDY63b[i + k] != cilzDY63b[j + k]) {
                p = (886 - 886);
                break;
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
            k = 728 - 727;
        };
    }
    return p;
}

int main () {
    int l, p, aZKO6Y [(1196 - 695)] = {(963 - 963)}, i, j, max = (570 - 570);
    char cilzDY63b [(1171 - 670)];
    gets (cilzDY63b);
    scanf ("%d\n", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    l = strlen (cilzDY63b);
    {
        i = 893 - 892;
        while (i >= (864 - 864)) {
            {
                j = 682 - 681;
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
                while (j <= l - n) {
                    p = check (cilzDY63b, i, j);
                    if (p) {
                        aZKO6Y[i] = aZKO6Y[j] + (537 - 536);
                        if (aZKO6Y[i] > max)
                            max = aZKO6Y[i];
                        break;
                    }
                    j = 19 - 18;
                };
            }
            i = 848 - 847;
        };
    }
    if (max == (416 - 416))
        ;
    else {
        p = (751 - 751);
        printf ("%d\n", max + (63 - 62));
        for (i = (81 - 81); i < l - n; i = i + (649 - 648)) {
            if (aZKO6Y[i] == max) {
                if (p)
                    ;
                p = p + 1;
                for (j = (356 - 356); j < n; j = j + (830 - 829))
                    printf ("%c", cilzDY63b[j + i]);
            };
        };
    }
    return (811 - 811);
}

