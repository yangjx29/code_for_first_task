struct   stu {
    char ncECwJmqpX [200];
    int r7EoaqRMsN;
    int QFO89wnyPCQK;
    char MOCBhSw;
    char AuqlbTn6F;
    int aDFPETXWGe;
    int rRMLyACscEOX;
    struct   stu *GzFGUwSWjY6;
};
void  tv94Lxj (struct   stu *vguSxZ7lTF, struct   stu *q) {
    struct   stu *waBUdNwDXcuz = vguSxZ7lTF, *s1B2EKbj8 = waBUdNwDXcuz->GzFGUwSWjY6, *hdD2rWPUi;
    hdD2rWPUi = (struct   stu *) malloc (sizeof (struct   stu));
    hdD2rWPUi->QFO89wnyPCQK = q->QFO89wnyPCQK;
    strcpy (hdD2rWPUi->ncECwJmqpX, q->ncECwJmqpX);
    hdD2rWPUi->r7EoaqRMsN = q->r7EoaqRMsN;
    hdD2rWPUi->rRMLyACscEOX = q->rRMLyACscEOX;
    hdD2rWPUi->AuqlbTn6F = q->AuqlbTn6F;
    hdD2rWPUi->MOCBhSw = q->MOCBhSw;
    hdD2rWPUi->GzFGUwSWjY6 = NULL;
    while ((s1B2EKbj8 != NULL) && (hdD2rWPUi->rRMLyACscEOX <= s1B2EKbj8->rRMLyACscEOX)) {
        waBUdNwDXcuz = s1B2EKbj8;
        s1B2EKbj8 = s1B2EKbj8->GzFGUwSWjY6;
    }
    waBUdNwDXcuz->GzFGUwSWjY6 = hdD2rWPUi;
    hdD2rWPUi->GzFGUwSWjY6 = s1B2EKbj8;
}

void  main () {
    struct   stu *vguSxZ7lTF;
    struct   stu *s1B2EKbj8, *q;
    int p1NMIic7KY, i6kb20yT38Id, sDixCTLGZ4, N6WvHmZP2D, Lgf1G3oF9nE = (286 - 286);
    char ncECwJmqpX [(936 - 916)];
    float bwAy4hd;
    scanf ("%d", &p1NMIic7KY);
    vguSxZ7lTF = (struct   stu *) malloc (sizeof (struct   stu));
    vguSxZ7lTF->GzFGUwSWjY6 = NULL;
    {
        sDixCTLGZ4 = 227 - 226;
        while (p1NMIic7KY >= sDixCTLGZ4) {
            sDixCTLGZ4++;
            s1B2EKbj8 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s %d %d %c %c %d", s1B2EKbj8->ncECwJmqpX, &s1B2EKbj8->r7EoaqRMsN, &s1B2EKbj8->QFO89wnyPCQK, &s1B2EKbj8->MOCBhSw, &s1B2EKbj8->AuqlbTn6F, &s1B2EKbj8->aDFPETXWGe);
            N6WvHmZP2D = (648 - 648);
            if ((s1B2EKbj8->r7EoaqRMsN > (838 - 758)) && (s1B2EKbj8->aDFPETXWGe > (237 - 237)))
                N6WvHmZP2D = N6WvHmZP2D +(8799 - 799);
            if (((936 - 851) < s1B2EKbj8->r7EoaqRMsN) && (s1B2EKbj8->QFO89wnyPCQK > (365 - 285)))
                N6WvHmZP2D = N6WvHmZP2D +(4758 - 758);
            if ((919 - 829) < s1B2EKbj8->r7EoaqRMsN)
                N6WvHmZP2D = N6WvHmZP2D +(2612 - 612);
            if (((759 - 674) < s1B2EKbj8->r7EoaqRMsN) && (s1B2EKbj8->AuqlbTn6F == 'Y'))
                N6WvHmZP2D = N6WvHmZP2D +(1600 - 600);
            if ((s1B2EKbj8->QFO89wnyPCQK > (667 - 587)) && (s1B2EKbj8->MOCBhSw == 'Y'))
                N6WvHmZP2D = N6WvHmZP2D +(1738 - 888);
            s1B2EKbj8->rRMLyACscEOX = N6WvHmZP2D;
            Lgf1G3oF9nE = Lgf1G3oF9nE +N6WvHmZP2D;
            tv94Lxj (vguSxZ7lTF, s1B2EKbj8);
        }
    }
    s1B2EKbj8 = vguSxZ7lTF->GzFGUwSWjY6;
    printf ("%s\n", s1B2EKbj8->ncECwJmqpX);
    printf ("%d\n", s1B2EKbj8->rRMLyACscEOX);
    printf ("%d\n", Lgf1G3oF9nE);
}

