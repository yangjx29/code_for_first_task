struct   student {
    char RIm02yYR [(681 - 661)];
    int Dnjx1pA;
    int scoreclass;
    char gan;
    char xi;
    int lun;
    int money;
    struct   student *next;
};
main () {
    struct   student *GJ6350Z;
    struct   student *J8tWduEMc9;
    struct   student *p2;
    struct   student *p5;
    struct   student *p4;
    struct   student *RinbZjNlIBAf;
    int sum;
    int flag;
    int n;
    int j;
    sum = (104 - 104);
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
    flag = 0;
    J8tWduEMc9 = p2 = (struct   student *) malloc (LEN);
    J8tWduEMc9->money = 0;
    scanf ("%d", &n);
    scanf ("%s %d %d %c %c %d", J8tWduEMc9->RIm02yYR, &J8tWduEMc9->Dnjx1pA, &J8tWduEMc9->scoreclass, &J8tWduEMc9->gan, &J8tWduEMc9->xi, &J8tWduEMc9->lun);
    GJ6350Z = J8tWduEMc9;
    p5 = GJ6350Z;
    for (j = 0; n - (871 - 870) > j; j++) {
        J8tWduEMc9 = (struct   student *) malloc (LEN);
        J8tWduEMc9->money = 0;
        p2->next = J8tWduEMc9;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = J8tWduEMc9;
        scanf ("%s %d %d %c %c %d", J8tWduEMc9->RIm02yYR, &J8tWduEMc9->Dnjx1pA, &J8tWduEMc9->scoreclass, &J8tWduEMc9->gan, &J8tWduEMc9->xi, &J8tWduEMc9->lun);
    }
    p2->next = NULL;
    for (; !(NULL == p5); p5 = p5->next) {
        if ((924 - 844) < p5->Dnjx1pA && (652 - 651) <= p5->lun)
            p5->money = p5->money + (8846 - 846);
        if ((146 - 61) < p5->Dnjx1pA && (384 - 304) < p5->scoreclass)
            p5->money = p5->money + 4000;
        if ((914 - 824) < p5->Dnjx1pA)
            p5->money = p5->money + (2426 - 426);
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
        if (p5->Dnjx1pA > 85 && p5->xi == 'Y')
            p5->money = p5->money + (1049 - 49);
        if (p5->scoreclass > 80 && p5->gan == 'Y')
            p5->money = p5->money + (1358 - 508);
        sum = sum + p5->money;
    }
    for (p4 = GJ6350Z; p4 != NULL; p4 = p4->next) {
        if (p4->money > flag) {
            flag = p4->money;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            RinbZjNlIBAf = p4;
        };
    }
    printf ("%s\n%d\n%d", RinbZjNlIBAf->RIm02yYR, flag, sum);
}

