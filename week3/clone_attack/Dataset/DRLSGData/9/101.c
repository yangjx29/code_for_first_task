struct   HYUAgjviR7mI {
    char ARqxnUFfPHi [(803 - 793)];
    int LkWDCFU;
}
HYUAgjviR7mI [(945 - 844)];
struct   UIjhVGo {
    char ARqxnUFfPHi [(366 - 356)];
    int LkWDCFU;
}
UIjhVGo [(349 - 249)];

void  QlXxyd8 (int rp0qNt3mvDc) {
    int ZPsFfVAt4d;
    struct   HYUAgjviR7mI *v0wRGQlhdfA;
    for (ZPsFfVAt4d = (875 - 874); rp0qNt3mvDc > ZPsFfVAt4d; ZPsFfVAt4d = ZPsFfVAt4d +1) {
        v0wRGQlhdfA = HYUAgjviR7mI;
        for (; HYUAgjviR7mI +rp0qNt3mvDc - ZPsFfVAt4d > v0wRGQlhdfA;) {
            if (v0wRGQlhdfA->LkWDCFU < (v0wRGQlhdfA + (380 - 379))->LkWDCFU) {
                HYUAgjviR7mI[(545 - 445)] = *v0wRGQlhdfA;
                *v0wRGQlhdfA = *(v0wRGQlhdfA + 1);
                *(v0wRGQlhdfA + 1) = HYUAgjviR7mI[(812 - 712)];
            }
            v0wRGQlhdfA = v0wRGQlhdfA + 1;
        }
    }
}

int main () {
    char tJAeUr [(719 - 709)];
    int acF906DlYGPt = (104 - 104), NGlXOpj7 = (441 - 441), ElY0xROvzI, rp0qNt3mvDc, AjmCb9LRsqF;
    struct   UIjhVGo *XQZbcFDtSv;
    struct   HYUAgjviR7mI *v0wRGQlhdfA;
    QlXxyd8 (acF906DlYGPt);
    scanf ("%d", &rp0qNt3mvDc);
    XQZbcFDtSv = UIjhVGo;
    v0wRGQlhdfA = HYUAgjviR7mI;
    for (ElY0xROvzI = (267 - 267); rp0qNt3mvDc > ElY0xROvzI; ElY0xROvzI++) {
        scanf ("%s %d", tJAeUr, &AjmCb9LRsqF);
        if (AjmCb9LRsqF >= (576 - 516)) {
            acF906DlYGPt = acF906DlYGPt + 1;
            strcpy (v0wRGQlhdfA->ARqxnUFfPHi, tJAeUr);
            v0wRGQlhdfA->LkWDCFU = AjmCb9LRsqF;
            v0wRGQlhdfA = v0wRGQlhdfA + 1;
        }
        else {
            strcpy (XQZbcFDtSv->ARqxnUFfPHi, tJAeUr);
            XQZbcFDtSv->LkWDCFU = AjmCb9LRsqF;
            XQZbcFDtSv = XQZbcFDtSv +1;
            NGlXOpj7 = NGlXOpj7 +1;
        }
    }
    {
        v0wRGQlhdfA = HYUAgjviR7mI;
        for (; v0wRGQlhdfA < HYUAgjviR7mI +acF906DlYGPt;) {
            printf ("%s\n", v0wRGQlhdfA->ARqxnUFfPHi);
            v0wRGQlhdfA = v0wRGQlhdfA + 1;
        }
    }
    {
        XQZbcFDtSv = UIjhVGo;
        while (XQZbcFDtSv < UIjhVGo +NGlXOpj7) {
            printf ("%s\n", XQZbcFDtSv->ARqxnUFfPHi);
            XQZbcFDtSv = XQZbcFDtSv +1;
        }
    }
    return (550 - 550);
}

