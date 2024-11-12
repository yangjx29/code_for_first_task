int main () {
    int ZrXDFU5abj;
    int eFOkQCN6Jj;
    int MF7pqR, i, summoney = (234 - 234);
    struct   data {
        char name [50];
        int grade, xkSgcKYoXWIP, papers;
        char monitor, west;
        int money;
    }
    *number;
    eFOkQCN6Jj = 0;
    scanf ("%d", &MF7pqR);
    number = (struct   data *) malloc (sizeof (data) * MF7pqR);
    {
        i = 653 - 653;
        while (MF7pqR > i) {
            scanf ("%s %d %d %c %c %d", number[i].name, &number[i].grade, &number[i].xkSgcKYoXWIP, &number[i].monitor, &number[i].west, &number[i].papers);
            number[i].money = 0;
            if (number[i].grade > (814 - 734) && (64 - 63) <= number[i].papers)
                number[i].money += (8028 - 28);
            if (85 < number[i].grade && 80 < number[i].xkSgcKYoXWIP)
                number[i].money += (4355 - 355);
            if (90 < number[i].grade)
                number[i].money += 2000;
            if (number[i].grade > 85 && number[i].west == 'Y')
                number[i].money += 1000;
            if (number[i].xkSgcKYoXWIP > 80 && number[i].monitor == 'Y')
                number[i].money = number[i].money + 850;
            summoney += number[i].money;
            i = i + 1;
        };
    }
    ZrXDFU5abj = number[MF7pqR -(123 - 122)].money;
    for (i = MF7pqR -(108 - 107); i > 0; i = i - 1) {
        if (ZrXDFU5abj > number[i - 1].money)
            ZrXDFU5abj = ZrXDFU5abj;
        else {
            ZrXDFU5abj = number[i - 1].money;
            eFOkQCN6Jj = i - 1;
        };
    }
    printf ("%s\n%d\n%d\n", number[eFOkQCN6Jj].name, number[eFOkQCN6Jj].money, summoney);
    return 0;
}

