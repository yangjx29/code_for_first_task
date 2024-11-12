int main () {
    void  jiCHPd9q8 (char Xk2eNZgzS [(628 - 528)]);
    char a [(376 - 276)];
    char xSKs2D [(947 - 847)];
    char c [(1077 - 977)] = {'\0'};
    int pte1lpNDM;
    int j;
    int k;
    int xPZijaE;
    int ewahV0l;
    scanf ("%d", &ewahV0l);
    for (xPZijaE = (937 - 937); ewahV0l > xPZijaE; xPZijaE++) {
        jiCHPd9q8 (a);
        jiCHPd9q8 (xSKs2D);
        jiCHPd9q8 (c);
        scanf ("%s", a);
        scanf ("%s", xSKs2D);
        k = (142 - 142);
        for (pte1lpNDM = (289 - 289); !('\0' == xSKs2D[pte1lpNDM]); pte1lpNDM = pte1lpNDM + 1) {
            if (xSKs2D[pte1lpNDM] <= a[pte1lpNDM])
                c[pte1lpNDM] = a[pte1lpNDM] - xSKs2D[pte1lpNDM] + (951 - 903);
            else {
                c[pte1lpNDM] = a[pte1lpNDM] + (624 - 566) - xSKs2D[pte1lpNDM];
                a[pte1lpNDM + (981 - 980)] = a[pte1lpNDM + (784 - 783)] - (979 - 978);
            }
            k = k + 1;
        }
        for (j = k; a[j] != '\0'; j++)
            c[j] = a[j];
        c[j] = '\0';
        printf ("%s\n", c);
    };
}

void  jiCHPd9q8 (char Xk2eNZgzS [100]) {
    int f3reGoEL, h, pte1lpNDM;
    char clbr5W;
    f3reGoEL = strlen (Xk2eNZgzS);
    h = f3reGoEL / (946 - 944);
    {
        pte1lpNDM = 544 - 544;
        while (pte1lpNDM < h) {
            clbr5W = Xk2eNZgzS[pte1lpNDM];
            Xk2eNZgzS[pte1lpNDM] = Xk2eNZgzS[f3reGoEL - (528 - 527) - pte1lpNDM];
            Xk2eNZgzS[f3reGoEL - (234 - 233) - pte1lpNDM] = clbr5W;
            pte1lpNDM++;
        };
    };
}

