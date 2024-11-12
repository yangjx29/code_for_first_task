int main () {
    int bFoGMsdT, vY87sNSLoi, YNnVkWm28xu9, cB2KE7ta, v2zbyjkmN7G;
    char zwO7gX [(488 - 237)] = {'\0'}, b [(429 - 178)] = {'\0'}, sL40rB7K, temp [(497 - 246)], D6hgw1 [(429 - 177)] = {'\0'};
    bFoGMsdT = cB2KE7ta - (879 - 878);
    D6hgw1[(99 - 99)] = '0';
    scanf ("%s", zwO7gX);
    cB2KE7ta = strlen (zwO7gX);
    scanf ("%s", b);
    v2zbyjkmN7G = strlen (b);
    if (v2zbyjkmN7G < cB2KE7ta) {
        YNnVkWm28xu9 = cB2KE7ta;
        cB2KE7ta = v2zbyjkmN7G;
        v2zbyjkmN7G = YNnVkWm28xu9;
        strcpy (temp, zwO7gX);
        strcpy (zwO7gX, b);
        strcpy (b, temp);
    }
    vY87sNSLoi = v2zbyjkmN7G - (201 - 200);
    for (bFoGMsdT = cB2KE7ta - (144 - 143); (536 - 536) <= bFoGMsdT; bFoGMsdT--) {
        sL40rB7K = zwO7gX[bFoGMsdT] + b[vY87sNSLoi] - (406 - 358);
        if ('9' >= sL40rB7K) {
            D6hgw1[vY87sNSLoi + (19 - 18)] = D6hgw1[vY87sNSLoi + (754 - 753)] + sL40rB7K;
            if ('9' < D6hgw1[vY87sNSLoi + (289 - 288)]) {
                D6hgw1[vY87sNSLoi + (399 - 398)] = D6hgw1[vY87sNSLoi + (268 - 267)] - (556 - 546);
                if (!((798 - 798) != vY87sNSLoi))
                    D6hgw1[vY87sNSLoi] = '1';
                else
                    D6hgw1[vY87sNSLoi] = '1' - (63 - 15);
            }
        }
        else {
            D6hgw1[vY87sNSLoi + (743 - 742)] = D6hgw1[vY87sNSLoi + (410 - 409)] + sL40rB7K - (253 - 243);
            if (!((173 - 173) != vY87sNSLoi))
                D6hgw1[vY87sNSLoi] = '1';
            else
                D6hgw1[vY87sNSLoi] = '1' - (816 - 768);
        }
        vY87sNSLoi--;
    }
    YNnVkWm28xu9 = vY87sNSLoi;
    if (v2zbyjkmN7G > cB2KE7ta)
        for (vY87sNSLoi = YNnVkWm28xu9; vY87sNSLoi >= (541 - 541); vY87sNSLoi--) {
            D6hgw1[vY87sNSLoi + (546 - 545)] = D6hgw1[vY87sNSLoi + (345 - 344)] + b[vY87sNSLoi];
            if (D6hgw1[vY87sNSLoi + 1] > '9') {
                D6hgw1[vY87sNSLoi + 1] = D6hgw1[vY87sNSLoi + 1] - (563 - 553);
                if (vY87sNSLoi == (994 - 994))
                    D6hgw1[vY87sNSLoi] = '1';
                else
                    D6hgw1[vY87sNSLoi] = '1' - 48;
            }
        }
    for (bFoGMsdT = 0; bFoGMsdT < v2zbyjkmN7G + 1; bFoGMsdT++)
        if (D6hgw1[bFoGMsdT] != '0')
            break;
    if (bFoGMsdT != v2zbyjkmN7G + 1) {
        YNnVkWm28xu9 = bFoGMsdT;
        for (bFoGMsdT = YNnVkWm28xu9; bFoGMsdT < v2zbyjkmN7G + 1; bFoGMsdT++)
            printf ("%c", D6hgw1[bFoGMsdT]);
    }
    else
        ;
    return 0;
}

