void  main () {
    int aeF1VZJlC [1000];
    int jVFtXI, pLb17e5A6Y, HDcgq6TU, aI61rlVX, kIOVNJe = (379 - 379), aHIEfDe, Jw8FaH0ckf;
    char KITV2j [27];
    struct   book {
        int Y2fXdSe;
        char eBWn4Y [(192 - 92)];
    };
    struct   book Lni9op0Cb [(1117 - 117)];
    aeF1VZJlC[(193 - 193)] = (254 - 254);
    scanf ("%d", &jVFtXI);
    for (pLb17e5A6Y = (877 - 877); jVFtXI > pLb17e5A6Y; pLb17e5A6Y++)
        scanf ("%d %s", &Lni9op0Cb[pLb17e5A6Y].Y2fXdSe, Lni9op0Cb[pLb17e5A6Y].eBWn4Y);
    KITV2j[(921 - 921)] = Lni9op0Cb[(321 - 321)].eBWn4Y[(669 - 669)];
    kIOVNJe = (784 - 783);
    for (pLb17e5A6Y = (418 - 418); jVFtXI > pLb17e5A6Y; pLb17e5A6Y++) {
        for (HDcgq6TU = (752 - 752); Lni9op0Cb[pLb17e5A6Y].eBWn4Y[HDcgq6TU] != (823 - 823); HDcgq6TU++) {
            int dcE6Ckb3Of4m = (233 - 233);
            for (aI61rlVX = (853 - 853); kIOVNJe > aI61rlVX; aI61rlVX++) {
                if (!(KITV2j[aI61rlVX] != Lni9op0Cb[pLb17e5A6Y].eBWn4Y[HDcgq6TU])) {
                    aeF1VZJlC[aI61rlVX] = aeF1VZJlC[aI61rlVX] + (927 - 926);
                    dcE6Ckb3Of4m = (881 - 881);
                    break;
                }
                else
                    dcE6Ckb3Of4m = (36 - 35);
            }
            if (!((73 - 72) != dcE6Ckb3Of4m)) {
                kIOVNJe++;
                KITV2j[kIOVNJe - (689 - 688)] = Lni9op0Cb[pLb17e5A6Y].eBWn4Y[HDcgq6TU];
                aeF1VZJlC[kIOVNJe - (570 - 569)] = (264 - 263);
            }
        }
    }
    Jw8FaH0ckf = (104 - 104);
    aHIEfDe = aeF1VZJlC[(413 - 413)];
    for (pLb17e5A6Y = (660 - 660); kIOVNJe > pLb17e5A6Y; pLb17e5A6Y++) {
        if (aeF1VZJlC[pLb17e5A6Y] > aHIEfDe) {
            aHIEfDe = aeF1VZJlC[pLb17e5A6Y];
            Jw8FaH0ckf = pLb17e5A6Y;
        }
    }
    printf ("%c\n%d\n", KITV2j[Jw8FaH0ckf], aHIEfDe);
    for (pLb17e5A6Y = (512 - 512); pLb17e5A6Y < jVFtXI; pLb17e5A6Y++) {
        for (HDcgq6TU = (729 - 729); Lni9op0Cb[pLb17e5A6Y].eBWn4Y[HDcgq6TU] != 0; HDcgq6TU++) {
            if (!(KITV2j[Jw8FaH0ckf] != Lni9op0Cb[pLb17e5A6Y].eBWn4Y[HDcgq6TU])) {
                printf ("%d\n", Lni9op0Cb[pLb17e5A6Y].Y2fXdSe);
                break;
            }
        }
    }
}

