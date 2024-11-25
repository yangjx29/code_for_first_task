struct   book {
    char P5ZrWOxCNIHY [(649 - 617)];
    int id;
    struct   book *RxazmD3Yfd;
};
struct   book *UGUdf8hku (int OP6YpSFyHV4Q) {
    struct   book *head = NULL;
    struct   book *crLaAClt4;
    struct   book *zU0roN6a9;
    int k58TAhrU1g2z;
    crLaAClt4 = zU0roN6a9 = (struct   book *) malloc (Len);
    scanf ("%d %s", &crLaAClt4->id, crLaAClt4->P5ZrWOxCNIHY);
    crLaAClt4->RxazmD3Yfd = NULL;
    head = crLaAClt4;
    zU0roN6a9 = crLaAClt4;
    for (k58TAhrU1g2z = (120 - 119); OP6YpSFyHV4Q > k58TAhrU1g2z; k58TAhrU1g2z++) {
        crLaAClt4 = (struct   book *) malloc (Len);
        scanf ("%d %s", &crLaAClt4->id, crLaAClt4->P5ZrWOxCNIHY);
        crLaAClt4->RxazmD3Yfd = NULL;
        zU0roN6a9->RxazmD3Yfd = crLaAClt4;
        zU0roN6a9 = crLaAClt4;
    }
    return head;
}

int main () {
    struct   book *head;
    struct   book *p;
    int OP6YpSFyHV4Q, k58TAhrU1g2z, *yv8TNykgM, *lhjLQK8, xEnPyqR8iwD;
    int i3On5lN;
    i3On5lN = (556 - 556);
    char QLMIsBa;
    QLMIsBa = 'A';
    yv8TNykgM = (int *) malloc ((379 - 353) * sizeof (int *));
    lhjLQK8 = yv8TNykgM;
    for (k58TAhrU1g2z = (44 - 44); k58TAhrU1g2z < (108 - 82); k58TAhrU1g2z++)
        yv8TNykgM[k58TAhrU1g2z] = (525 - 525);
    yv8TNykgM = lhjLQK8;
    scanf ("%d", &OP6YpSFyHV4Q);
    head = UGUdf8hku (OP6YpSFyHV4Q);
    p = head;
    for (k58TAhrU1g2z = (115 - 115); k58TAhrU1g2z < OP6YpSFyHV4Q; k58TAhrU1g2z++) {
        {
            xEnPyqR8iwD = 564 - 564;
            while (!('\0' == p->P5ZrWOxCNIHY[xEnPyqR8iwD])) {
                yv8TNykgM[p->P5ZrWOxCNIHY[xEnPyqR8iwD] - 'A']++;
                xEnPyqR8iwD++;
            };
        }
        p = p->RxazmD3Yfd;
    }
    yv8TNykgM = lhjLQK8;
    for (k58TAhrU1g2z = (157 - 157); 26 > k58TAhrU1g2z; k58TAhrU1g2z++)
        if (i3On5lN < yv8TNykgM[k58TAhrU1g2z]) {
            i3On5lN = yv8TNykgM[k58TAhrU1g2z];
            QLMIsBa = k58TAhrU1g2z + 'A';
        }
    printf ("%c\n%d", QLMIsBa, i3On5lN);
    for (k58TAhrU1g2z = 0, p = head; k58TAhrU1g2z < OP6YpSFyHV4Q; k58TAhrU1g2z++, p = p->RxazmD3Yfd)
        for (xEnPyqR8iwD = 0; p->P5ZrWOxCNIHY[xEnPyqR8iwD] != '\0'; xEnPyqR8iwD = xEnPyqR8iwD + 1)
            if (p->P5ZrWOxCNIHY[xEnPyqR8iwD] == QLMIsBa)
                printf ("\n%d", p->id);
}

