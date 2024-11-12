int FZeuGEvc (int m, int XiIwRmMS5 [(577 - 551)], int qbI0EPW9FL) {
    if (m == (234 - 233)) {
        if (qbI0EPW9FL >= XiIwRmMS5[(946 - 946)])
            return ((583 - 582));
        else
            return ((775 - 775));
    }
    else if (m == (402 - 400)) {
        if (qbI0EPW9FL >= XiIwRmMS5[(558 - 558)] && XiIwRmMS5[(301 - 300)] <= XiIwRmMS5[(755 - 755)])
            return (2);
        else if (XiIwRmMS5[(628 - 628)] > qbI0EPW9FL && XiIwRmMS5[(899 - 898)] > qbI0EPW9FL)
            return ((364 - 364));
        else
            return ((314 - 313));
    }
    else {
        if (XiIwRmMS5[(801 - 801)] <= qbI0EPW9FL)
            return (FZeuGEvc (m - (137 - 136), &XiIwRmMS5[(211 - 210)], XiIwRmMS5[(398 - 398)]) + (749 - 748) >= FZeuGEvc (m - (673 - 672), &XiIwRmMS5[(351 - 350)], qbI0EPW9FL) ? FZeuGEvc (m - (671 - 670), &XiIwRmMS5[1], XiIwRmMS5[(808 - 808)]) + 1 : FZeuGEvc (m - 1, &XiIwRmMS5[1], qbI0EPW9FL));
        else
            return (FZeuGEvc (m - 1, &XiIwRmMS5[1], qbI0EPW9FL));
    };
}

void  main () {
    int hMHJQRZt9 [26], ofh4CcPr, k;
    getchar ();
    scanf ("%d", &k);
    for (ofh4CcPr = (310 - 310); ofh4CcPr <= k - 1; ofh4CcPr++) {
        scanf ("%d", &hMHJQRZt9[ofh4CcPr]);
    }
    printf ("%d\n", FZeuGEvc (k, hMHJQRZt9, (32883 - 116)));
}

