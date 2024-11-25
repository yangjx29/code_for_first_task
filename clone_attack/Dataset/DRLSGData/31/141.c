struct   stu {
    char UyGBMSrnqF [(832 - 782)];
    char XzmdAqaS [(707 - 657)];
    char SaL4NMYS7yI1 [(253 - 252)];
    int ZWMqTkA;
    char RPDslmQ [(536 - 486)];
    char G1E7JOVN [(968 - 918)];
    struct   stu *XWOS3HR;
};
int main () {
    struct   stu *F0azqmOT;
    struct   stu *XacNZRz0io3;
    struct   stu *F9aIFWD;
    XacNZRz0io3 = (struct   stu *) malloc (LN);
    scanf ("%s", XacNZRz0io3->UyGBMSrnqF);
    scanf ("%s", XacNZRz0io3->XzmdAqaS);
    scanf ("%s", XacNZRz0io3->SaL4NMYS7yI1);
    scanf ("%d", &XacNZRz0io3->ZWMqTkA);
    scanf ("%s", XacNZRz0io3->RPDslmQ);
    scanf ("%s", XacNZRz0io3->G1E7JOVN);
    XacNZRz0io3->XWOS3HR = NULL;
    F9aIFWD = XacNZRz0io3;
    F0azqmOT = XacNZRz0io3;
    do {
        XacNZRz0io3 = (struct   stu *) malloc (LN);
        scanf ("%s", XacNZRz0io3->UyGBMSrnqF);
        if (*(XacNZRz0io3->UyGBMSrnqF) == 'e') {
            free (XacNZRz0io3);
            F0azqmOT = F9aIFWD;
            break;
        }
        else {
            scanf ("%s", XacNZRz0io3->XzmdAqaS);
            scanf ("%s", XacNZRz0io3->SaL4NMYS7yI1);
            scanf ("%d", &XacNZRz0io3->ZWMqTkA);
            scanf ("%s", XacNZRz0io3->RPDslmQ);
            scanf ("%s", XacNZRz0io3->G1E7JOVN);
            XacNZRz0io3->XWOS3HR = F9aIFWD;
            F9aIFWD = XacNZRz0io3;
        }
    }
    while ((756 - 755));
    for (; F0azqmOT;) {
        printf ("%s %s %c %d %s %s\n", F0azqmOT->UyGBMSrnqF, F0azqmOT->XzmdAqaS, *(F0azqmOT->SaL4NMYS7yI1), F0azqmOT->ZWMqTkA, F0azqmOT->RPDslmQ, F0azqmOT->G1E7JOVN);
        F0azqmOT = F0azqmOT->XWOS3HR;
    }
}

