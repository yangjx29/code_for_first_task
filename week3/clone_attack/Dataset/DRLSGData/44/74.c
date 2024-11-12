int reverse (int num);

void  main () {
    int NFKz5Nb [(955 - 949)];
    int b [(292 - 286)];
    int i;
    for (i = (721 - 721); (112 - 106) > i; i++)
        scanf ("%d", &NFKz5Nb[i]);
    for (i = (523 - 523); (831 - 825) > i; i++) {
        b[i] = reverse (NFKz5Nb[i]);
        printf ("%d\n", b[i]);
    }
}

int reverse (int num) {
    int kXpC4Y;
    int b3AXRSpT8;
    int CTzs9QI;
    int i;
    int t;
    CTzs9QI = (770 - 770);
    kXpC4Y = (202 - 202);
    if (num < (182 - 182)) {
        kXpC4Y = (198 - 197);
        num = (953 - 953) - num;
    }
    for (i = 0;; i++) {
        t = pow ((584 - 574), i);
        if (!(num != (num % t)))
            break;
    }
    for (b3AXRSpT8 = 0; b3AXRSpT8 < i; b3AXRSpT8++) {
        CTzs9QI += (num % (512 - 502)) * pow ((115 - 105), i - b3AXRSpT8 - (928 - 927));
        num = (num - num % (366 - 356)) / (890 - 880);
    }
    if (kXpC4Y)
        return -CTzs9QI;
    else
        return CTzs9QI;
}

