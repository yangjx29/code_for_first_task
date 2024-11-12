struct   stu {
    char MdDRvP [10];
    char eU2SMOh [20];
    char YfkEyou;
    int age;
    char jH0a7OEqeXb [10];
    char adr [15];
    struct   stu *TfHJP0AF3h;
}
student;
int kNgrxtLFB;

struct   stu *WxOFwH (void ) {
    struct   stu *mebIoJnmD, *la6E4hB1zA9L, *el6br4I;
    mebIoJnmD = la6E4hB1zA9L = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s %s %c %d %s %s", mebIoJnmD->MdDRvP, mebIoJnmD->eU2SMOh, &mebIoJnmD->YfkEyou, &mebIoJnmD->age, mebIoJnmD->jH0a7OEqeXb, mebIoJnmD->adr);
    el6br4I = 0;
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
    kNgrxtLFB = 0;
    for (; 1;) {
        if (!(0 != kNgrxtLFB))
            el6br4I = mebIoJnmD;
        else
            la6E4hB1zA9L->TfHJP0AF3h = mebIoJnmD;
        la6E4hB1zA9L = mebIoJnmD;
        mebIoJnmD = (struct   stu *) malloc (LEN);
        scanf ("%s", mebIoJnmD->MdDRvP);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('e' != mebIoJnmD->MdDRvP[0]))
            break;
        scanf ("%s %c %d %s %s", mebIoJnmD->eU2SMOh, &mebIoJnmD->YfkEyou, &mebIoJnmD->age, mebIoJnmD->jH0a7OEqeXb, mebIoJnmD->adr);
        kNgrxtLFB++;
    }
    return (el6br4I);
}

void  main () {
    struct   stu *pNVo9b, *el6br4I;
    int pU7Sqs0O19;
    el6br4I = WxOFwH ();
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
    for (; kNgrxtLFB > 0; kNgrxtLFB = kNgrxtLFB - 1) {
        pNVo9b = el6br4I;
        for (pU7Sqs0O19 = 0; pU7Sqs0O19 < kNgrxtLFB; pU7Sqs0O19 = pU7Sqs0O19 + 1) {
            pNVo9b = pNVo9b->TfHJP0AF3h;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%s %s %c %d %s %s\n", pNVo9b->MdDRvP, pNVo9b->eU2SMOh, pNVo9b->YfkEyou, pNVo9b->age, pNVo9b->jH0a7OEqeXb, pNVo9b->adr);
    }
    printf ("%s %s %c %d %s %s\n", el6br4I->MdDRvP, el6br4I->eU2SMOh, el6br4I->YfkEyou, el6br4I->age, el6br4I->jH0a7OEqeXb, el6br4I->adr);
}

