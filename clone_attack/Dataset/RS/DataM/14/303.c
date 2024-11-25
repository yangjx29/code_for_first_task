struct   student {
    char number [20];
    int chinese;
    int j4I96Q1Kz;
    int sum;
    struct   student *next;
}
stu [(100131 - 131)], *s1, *s2, *s3;
int n, nHk5RzmIMxo = 0, max2 = 0, oMtcTZ6CeO = 0;

struct   student *creat (void ) {
    int i;
    struct   student *head;
    struct   student *lgNoOnvAcGJR;
    struct   student *FjrNa0;
    lgNoOnvAcGJR = FjrNa0 = (struct   student *) malloc (LEN);
    for (i = 0; n > i; i++) {
        scanf ("%s%d%d", &lgNoOnvAcGJR->number, &lgNoOnvAcGJR->chinese, &lgNoOnvAcGJR->j4I96Q1Kz);
        FjrNa0 = lgNoOnvAcGJR;
        lgNoOnvAcGJR->sum = lgNoOnvAcGJR->chinese + lgNoOnvAcGJR->j4I96Q1Kz;
        if (nHk5RzmIMxo < lgNoOnvAcGJR->sum) {
            oMtcTZ6CeO = max2;
            s3 = s2;
            max2 = nHk5RzmIMxo;
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
            nHk5RzmIMxo = lgNoOnvAcGJR->sum;
            s2 = s1;
            s1 = lgNoOnvAcGJR;
        }
        else {
            if (lgNoOnvAcGJR->sum > max2) {
                oMtcTZ6CeO = max2;
                s3 = s2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                max2 = lgNoOnvAcGJR->sum;
                s2 = lgNoOnvAcGJR;
            }
            else {
                if (lgNoOnvAcGJR->sum > oMtcTZ6CeO) {
                    oMtcTZ6CeO = lgNoOnvAcGJR->sum;
                    s3 = lgNoOnvAcGJR;
                };
            };
        }
        if (i == 0)
            head = lgNoOnvAcGJR;
        else
            FjrNa0->next = lgNoOnvAcGJR;
        lgNoOnvAcGJR = (struct   student *) malloc (LEN);
    }
    lgNoOnvAcGJR = NULL;
    return (head);
}

void  main () {
    struct   student *vSkiZtT7;
    printf ("%s %d\n", s1->number, s1->sum);
    printf ("%s %d\n", s2->number, s2->sum);
    printf ("%s %d", s3->number, s3->sum);
    scanf ("%d", &n);
    vSkiZtT7 = creat ();
}

