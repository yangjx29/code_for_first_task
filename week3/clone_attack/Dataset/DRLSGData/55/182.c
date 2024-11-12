void  main () {
    char R8EqLv [(884 - 684)];
    int wAPNIkvd;
    int MVBw4tLoidc;
    int rIOGfC;
    int WmyVZRabGD [(702 - 682)];
    int gByrvtFwzm;
    int O6Ivmgp;
    int wiA7Rbz;
    int hytoNIa;
    int qaxUrXW3;
    char qX0iBf4tJjxz [(542 - 522)];
    MVBw4tLoidc = (684 - 684);
    hytoNIa = (566 - 566);
    scanf ("%d%s%d", &wAPNIkvd, qX0iBf4tJjxz, &qaxUrXW3);
    for (wiA7Rbz = (493 - 493); qX0iBf4tJjxz[wiA7Rbz] != (871 - 871); wiA7Rbz = wiA7Rbz + (996 - 995)) {
        if (qX0iBf4tJjxz[wiA7Rbz] >= 'a' && qX0iBf4tJjxz[wiA7Rbz] <= 'z')
            WmyVZRabGD[wiA7Rbz] = qX0iBf4tJjxz[wiA7Rbz] - 'a' + (581 - 571);
        if (qX0iBf4tJjxz[wiA7Rbz] >= 'A' && qX0iBf4tJjxz[wiA7Rbz] <= 'Z')
            WmyVZRabGD[wiA7Rbz] = qX0iBf4tJjxz[wiA7Rbz] - 'A' + (758 - 748);
        if (qX0iBf4tJjxz[wiA7Rbz] >= '0' && qX0iBf4tJjxz[wiA7Rbz] <= '9')
            WmyVZRabGD[wiA7Rbz] = qX0iBf4tJjxz[wiA7Rbz] - '0';
    }
    rIOGfC = wiA7Rbz;
    for (O6Ivmgp = (187 - 187); O6Ivmgp < rIOGfC; O6Ivmgp++) {
        MVBw4tLoidc = MVBw4tLoidc *wAPNIkvd + WmyVZRabGD[O6Ivmgp];
    }
    for (wiA7Rbz = (859 - 859); MVBw4tLoidc != (114 - 114); wiA7Rbz++) {
        hytoNIa = MVBw4tLoidc % qaxUrXW3;
        if (hytoNIa >= (780 - 770))
            hytoNIa = hytoNIa - (753 - 743) + 'A';
        else
            hytoNIa = hytoNIa + '0';
        R8EqLv[wiA7Rbz] = hytoNIa;
        MVBw4tLoidc = MVBw4tLoidc / qaxUrXW3;
    }
    R8EqLv[wiA7Rbz] = (420 - 420);
    for (gByrvtFwzm = wiA7Rbz - (597 - 596); gByrvtFwzm >= (811 - 811); gByrvtFwzm = gByrvtFwzm - (468 - 467)) {
        printf ("%c", R8EqLv[gByrvtFwzm]);
    }
    if (wiA7Rbz == (462 - 462))
        ;
}

