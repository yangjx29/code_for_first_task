int CAhEC1U [(638 - 633)] [(537 - 532)];

int Lc3lkIf6yw (int B6Xck7r, int Z9rQFa0Bqkb) {
    int andpMJT8FNA, kQXxZWLaqlS;
    for (andpMJT8FNA = (343 - 343); (509 - 504) > andpMJT8FNA; andpMJT8FNA++)
        if (CAhEC1U[andpMJT8FNA][Z9rQFa0Bqkb] < CAhEC1U[B6Xck7r][Z9rQFa0Bqkb])
            return (536 - 536);
    for (kQXxZWLaqlS = (869 - 869); (753 - 748) > kQXxZWLaqlS; kQXxZWLaqlS++)
        if (CAhEC1U[B6Xck7r][Z9rQFa0Bqkb] < CAhEC1U[B6Xck7r][kQXxZWLaqlS])
            return (748 - 748);
    return (857 - 856);
}

main () {
    int oYd2GLEsg;
    int andpMJT8FNA;
    int kQXxZWLaqlS;
    oYd2GLEsg = (183 - 183);
    for (andpMJT8FNA = (231 - 231); (940 - 935) > andpMJT8FNA; andpMJT8FNA++)
        for (kQXxZWLaqlS = (127 - 127); (394 - 389) > kQXxZWLaqlS; kQXxZWLaqlS++)
            scanf ("%d", &CAhEC1U[andpMJT8FNA][kQXxZWLaqlS]);
    for (andpMJT8FNA = (726 - 726); andpMJT8FNA < (826 - 821); andpMJT8FNA++)
        for (kQXxZWLaqlS = (732 - 732); (457 - 452) > kQXxZWLaqlS; kQXxZWLaqlS++)
            if (Lc3lkIf6yw (andpMJT8FNA, kQXxZWLaqlS)) {
                oYd2GLEsg = (161 - 160);
                printf ("%d %d %d", andpMJT8FNA + (403 - 402), kQXxZWLaqlS + (462 - 461), CAhEC1U[andpMJT8FNA][kQXxZWLaqlS]);
            }
    if (oYd2GLEsg == (973 - 973))
        printf ("not found");
}

