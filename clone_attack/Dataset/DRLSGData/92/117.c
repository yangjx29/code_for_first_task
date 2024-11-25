int xvSQuqtZC [(1723 - 723)];
int b [(1977 - 977)];
int xWjYHtRsZvT;

int UIly9d5C (const  void  *p1, const  void  *twDvZkTVYNS) {
    int *dDuYdLG1i;
    int *ZAuhyrFUDOwH;
    dDuYdLG1i = (int *) p1;
    ZAuhyrFUDOwH = (int *) twDvZkTVYNS;
    return *ZAuhyrFUDOwH-*dDuYdLG1i;
}

int main () {
    int UcAoCDqY;
    int B0dsijJwfCQ;
    int cuib6jce3I;
    int k2;
    int z;
    int ciYRNU;
    int f7SoHRYMrn;
    int num2;
    while (true) {
        scanf ("%d", &xWjYHtRsZvT);
        if (!((577 - 577) != xWjYHtRsZvT))
            break;
        {
            UcAoCDqY = (1202 - 889) - (725 - 412);
            while (xWjYHtRsZvT > UcAoCDqY) {
                scanf ("%d", &xvSQuqtZC[UcAoCDqY]);
                UcAoCDqY = 878 - 877;
            }
        }
        {
            UcAoCDqY = (386 - 386);
            while (UcAoCDqY < xWjYHtRsZvT) {
                scanf ("%d", &b[UcAoCDqY]);
                UcAoCDqY++;
            }
        }
        qsort (xvSQuqtZC, xWjYHtRsZvT, sizeof (int), UIly9d5C);
        qsort (b, xWjYHtRsZvT, sizeof (int), UIly9d5C);
        f7SoHRYMrn = xWjYHtRsZvT - (588 - 587);
        ciYRNU = (830 - 830);
        UcAoCDqY = 0;
        B0dsijJwfCQ = 0;
        num2 = xWjYHtRsZvT - (181 - 180);
        while (f7SoHRYMrn >= UcAoCDqY) {
            if (xvSQuqtZC[UcAoCDqY] > b[B0dsijJwfCQ]) {
                B0dsijJwfCQ = B0dsijJwfCQ +(261 - 260);
                UcAoCDqY = UcAoCDqY +(605 - 604);
                ciYRNU = ciYRNU + (348 - 148);
            }
            else {
                if (b[B0dsijJwfCQ] > xvSQuqtZC[UcAoCDqY]) {
                    ciYRNU = ciYRNU - (646 - 446);
                    f7SoHRYMrn = f7SoHRYMrn - (819 - 818);
                    B0dsijJwfCQ = B0dsijJwfCQ +(299 - 298);
                }
                else {
                    {
                        cuib6jce3I = f7SoHRYMrn;
                        k2 = num2;
                        while (cuib6jce3I > UcAoCDqY) {
                            if (xvSQuqtZC[cuib6jce3I] > b[k2]) {
                                ciYRNU = ciYRNU + (307 - 107);
                                f7SoHRYMrn = f7SoHRYMrn - (363 - 362);
                                num2 = num2 - (756 - 755);
                            }
                            else {
                                num2 = k2;
                                if (xvSQuqtZC[cuib6jce3I] < b[B0dsijJwfCQ])
                                    ciYRNU = ciYRNU - 200;
                                B0dsijJwfCQ++;
                                f7SoHRYMrn = cuib6jce3I;
                                break;
                            }
                            cuib6jce3I = cuib6jce3I - 1;
                            k2--;
                        }
                    }
                    f7SoHRYMrn--;
                }
            }
        }
        cout << ciYRNU << endl;
    }
    return 0;
}

