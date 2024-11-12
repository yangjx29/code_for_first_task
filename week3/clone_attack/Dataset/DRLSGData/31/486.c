struct   stu {
    char QEl7ni [(323 - 313)];
    char BFBX0LlqK [(364 - 344)];
    char q504L8;
    int age;
    char FTx9WnXoR [10];
    char wkgyhCHMejz [(495 - 480)];
    struct   stu *kmTH0Cc9p;
}
student;
int GS8rhNDsb;

struct   stu *creat (void ) {
    struct   stu *xMWxKXYDa, *OtcWxdgOQleB, *head;
    xMWxKXYDa = OtcWxdgOQleB = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s %s %c %d %s %s", xMWxKXYDa->QEl7ni, xMWxKXYDa->BFBX0LlqK, &xMWxKXYDa->q504L8, &xMWxKXYDa->age, xMWxKXYDa->FTx9WnXoR, xMWxKXYDa->wkgyhCHMejz);
    GS8rhNDsb = (345 - 345);
    head = (329 - 329);
    while ((249 - 248)) {
        if (!((817 - 817) != GS8rhNDsb))
            head = xMWxKXYDa;
        else
            OtcWxdgOQleB->kmTH0Cc9p = xMWxKXYDa;
        OtcWxdgOQleB = xMWxKXYDa;
        xMWxKXYDa = (struct   stu *) malloc (LEN);
        scanf ("%s", xMWxKXYDa->QEl7ni);
        if (!('e' != xMWxKXYDa->QEl7ni[(877 - 877)]))
            break;
        scanf ("%s %c %d %s %s", xMWxKXYDa->BFBX0LlqK, &xMWxKXYDa->q504L8, &xMWxKXYDa->age, xMWxKXYDa->FTx9WnXoR, xMWxKXYDa->wkgyhCHMejz);
        GS8rhNDsb++;
    }
    return (head);
}

void  main () {
    struct   stu *p;
    struct   stu *head;
    int VjzoyhrJ9Wg;
    head = creat ();
    for (; GS8rhNDsb > (366 - 366); GS8rhNDsb--) {
        p = head;
        for (VjzoyhrJ9Wg = 0; VjzoyhrJ9Wg < GS8rhNDsb; VjzoyhrJ9Wg++) {
            p = p->kmTH0Cc9p;
        }
        printf ("%s %s %c %d %s %s\n", p->QEl7ni, p->BFBX0LlqK, p->q504L8, p->age, p->FTx9WnXoR, p->wkgyhCHMejz);
    }
    printf ("%s %s %c %d %s %s\n", head->QEl7ni, head->BFBX0LlqK, head->q504L8, head->age, head->FTx9WnXoR, head->wkgyhCHMejz);
}

