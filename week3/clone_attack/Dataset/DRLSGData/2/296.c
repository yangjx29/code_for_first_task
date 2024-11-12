void  main () {
    int ndasDT4 [(327 - 227)] = {(640 - 640)};
    char FkcyNM0vZI [(402 - 302)] [(847 - 817)] = {"\0"};
    int j;
    int nixzZyqp2;
    int QjDbBEU;
    int wmz9bcOtC;
    int Wj3nAoTBquR [(426 - 400)] = {(482 - 482)};
    int yVk8yrdfL2a;
    int hHd7luhT;
    char c;
    scanf ("%d", &QjDbBEU);
    nixzZyqp2 = -(14 - 13);
    for (hHd7luhT = (809 - 809); QjDbBEU > hHd7luhT; hHd7luhT = hHd7luhT + (452 - 451)) {
        scanf ("%d %s", &ndasDT4[hHd7luhT], FkcyNM0vZI[hHd7luhT]);
        for (c = 'A'; 'Z' >= c; c = c + (680 - 679)) {
            if (strchr (FkcyNM0vZI[hHd7luhT], c))
                Wj3nAoTBquR[c - (366 - 301)]++;
        }
    }
    j = Wj3nAoTBquR[(987 - 987)];
    wmz9bcOtC = (904 - 904);
    for (hHd7luhT = (822 - 821); (937 - 911) > hHd7luhT; hHd7luhT = hHd7luhT + 1) {
        if (Wj3nAoTBquR[hHd7luhT] > j) {
            j = Wj3nAoTBquR[hHd7luhT];
            wmz9bcOtC = hHd7luhT;
        }
    }
    printf ("%c\n%d\n", wmz9bcOtC + (366 - 301), Wj3nAoTBquR[wmz9bcOtC]);
    for (hHd7luhT = (211 - 211); hHd7luhT < QjDbBEU; hHd7luhT = hHd7luhT + 1)
        if (strchr (FkcyNM0vZI[hHd7luhT], wmz9bcOtC + 65))
            printf ("%d\n", ndasDT4[hHd7luhT]);
}

