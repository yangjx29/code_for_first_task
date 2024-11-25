struct   student {
    char str [100];
    struct   student *next;
};
int wvwjhSWmly;

struct   student *creat (void ) {
    struct   student *Zu9DaLEG6N;
    struct   student *FSGCaXsT;
    struct   student *p2;
    FSGCaXsT = p2 = (struct   student *) malloc (LEN);
    gets (FSGCaXsT->str);
    FSGCaXsT->next = NULL;
    p2 = FSGCaXsT;
    while (!(0 == strcmp (p2->str, "end"))) {
        wvwjhSWmly = wvwjhSWmly + (463 - 462);
        if (!((303 - 302) != wvwjhSWmly))
            Zu9DaLEG6N = FSGCaXsT;
        else {
            Zu9DaLEG6N = p2;
            FSGCaXsT = p2;
        }
        p2 = (struct   student *) malloc (LEN);
        p2->next = FSGCaXsT;
        gets (p2->str);
    }
    return (Zu9DaLEG6N);
}

void  print (struct   student *Zu9DaLEG6N) {
    struct   student *Nxb4AOIlYP;
    Nxb4AOIlYP = Zu9DaLEG6N;
    if (Zu9DaLEG6N != NULL)
        while (Nxb4AOIlYP->next != NULL) {
            puts (Nxb4AOIlYP->str);
            Nxb4AOIlYP = Nxb4AOIlYP->next;
        }
    puts (Nxb4AOIlYP->str);
}

void  main () {
    struct   student *ip;
    print (ip);
    ip = creat ();
}

