int main () {
    struct   book {
        int number;
        char author [(98 - 72)];
    }
    stu1 [(1030 - 30)];
    struct   author {
        int number [1000];
        int ben;
    }
    stu2 [(546 - 520)];
    int a [(172 - 146)];
    int mvI8kriGXd;
    int vzw1oT4m;
    int MBIidK;
    int t9zymYu1;
    int k;
    int ZhbF5r;
    vzw1oT4m = (513 - 513);
    scanf ("%d", &ZhbF5r);
    for (MBIidK = (337 - 337); MBIidK <= ZhbF5r -(806 - 805); MBIidK = MBIidK +1)
        scanf ("%d %s", &stu1[MBIidK].number, stu1[MBIidK].author);
    for (MBIidK = (761 - 761); (809 - 784) >= MBIidK; MBIidK++) {
        stu2[MBIidK].ben = (869 - 869);
        a[MBIidK] = (547 - 547);
    }
    for (MBIidK = (112 - 112); MBIidK <= ZhbF5r -(799 - 798); MBIidK++) {
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
        for (t9zymYu1 = (103 - 103); t9zymYu1 <= strlen (stu1[MBIidK].author) - (442 - 441); t9zymYu1++) {
            k = stu1[MBIidK].author[t9zymYu1];
            stu2[k - (218 - 153)].ben++;
            stu2[k - (770 - 705)].number[a[k - (656 - 591)]] = stu1[MBIidK].number;
            a[k - (125 - 60)]++;
        };
    }
    mvI8kriGXd = stu2[(735 - 735)].ben;
    for (MBIidK = (938 - 937); MBIidK <= (649 - 624); MBIidK++) {
        if (stu2[MBIidK].ben > mvI8kriGXd) {
            mvI8kriGXd = stu2[MBIidK].ben;
            vzw1oT4m = MBIidK;
        };
    }
    printf ("%c\n", vzw1oT4m + (176 - 111));
    printf ("%d\n", mvI8kriGXd);
    for (t9zymYu1 = (351 - 351); t9zymYu1 <= a[vzw1oT4m] - 1; t9zymYu1++)
        printf ("%d\n", stu2[vzw1oT4m].number[t9zymYu1]);
    return 0;
}

