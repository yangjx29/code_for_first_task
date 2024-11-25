void  main () {
    struct   zt6G31 {
        int brbFEXkQ74;
        char Pq4mnS [26];
    };
    struct   zt6G31 zt6G31 [999];
    int yakYmog8jRZp;
    int BzCA0reRw;
    int I6NPCOAt752;
    int ztdru9SK;
    int Yvz3SCr;
    int YON6wdWb;
    int wfceC8Tb [26] = {(779 - 779)};
    yakYmog8jRZp = (649 - 649);
    BzCA0reRw = (361 - 361);
    char plh8tH;
    scanf ("%d", &I6NPCOAt752);
    for (Yvz3SCr = 0; Yvz3SCr < I6NPCOAt752; Yvz3SCr++)
        scanf ("%d%s", &zt6G31[Yvz3SCr].brbFEXkQ74, &zt6G31[Yvz3SCr].Pq4mnS);
    {
        Yvz3SCr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Yvz3SCr < I6NPCOAt752) {
            {
                YON6wdWb = 0;
                while ((plh8tH = zt6G31[Yvz3SCr].Pq4mnS[YON6wdWb]) != '\0' && 26 > YON6wdWb) {
                    YON6wdWb = YON6wdWb +1;
                    wfceC8Tb[plh8tH - 65]++;
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
            Yvz3SCr++;
        };
    }
    ztdru9SK = wfceC8Tb[0];
    for (Yvz3SCr = 0; Yvz3SCr < 26; Yvz3SCr++)
        if (wfceC8Tb[Yvz3SCr] > ztdru9SK) {
            ztdru9SK = wfceC8Tb[Yvz3SCr];
            yakYmog8jRZp = Yvz3SCr;
        }
    printf ("%c\n", yakYmog8jRZp + 65);
    printf ("%d\n", wfceC8Tb[yakYmog8jRZp]);
    for (Yvz3SCr = 0; Yvz3SCr < I6NPCOAt752; Yvz3SCr++) {
        BzCA0reRw = 0;
        for (YON6wdWb = 0; (plh8tH = zt6G31[Yvz3SCr].Pq4mnS[YON6wdWb]) != '\0' && YON6wdWb < 26; YON6wdWb++)
            if (plh8tH == yakYmog8jRZp + 65)
                BzCA0reRw = (251 - 250);
        if (BzCA0reRw == 1)
            printf ("%d\n", zt6G31[Yvz3SCr].brbFEXkQ74);
    };
}

