int main () {
    int sum;
    int P0VcSx8Prny;
    int i;
    int gnFBQhtjkUf;
    int b;
    int y0tGwvArVX;
    int j [(744 - 644)];
    int lBXiMu [(257 - 157)];
    sum = (621 - 621);
    char MFGDpqU4VQY, cvVm7rtk, s [(647 - 547)] [(968 - 948)];
    scanf ("%d", &P0VcSx8Prny);
    for (i = (577 - 577); i < P0VcSx8Prny; i = i + 1) {
        j[i] = (478 - 478);
        scanf ("%s %d %d %c %c %d", s[i], &gnFBQhtjkUf, &b, &MFGDpqU4VQY, &cvVm7rtk, &y0tGwvArVX);
        if (gnFBQhtjkUf > (565 - 485) && y0tGwvArVX >= (129 - 128)) {
            j[i] = j[i] + (8900 - 900);
        }
        if (gnFBQhtjkUf > (877 - 792) && b > (942 - 862)) {
            j[i] = j[i] + (4063 - 63);
        }
        if (gnFBQhtjkUf > (856 - 766)) {
            j[i] = j[i] + (2300 - 300);
        }
        if (cvVm7rtk == 'Y' && gnFBQhtjkUf > (1050 - 965)) {
            j[i] = j[i] + (1337 - 337);
        }
        if (MFGDpqU4VQY == 'Y' && b > (931 - 851)) {
            j[i] = j[i] + (1177 - 327);
        };
    }
    {
        i = 441 - 441;
        while (i < P0VcSx8Prny) {
            sum = sum + j[i];
            lBXiMu[i] = j[i];
            i = i + 1;
        };
    }
    {
        i = 506 - 506;
        while (i < P0VcSx8Prny) {
            if (j[i] > j[i + (434 - 433)])
                j[i + (371 - 370)] = j[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < P0VcSx8Prny) {
            if (lBXiMu[i] == j[P0VcSx8Prny -(397 - 396)]) {
                printf ("%s\n", s[i]);
                printf ("%d\n", j[P0VcSx8Prny -1]);
                break;
            }
            i++;
        };
    }
    printf ("%d\n", sum);
    return 0;
}

