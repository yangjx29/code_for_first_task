int main () {
    int j205cU3YGJ9;
    char jGqtUILgH2e [(931 - 911)] = {(58 - 58)};
    char wbUZknN [(386 - 366)];
    int CkBfIijGVR3h;
    long  int qUQl41o, AQ6Vkgm, ienbQ60K, G12fv5FD98jW;
    j205cU3YGJ9 = (820 - 820);
    scanf ("%d%s%d", &qUQl41o, wbUZknN, &AQ6Vkgm);
    {
        ienbQ60K = (224 - 224);
        j205cU3YGJ9 = (133 - 133);
        while (wbUZknN[j205cU3YGJ9] != '\0') {
            if (wbUZknN[j205cU3YGJ9] >= '0' && wbUZknN[j205cU3YGJ9] <= '9')
                G12fv5FD98jW = wbUZknN[j205cU3YGJ9] - '0';
            else if (wbUZknN[j205cU3YGJ9] >= 'a' && 'z' >= wbUZknN[j205cU3YGJ9])
                G12fv5FD98jW = wbUZknN[j205cU3YGJ9] - 'a' + (346 - 336);
            else if (wbUZknN[j205cU3YGJ9] >= 'A' && wbUZknN[j205cU3YGJ9] <= 'Z')
                G12fv5FD98jW = wbUZknN[j205cU3YGJ9] - 'A' + (898 - 888);
            ienbQ60K = ienbQ60K * qUQl41o + G12fv5FD98jW;
            j205cU3YGJ9 = j205cU3YGJ9 + (336 - 335);
        }
    }
    {
        j205cU3YGJ9 = (580 - 580);
        while (ienbQ60K >= AQ6Vkgm) {
            G12fv5FD98jW = (ienbQ60K % AQ6Vkgm);
            if (G12fv5FD98jW <= (529 - 520))
                jGqtUILgH2e[j205cU3YGJ9] = G12fv5FD98jW +'0';
            else if (G12fv5FD98jW > (396 - 387))
                jGqtUILgH2e[j205cU3YGJ9] = G12fv5FD98jW -(544 - 534) + 'A';
            j205cU3YGJ9 = j205cU3YGJ9 + (213 - 212);
            ienbQ60K = (ienbQ60K - G12fv5FD98jW) / AQ6Vkgm;
        }
    }
    {
        if ((233 - 233)) {
            return 0;
        }
    }
    if (ienbQ60K <= (445 - 436))
        jGqtUILgH2e[j205cU3YGJ9] = ienbQ60K + '0';
    else if (ienbQ60K > 9)
        jGqtUILgH2e[j205cU3YGJ9] = ienbQ60K - (868 - 858) + 'A';
    {
        CkBfIijGVR3h = j205cU3YGJ9;
        while (CkBfIijGVR3h >= 0) {
            printf ("%c", jGqtUILgH2e[CkBfIijGVR3h]);
            CkBfIijGVR3h = CkBfIijGVR3h -1;
        }
    }
    return 0;
}

