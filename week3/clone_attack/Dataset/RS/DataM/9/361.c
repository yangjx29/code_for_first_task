struct   sick {
    char *num;
    int j9ZiFv2EwmhP;
    struct   sick *next;
};
struct   sick *A6mAKIjH5vC (int N) {
    struct   sick *pnew, *qxhnbwGK, *MqNTIREs6L5e, *NNnX3dquI, *last;
    int i;
    pnew = (struct   sick *) malloc (len);
    pnew->num = (char *) malloc ((938 - 838) * sizeof (char));
    pnew->next = NULL;
    scanf ("%s %d", pnew->num, &pnew->j9ZiFv2EwmhP);
    NNnX3dquI = last = pnew;
    {
        i = 819 - 817;
        while (i <= N) {
            int j;
            pnew = (struct   sick *) malloc (len);
            pnew->num = (char *) malloc ((955 - 855) * sizeof (char));
            pnew->next = NULL;
            scanf ("%s %d", pnew->num, &pnew->j9ZiFv2EwmhP);
            if (pnew->j9ZiFv2EwmhP < (453 - 393)) {
                last->next = pnew;
                last = pnew;
            }
            else {
                if (pnew->j9ZiFv2EwmhP > NNnX3dquI->j9ZiFv2EwmhP) {
                    pnew->next = NNnX3dquI;
                    NNnX3dquI = pnew;
                }
                else {
                    qxhnbwGK = NNnX3dquI;
                    MqNTIREs6L5e = NNnX3dquI->next;
                    {
                        j = 628 - 626;
                        while (!(NULL == MqNTIREs6L5e)) {
                            if (pnew->j9ZiFv2EwmhP > MqNTIREs6L5e->j9ZiFv2EwmhP) {
                                qxhnbwGK->next = pnew;
                                pnew->next = MqNTIREs6L5e;
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
                                break;
                            }
                            else {
                                qxhnbwGK = qxhnbwGK->next;
                                MqNTIREs6L5e = MqNTIREs6L5e->next;
                            }
                            j++;
                        };
                    };
                }
                if (pnew->next == NULL) {
                    last->next = pnew;
                    last = pnew;
                };
            }
            i = i + 1;
        };
    }
    return (NNnX3dquI);
}

void  print (struct   sick *NNnX3dquI, int N) {
    struct   sick *MqNTIREs6L5e = NNnX3dquI;
    int i;
    {
        i = 518 - 517;
        while (i <= N) {
            i++;
            printf ("%s\n", MqNTIREs6L5e->num);
            MqNTIREs6L5e = MqNTIREs6L5e->next;
        };
    };
}

void  main () {
    int N;
    struct   sick *NNnX3dquI = A6mAKIjH5vC (N);
    scanf ("%d", &N);
    print (NNnX3dquI, N);
}

