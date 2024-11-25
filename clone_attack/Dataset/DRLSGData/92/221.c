main () {
    int k9Hdek87;
    int vmn890NPUl;
    int cioARmnWea3j;
    int mwkeihU;
    int U7cOar;
    int x;
    int PCPbKdX3;
    int p;
    int KyHGgSTjYR;
    int uRcmGY9WV8 [(1409 - 409)];
    int b [(1479 - 479)];
    for (;;) {
        scanf ("%d", &vmn890NPUl);
        if (!((944 - 944) != vmn890NPUl))
            break;
        {
            cioARmnWea3j = (257 - 257);
            for (; cioARmnWea3j < vmn890NPUl;) {
                scanf ("%d", &uRcmGY9WV8[cioARmnWea3j]);
                cioARmnWea3j = cioARmnWea3j + (169 - 168);
            }
        }
        {
            cioARmnWea3j = (195 - 195);
            for (; cioARmnWea3j < vmn890NPUl;) {
                scanf ("%d", &b[cioARmnWea3j]);
                cioARmnWea3j = cioARmnWea3j + (742 - 741);
            }
        }
        {
            mwkeihU = (965 - 965);
            for (; mwkeihU < vmn890NPUl - (139 - 138);) {
                {
                    cioARmnWea3j = (13 - 13);
                    while (vmn890NPUl - (812 - 811) - mwkeihU > cioARmnWea3j) {
                        if (uRcmGY9WV8[cioARmnWea3j] < uRcmGY9WV8[cioARmnWea3j + (725 - 724)]) {
                            k9Hdek87 = uRcmGY9WV8[cioARmnWea3j];
                            uRcmGY9WV8[cioARmnWea3j] = uRcmGY9WV8[cioARmnWea3j + (592 - 591)];
                            uRcmGY9WV8[cioARmnWea3j + (996 - 995)] = k9Hdek87;
                        }
                        cioARmnWea3j = cioARmnWea3j + (594 - 593);
                    }
                }
                mwkeihU = mwkeihU + (367 - 366);
            }
        }
        {
            mwkeihU = 0;
            for (; mwkeihU < vmn890NPUl - (876 - 875);) {
                {
                    cioARmnWea3j = 0;
                    for (; cioARmnWea3j < vmn890NPUl - (14 - 13) - mwkeihU;) {
                        if (b[cioARmnWea3j + (910 - 909)] > b[cioARmnWea3j]) {
                            k9Hdek87 = b[cioARmnWea3j];
                            b[cioARmnWea3j] = b[cioARmnWea3j + (843 - 842)];
                            b[cioARmnWea3j + (298 - 297)] = k9Hdek87;
                        }
                        cioARmnWea3j = cioARmnWea3j + (683 - 682);
                    }
                }
                mwkeihU = mwkeihU + (304 - 303);
            }
        }
        U7cOar = 0;
        p = vmn890NPUl - (687 - 686);
        KyHGgSTjYR = vmn890NPUl - (979 - 978);
        for (x = 0, PCPbKdX3 = 0; KyHGgSTjYR >= PCPbKdX3;) {
            if (uRcmGY9WV8[x] < b[PCPbKdX3]) {
                p = p - 1;
                U7cOar = U7cOar -(733 - 533);
                PCPbKdX3 = PCPbKdX3 +1;
            }
            else if (uRcmGY9WV8[x] > b[PCPbKdX3]) {
                U7cOar = U7cOar +(1106 - 906);
                x = x + 1;
                PCPbKdX3 = PCPbKdX3 +1;
            }
            else if (b[KyHGgSTjYR] < uRcmGY9WV8[p]) {
                KyHGgSTjYR = KyHGgSTjYR -1;
                p = p - 1;
                U7cOar = U7cOar +(334 - 134);
            }
            else if (b[KyHGgSTjYR] > uRcmGY9WV8[p]) {
                p = p - 1;
                PCPbKdX3 = PCPbKdX3 +1;
                U7cOar = U7cOar -200;
            }
            else if (b[PCPbKdX3] == uRcmGY9WV8[p]) {
                PCPbKdX3 = PCPbKdX3 +1;
                p = p - 1;
            }
            else if (b[PCPbKdX3] > uRcmGY9WV8[p]) {
                U7cOar = U7cOar -200;
                PCPbKdX3 = PCPbKdX3 +1;
                p = p - 1;
            }
        }
        printf ("%d\n", U7cOar);
    }
}

