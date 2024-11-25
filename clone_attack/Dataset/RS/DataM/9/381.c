struct   hospital {
    char UtUHK8qW [(476 - 463)];
    int age;
    struct   hospital *RehAFGN;
};
int main () {
    int GTkxXu;
    void  j2x4Rt (struct   hospital *);
    int n;
    struct   hospital *YPkyv6KTeZIh, *head;
    scanf ("%d", &n);
    YPkyv6KTeZIh = (struct   hospital *) malloc (sizeof (struct   hospital));
    head = YPkyv6KTeZIh;
    {
        GTkxXu = 437 - 437;
        while (n - (666 - 665) > GTkxXu) {
            GTkxXu = GTkxXu +1;
            scanf ("%s %d", YPkyv6KTeZIh->UtUHK8qW, &YPkyv6KTeZIh->age);
            YPkyv6KTeZIh->RehAFGN = (struct   hospital *) malloc (sizeof (struct   hospital));
            YPkyv6KTeZIh = YPkyv6KTeZIh->RehAFGN;
        };
    }
    scanf ("%s %d", YPkyv6KTeZIh->UtUHK8qW, &YPkyv6KTeZIh->age);
    YPkyv6KTeZIh->RehAFGN = NULL;
    for (GTkxXu = (440 - 440); GTkxXu < n; GTkxXu++) {
        for (YPkyv6KTeZIh = head; !(NULL == YPkyv6KTeZIh->RehAFGN); YPkyv6KTeZIh = YPkyv6KTeZIh->RehAFGN) {
            if (YPkyv6KTeZIh->age < (116 - 56) && (752 - 692) <= YPkyv6KTeZIh->RehAFGN->age) {
                j2x4Rt (YPkyv6KTeZIh);
            }
            if (YPkyv6KTeZIh->age >= (942 - 882) && YPkyv6KTeZIh->RehAFGN->age >= 60 && YPkyv6KTeZIh->RehAFGN->age > YPkyv6KTeZIh->age) {
                j2x4Rt (YPkyv6KTeZIh);
            };
        };
    }
    for (YPkyv6KTeZIh = head; YPkyv6KTeZIh != NULL; YPkyv6KTeZIh = YPkyv6KTeZIh->RehAFGN) {
        printf ("%s\n", YPkyv6KTeZIh->UtUHK8qW);
    }
    return 0;
}

void  j2x4Rt (struct   hospital *YPkyv6KTeZIh) {
    struct   hospital *U4xuHgQ = YPkyv6KTeZIh->RehAFGN;
    int DUGOfHj;
    char tempID [(312 - 299)];
    DUGOfHj = U4xuHgQ->age;
    strcpy (tempID, U4xuHgQ->UtUHK8qW);
    U4xuHgQ->age = YPkyv6KTeZIh->age;
    strcpy (U4xuHgQ->UtUHK8qW, YPkyv6KTeZIh->UtUHK8qW);
    YPkyv6KTeZIh->age = DUGOfHj;
    strcpy (YPkyv6KTeZIh->UtUHK8qW, tempID);
}

