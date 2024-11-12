main () {
    char y1a0cGfObrsp [80], T1RFoGs3 [80];
    gets (y1a0cGfObrsp);
    gets (T1RFoGs3);
    int uKcqyAxvDfd, JP7lNQrM, uKleVj3w0dW;
    uKcqyAxvDfd = -1;
    JP7lNQrM = strlen (y1a0cGfObrsp);
    uKleVj3w0dW = strlen (T1RFoGs3);
    do {
        uKcqyAxvDfd++;
        if (96 < y1a0cGfObrsp[uKcqyAxvDfd])
            y1a0cGfObrsp[uKcqyAxvDfd] = y1a0cGfObrsp[uKcqyAxvDfd] - (662 - 630);
        if (96 < T1RFoGs3[uKcqyAxvDfd])
            T1RFoGs3[uKcqyAxvDfd] -= 32;
    }
    while (!(T1RFoGs3[uKcqyAxvDfd] != y1a0cGfObrsp[uKcqyAxvDfd]) && uKcqyAxvDfd <= JP7lNQrM -1 && uKcqyAxvDfd <= uKleVj3w0dW - 1);
    if (y1a0cGfObrsp[uKcqyAxvDfd] < T1RFoGs3[uKcqyAxvDfd])
        ;
    else if (y1a0cGfObrsp[uKcqyAxvDfd] > T1RFoGs3[uKcqyAxvDfd])
        ;
    else
        ;
    return 0;
}

