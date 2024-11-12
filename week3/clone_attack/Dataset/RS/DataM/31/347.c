struct   student {
    struct   student *WraT8PCEe;
    char wLawyH2 [(1014 - 914)];
    char Id1gWspw [(570 - 550)];
    char UaHT7KpQEN1i [2];
    char OyZBO6 [(516 - 506)];
    char rqPMNveXQAi [10];
    char qDWCs96TKJn [100];
    struct   student *LxeMs3b76;
};
void  main () {
    int xjgsUywfM;
    xjgsUywfM = (470 - 470);
    struct   student *P3TWwA80tfsM, *M5S4HbF, *LlTNcZOwpy, *NmySnb;
    M5S4HbF = (struct   student *) malloc (LEN);
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
    scanf ("%s", M5S4HbF->wLawyH2);
    while (!(0 == strcmp (M5S4HbF->wLawyH2, "end"))) {
        xjgsUywfM = xjgsUywfM + 1;
        scanf ("%s %s %s %s %s", M5S4HbF->Id1gWspw, M5S4HbF->UaHT7KpQEN1i, M5S4HbF->OyZBO6, M5S4HbF->rqPMNveXQAi, M5S4HbF->qDWCs96TKJn);
        if (xjgsUywfM == 1) {
            M5S4HbF->WraT8PCEe = NULL;
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
            LlTNcZOwpy = M5S4HbF;
        }
        else
            M5S4HbF->WraT8PCEe = LlTNcZOwpy;
        LlTNcZOwpy = M5S4HbF;
        M5S4HbF = (struct   student *) malloc (LEN);
        scanf ("%s", M5S4HbF->wLawyH2);
    }
    NmySnb = LlTNcZOwpy;
    do {
        printf ("%s %s %s %s %s %s\n", NmySnb->wLawyH2, NmySnb->Id1gWspw, NmySnb->UaHT7KpQEN1i, NmySnb->OyZBO6, NmySnb->rqPMNveXQAi, NmySnb->qDWCs96TKJn);
        NmySnb = NmySnb->WraT8PCEe;
    }
    while (NmySnb != NULL);
}

