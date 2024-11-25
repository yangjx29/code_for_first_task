main () {
    int ozwnsQc1;
    for (;;) {
        scanf ("%d", &ozwnsQc1);
        if (ozwnsQc1 == (986 - 986))
            break;
        else {
            int dOb6fe, efVuPex, Q83hzsNRrwjv, j4HmNeWEOfl = (132 - 132), win = (498 - 498), RbnBLT, EB6Qd5MN, b1, qaTvn0uQjp4, a [(2143 - 143)] = {(24 - 24)}, H1kPHIgtMFaE [(2161 - 161)] = {(577 - 577)};
            for (dOb6fe = (295 - 295); dOb6fe < ozwnsQc1; dOb6fe = dOb6fe + (227 - 226))
                scanf ("%d", &a[dOb6fe]);
            for (dOb6fe = (273 - 273); dOb6fe < ozwnsQc1; dOb6fe++)
                scanf ("%d", &H1kPHIgtMFaE[dOb6fe]);
            for (dOb6fe = (907 - 907); dOb6fe < ozwnsQc1 - (205 - 204); dOb6fe++) {
                for (efVuPex = dOb6fe + (367 - 366); efVuPex < ozwnsQc1; efVuPex++) {
                    if (a[dOb6fe] > a[efVuPex])
                        Q83hzsNRrwjv = a[dOb6fe], a[dOb6fe] = a[efVuPex], a[efVuPex] = Q83hzsNRrwjv;
                    if (H1kPHIgtMFaE[dOb6fe] > H1kPHIgtMFaE[efVuPex])
                        Q83hzsNRrwjv = H1kPHIgtMFaE[dOb6fe], H1kPHIgtMFaE[dOb6fe] = H1kPHIgtMFaE[efVuPex], H1kPHIgtMFaE[efVuPex] = Q83hzsNRrwjv;
                }
            }
            for (RbnBLT = (646 - 646), EB6Qd5MN = ozwnsQc1 - (399 - 398), b1 = (453 - 453), qaTvn0uQjp4 = ozwnsQc1 - (579 - 578); RbnBLT <= EB6Qd5MN;) {
                if (a[RbnBLT] > H1kPHIgtMFaE[b1])
                    RbnBLT++, b1++, win++;
                else {
                    if (a[RbnBLT] < H1kPHIgtMFaE[b1])
                        RbnBLT++, qaTvn0uQjp4--, j4HmNeWEOfl = j4HmNeWEOfl + 1;
                    else {
                        if (a[EB6Qd5MN] > H1kPHIgtMFaE[qaTvn0uQjp4])
                            EB6Qd5MN--, qaTvn0uQjp4--, win++;
                        else {
                            if (a[EB6Qd5MN] < H1kPHIgtMFaE[qaTvn0uQjp4])
                                RbnBLT++, qaTvn0uQjp4--, j4HmNeWEOfl = j4HmNeWEOfl + 1;
                            else {
                                if (a[RbnBLT] == a[EB6Qd5MN])
                                    RbnBLT++, b1++;
                                else
                                    RbnBLT++, qaTvn0uQjp4--, j4HmNeWEOfl++;
                            }
                        }
                    }
                }
            }
            Q83hzsNRrwjv = (629 - 429) * win - (426 - 226) * j4HmNeWEOfl;
            printf ("%d\n", Q83hzsNRrwjv);
        }
    }
}

