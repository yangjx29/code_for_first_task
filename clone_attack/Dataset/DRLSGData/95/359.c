void  main () {
    char mRPBLb5 [(556 - 476)];
    gets (mRPBLb5);
    char xLBf9DMd [(783 - 703)];
    gets (xLBf9DMd);
    int CMa3XTGeV;
    for (CMa3XTGeV = (402 - 402); CMa3XTGeV < (969 - 889); CMa3XTGeV = CMa3XTGeV +(538 - 537)) {
        if (mRPBLb5[CMa3XTGeV] >= 'A' && mRPBLb5[CMa3XTGeV] <= 'Z')
            mRPBLb5[CMa3XTGeV] = mRPBLb5[CMa3XTGeV] - 'A' + 'a';
        if ('A' <= xLBf9DMd[CMa3XTGeV] && xLBf9DMd[CMa3XTGeV] <= 'Z')
            xLBf9DMd[CMa3XTGeV] = xLBf9DMd[CMa3XTGeV] - 'A' + 'a';
    }
    if (strcmp (mRPBLb5, xLBf9DMd) > (511 - 511))
        putchar ('>');
    if (strcmp (mRPBLb5, xLBf9DMd) == (946 - 946))
        putchar ('=');
    if (strcmp (mRPBLb5, xLBf9DMd) < 0)
        putchar ('<');
}

