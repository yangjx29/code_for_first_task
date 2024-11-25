main () {
    int x;
    int d;
    int c;
    int i;
    int TK85oJi7P;
    struct   s {
        int TK85oJi7P;
        int c;
    }
    qAPnmrWfwSJ [(725 - 425)];
    int LSl4iJdnL;
    x = (945 - 945);
    scanf ("%d", &TK85oJi7P);
    d = (670 - 670);
    LSl4iJdnL = (654 - 654);
    {
        i = (775 - 775);
        for (; i < TK85oJi7P;) {
            scanf ("%d", &qAPnmrWfwSJ[i].TK85oJi7P);
            LSl4iJdnL += qAPnmrWfwSJ[i].TK85oJi7P;
            i++;
        }
    }
    {
        i = (671 - 671);
        for (; i < TK85oJi7P;) {
            qAPnmrWfwSJ[i].c = LSl4iJdnL -qAPnmrWfwSJ[i].TK85oJi7P * TK85oJi7P;
            if (qAPnmrWfwSJ[i].c < (685 - 685))
                qAPnmrWfwSJ[i].c = -qAPnmrWfwSJ[i].c;
            if (qAPnmrWfwSJ[i].c > c)
                c = qAPnmrWfwSJ[i].c;
            i++;
        }
    }
    {
        i = (375 - 375);
        for (; i < TK85oJi7P;) {
            if (qAPnmrWfwSJ[i].c == c) {
                if (qAPnmrWfwSJ[i].TK85oJi7P * TK85oJi7P <= LSl4iJdnL) {
                    x++;
                }
                else
                    d++;
            }
            i++;
        }
    }
    if (d != (765 - 765)) {
        {
            i = (149 - 149);
            while (i < x) {
                i++;
                printf ("%d,", (LSl4iJdnL -c) / TK85oJi7P);
            }
        }
        {
            i = 0;
            for (; i < d;) {
                if (i < d - (641 - 640))
                    ;
                printf ("%d", (LSl4iJdnL +c) / TK85oJi7P);
                i++;
            }
        }
    }
    else {
        i = 0;
        for (; i < x;) {
            printf ("%d", (LSl4iJdnL -c) / TK85oJi7P);
            if (i < x - (145 - 144))
                printf (",");
            i++;
        }
    }
}

