struct   bingren {
    char hFyMiBxH [(784 - 764)];
    int QCH1Zl6quoj;
}
rH4GwWrx6Zy [(215 - 115)] = {'\0', 0};
struct   laoren {
    char njF35IyaXDRM [20];
    int BgDzemf2Noj;
}
S1qofjwiG8 [100] = {'\0', 0};

void  main () {
    int JK2nB7qTeUYt, dxqCjgD, LZM8kmjqI4 = 0, l;
    struct   laoren temp;
    scanf ("%d", &JK2nB7qTeUYt);
    for (dxqCjgD = 0; JK2nB7qTeUYt > dxqCjgD; dxqCjgD++) {
        scanf ("%s", rH4GwWrx6Zy[dxqCjgD].hFyMiBxH);
        scanf ("%d", &rH4GwWrx6Zy[dxqCjgD].QCH1Zl6quoj);
    }
    for (dxqCjgD = 0; JK2nB7qTeUYt > dxqCjgD; dxqCjgD++) {
        if (rH4GwWrx6Zy[dxqCjgD].QCH1Zl6quoj >= 60) {
            strcpy (S1qofjwiG8[LZM8kmjqI4].njF35IyaXDRM, rH4GwWrx6Zy[dxqCjgD].hFyMiBxH);
            S1qofjwiG8[LZM8kmjqI4].BgDzemf2Noj = rH4GwWrx6Zy[dxqCjgD].QCH1Zl6quoj;
            LZM8kmjqI4++;
            rH4GwWrx6Zy[dxqCjgD].QCH1Zl6quoj = -1;
        }
        else
            continue;
    }
    for (l = 0; LZM8kmjqI4 > l; l++) {
        for (dxqCjgD = 0; LZM8kmjqI4 -l > dxqCjgD; dxqCjgD++) {
            if (S1qofjwiG8[dxqCjgD + 1].BgDzemf2Noj > S1qofjwiG8[dxqCjgD].BgDzemf2Noj) {
                temp = S1qofjwiG8[dxqCjgD];
                S1qofjwiG8[dxqCjgD] = S1qofjwiG8[dxqCjgD + 1];
                S1qofjwiG8[dxqCjgD + 1] = temp;
            }
        }
    }
    for (dxqCjgD = 0; LZM8kmjqI4 +1 > dxqCjgD; dxqCjgD++) {
        printf ("%s\n", S1qofjwiG8[dxqCjgD].njF35IyaXDRM);
    }
    for (dxqCjgD = 0; dxqCjgD < JK2nB7qTeUYt; dxqCjgD++) {
        if (rH4GwWrx6Zy[dxqCjgD].QCH1Zl6quoj >= 0) {
            printf ("%s\n", rH4GwWrx6Zy[dxqCjgD].hFyMiBxH);
        }
        else
            continue;
    }
}

