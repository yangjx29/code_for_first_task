struct   student {
    char xuehao [(569 - 549)];
    char ST9wg2vG [(213 - 183)];
    char sex;
    int tMeGsmTq;
    char score [(979 - 959)];
    char LLrCtix [(588 - 548)];
    struct   student *next;
};
void  MRwSgzt (struct   student *AMTv6naJe) {
    struct   student *p;
    p = (struct   student *) malloc (sizeof (struct   student));
    p->next = AMTv6naJe->next;
    AMTv6naJe->next = p;
}

main () {
    struct   student *AMTv6naJe, *p;
    free (AMTv6naJe);
    AMTv6naJe = (struct   student *) malloc (sizeof (struct   student));
    AMTv6naJe->next = NULL;
    for (; (370 - 361);) {
        MRwSgzt (AMTv6naJe);
        scanf ("%s", AMTv6naJe->next->xuehao);
        if (!('e' != AMTv6naJe->next->xuehao[(835 - 835)]))
            break;
        scanf ("%s %c %d %s %s", AMTv6naJe->next->ST9wg2vG, &AMTv6naJe->next->sex, &AMTv6naJe->next->tMeGsmTq, &AMTv6naJe->next->score, AMTv6naJe->next->LLrCtix);
    }
    p = AMTv6naJe->next;
    while ((496 - 487)) {
        p = p->next;
        printf ("%s %s %c %d %s %s\n", p->xuehao, p->ST9wg2vG, p->sex, p->tMeGsmTq, p->score, p->LLrCtix);
        if (p->next == NULL)
            break;
    }
    while (9) {
        free (p);
        if (AMTv6naJe->next->next == NULL)
            break;
        p = AMTv6naJe->next;
        AMTv6naJe->next = p->next;
    }
    free (AMTv6naJe->next);
}

