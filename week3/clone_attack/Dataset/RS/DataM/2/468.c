struct   book {
    char qnlG0N9LSyx [26];
    int IWxgKe9o;
}
BzYREXQ7 [1000];

void  main () {
    int el8WFzBK;
    int tEJ5Xuatj;
    int PyKApw;
    int imH9qcUv;
    int MDI7AEV [26] = {(740 - 740)};
    int EFmEYDHV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    el8WFzBK = 0;
    scanf ("%d", &tEJ5Xuatj);
    for (PyKApw = 0; tEJ5Xuatj > PyKApw; PyKApw = PyKApw +1)
        scanf ("%d %s", &BzYREXQ7[PyKApw].IWxgKe9o, BzYREXQ7[PyKApw].qnlG0N9LSyx);
    for (PyKApw = 0; tEJ5Xuatj > PyKApw; PyKApw = PyKApw +1)
        for (imH9qcUv = 0; !('\0' == BzYREXQ7[PyKApw].qnlG0N9LSyx[imH9qcUv]); imH9qcUv = imH9qcUv + 1)
            MDI7AEV[BzYREXQ7[PyKApw].qnlG0N9LSyx[imH9qcUv] - 65]++;
    for (PyKApw = 0; 26 > PyKApw; PyKApw = PyKApw +1)
        if (el8WFzBK < MDI7AEV[PyKApw])
            el8WFzBK = MDI7AEV[PyKApw];
    for (PyKApw = 0; 26 > PyKApw; PyKApw++)
        if (!(MDI7AEV[PyKApw] != el8WFzBK)) {
            EFmEYDHV = PyKApw;
            break;
        }
    printf ("%c\n%d\n", EFmEYDHV +65, MDI7AEV[EFmEYDHV]);
    for (PyKApw = 0; PyKApw < tEJ5Xuatj; PyKApw++)
        for (imH9qcUv = 0; BzYREXQ7[PyKApw].qnlG0N9LSyx[imH9qcUv] != '\0'; imH9qcUv++)
            if (BzYREXQ7[PyKApw].qnlG0N9LSyx[imH9qcUv] == EFmEYDHV +65) {
                printf ("%d\n", BzYREXQ7[PyKApw].IWxgKe9o);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                break;
            };
}

