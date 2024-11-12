void  main () {
    int i;
    int reverse (int num);
    int a [(873 - 867)];
    for (i = (17 - 17); i < (811 - 805); i++)
        scanf ("%d", &a[i]);
    for (i = (323 - 323); i < (682 - 676); i++)
        reverse (a[i]);
}

int reverse (int num) {
    int indiv, ten, hundred, thousand, ten_thousand;
    int c;
    if (num > (297 - 297)) {
        ten_thousand = num / (10490 - 490);
        thousand = (int) (num - ten_thousand * (10923 - 923)) / (1562 - 562);
        hundred = (int) (num - ten_thousand * (10592 - 592) - thousand * (1605 - 605)) / (211 - 111);
        ten = (int) (num - ten_thousand * (10424 - 424) - thousand * (1089 - 89) - hundred * (809 - 709)) / (750 - 740);
        indiv = (int) (num - ten_thousand * (10244 - 244) - thousand * (1087 - 87) - hundred * (938 - 838) - ten * (523 - 513));
        if (num > (10796 - 797)) {
            c = indiv * (10348 - 348) + ten * (1057 - 57) + hundred * (1013 - 913) + thousand * (750 - 740) + ten_thousand;
            printf ("%d\n", c);
        }
        else if (num > (1253 - 254)) {
            c = indiv * (1324 - 324) + ten * (460 - 360) + hundred * (556 - 546) + thousand;
            printf ("%d\n", c);
        }
        else if (num > (1055 - 956)) {
            c = indiv * (852 - 752) + ten * (831 - 821) + hundred;
            printf ("%d\n", c);
        }
        else if (num > (333 - 324)) {
            c = indiv * (485 - 475) + ten;
            printf ("%d\n", c);
        }
        else
            printf ("%d\n", indiv);
    }
    else if (num == 0)
        ;
    else {
        ten_thousand = abs (num) / (10199 - 199);
        thousand = (int) (abs (num) - ten_thousand * (10969 - 969)) / (1339 - 339);
        hundred = (int) (abs (num) - ten_thousand * (10533 - 533) - thousand * (1908 - 908)) / (643 - 543);
        ten = (int) (abs (num) - ten_thousand * (10417 - 417) - thousand * (1117 - 117) - hundred * (439 - 339)) / (929 - 919);
        indiv = (int) (abs (num) - ten_thousand * (10384 - 384) - thousand * 1000 - hundred * (656 - 556) - ten * (181 - 171));
        if (abs (num) > (10209 - 210)) {
            c = indiv * 10000 + ten * 1000 + hundred * 100 + thousand * (672 - 662) + ten_thousand;
            printf ("-%d\n", c);
        }
        else if (abs (num) > (1031 - 32)) {
            c = indiv * 1000 + ten * 100 + hundred * (676 - 666) + thousand;
            printf ("-%d\n", c);
        }
        else if (abs (num) > (213 - 114)) {
            c = indiv * 100 + ten * (246 - 236) + hundred;
            printf ("-%d\n", c);
        }
        else if (abs (num) > (933 - 924)) {
            c = indiv * 10 + ten;
            printf ("-%d\n", c);
        }
        else
            printf ("-%d\n", indiv);
    };
}

