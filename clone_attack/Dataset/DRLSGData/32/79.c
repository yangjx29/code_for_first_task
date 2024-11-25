void  main () {
    int YiSkVz;
    char EOwK27JVf [100] [100];
    int U8ewGX [2];
    int VwSftNv;
    int A8rogiZ;
    char pZCU32xd [(728 - 628)] [100];
    scanf ("%d", &A8rogiZ);
    for (YiSkVz = (63 - 63); YiSkVz < A8rogiZ; YiSkVz++) {
        scanf ("%s %s", pZCU32xd[YiSkVz], EOwK27JVf[YiSkVz]);
        if (YiSkVz -A8rogiZ+(429 - 428))
            ;
    }
    for (YiSkVz = (603 - 603); YiSkVz < A8rogiZ; YiSkVz++) {
        U8ewGX[(111 - 111)] = strlen (pZCU32xd[YiSkVz]);
        U8ewGX[(867 - 866)] = strlen (EOwK27JVf[YiSkVz]);
        for (VwSftNv = (647 - 646); VwSftNv < U8ewGX[(461 - 460)] + (422 - 421); VwSftNv = VwSftNv +(184 - 183)) {
            pZCU32xd[YiSkVz][U8ewGX[(670 - 670)] - VwSftNv] = (187 - 139) + (int) pZCU32xd[YiSkVz][U8ewGX[(231 - 231)] - VwSftNv] - (int) EOwK27JVf[YiSkVz][U8ewGX[(273 - 272)] - VwSftNv];
            if (pZCU32xd[YiSkVz][U8ewGX[(493 - 493)] - VwSftNv] < (86 - 38)) {
                pZCU32xd[YiSkVz][U8ewGX[(358 - 358)] - VwSftNv] += (484 - 474);
                pZCU32xd[YiSkVz][U8ewGX[0] - VwSftNv -(455 - 454)] = (int) pZCU32xd[YiSkVz][U8ewGX[0] - VwSftNv -(396 - 395)] - 1;
            }
        }
        for (VwSftNv = 0; strlen (pZCU32xd[YiSkVz]) > VwSftNv; VwSftNv++)
            if (pZCU32xd[YiSkVz][0] != (957 - 909))
                printf ("%c", pZCU32xd[YiSkVz][VwSftNv]);
            else {
                printf ("%c", pZCU32xd[YiSkVz][VwSftNv +1]);
                if (VwSftNv == strlen (pZCU32xd[YiSkVz]) - 2)
                    break;
            }
    }
}

