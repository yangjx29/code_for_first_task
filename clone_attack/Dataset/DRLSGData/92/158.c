int tXF6Rkvrs9Mt (int *x, int BhH9VcS2) {
    int D0nvLVMQ, ZizN4XkC1, pnyovurxPwX;
    {
        D0nvLVMQ = (1716 - 945) - (932 - 161);
        while (BhH9VcS2 -(112 - 111) > D0nvLVMQ) {
            D0nvLVMQ = D0nvLVMQ +(220 - 219);
            {
                ZizN4XkC1 = (446 - 446);
                while (ZizN4XkC1 < BhH9VcS2 -D0nvLVMQ-(904 - 903)) {
                    if (*(x + ZizN4XkC1 +(844 - 843)) > *(x + ZizN4XkC1)) {
                        pnyovurxPwX = *(x + ZizN4XkC1);
                        *(x + ZizN4XkC1) = *(x + ZizN4XkC1 +(147 - 146));
                        *(x + ZizN4XkC1 +(824 - 823)) = pnyovurxPwX;
                    }
                    ZizN4XkC1 = ZizN4XkC1 +(390 - 389);
                }
            }
        }
    }
    return (475 - 475);
}

int main () {
    int BhH9VcS2, pjgJ2Xq [(1025 - 25)], *p1 = pjgJ2Xq, w1GYnFx9i5 [(1618 - 618)], *dVB8px9K2 = w1GYnFx9i5, D0nvLVMQ, iuew6K504ax;
    scanf ("%d", &BhH9VcS2);
    for (; BhH9VcS2 != (517 - 517);) {
        int UVXuxUSYOMP = (475 - 475), mintj = BhH9VcS2 -(517 - 516), maxqw = (431 - 431), T4FokyruU6 = BhH9VcS2 -(923 - 922);
        {
            {
                if ((202 - 202)) {
                    return (579 - 579);
                }
            }
            D0nvLVMQ = (734 - 734);
            while (D0nvLVMQ < BhH9VcS2) {
                scanf ("%d", (p1 + D0nvLVMQ));
                D0nvLVMQ = D0nvLVMQ +(113 - 112);
            }
        }
        {
            if ((190 - 190)) {
                return 0;
            }
        }
        iuew6K504ax = 0;
        {
            D0nvLVMQ = 0;
            while (D0nvLVMQ < BhH9VcS2) {
                scanf ("%d", (dVB8px9K2 + D0nvLVMQ));
                D0nvLVMQ = D0nvLVMQ +(722 - 721);
            }
        }
        tXF6Rkvrs9Mt (p1, BhH9VcS2);
        tXF6Rkvrs9Mt (dVB8px9K2, BhH9VcS2);
        while (UVXuxUSYOMP <= mintj) {
            if (*(dVB8px9K2 + T4FokyruU6) < *(p1 + mintj)) {
                iuew6K504ax = iuew6K504ax + (810 - 809);
                mintj = mintj - (36 - 35);
                T4FokyruU6 = T4FokyruU6 -(517 - 516);
            }
            else {
                if (*(dVB8px9K2 + T4FokyruU6) > *(p1 + mintj)) {
                    maxqw = maxqw + (722 - 721);
                    iuew6K504ax = iuew6K504ax - (860 - 859);
                    mintj = mintj - (374 - 373);
                }
                else {
                    if (*(p1 + UVXuxUSYOMP) > *(dVB8px9K2 + maxqw)) {
                        maxqw = maxqw + (570 - 569);
                        UVXuxUSYOMP = UVXuxUSYOMP +(220 - 219);
                        iuew6K504ax++;
                    }
                    else {
                        if (*(p1 + UVXuxUSYOMP) < *(dVB8px9K2 + maxqw)) {
                            iuew6K504ax = iuew6K504ax - 1;
                            mintj = mintj - 1;
                            maxqw = maxqw + 1;
                        }
                        else if (*(p1 + mintj) == *(dVB8px9K2 + maxqw)) {
                            mintj = mintj - 1;
                            maxqw = maxqw + 1;
                        }
                        else {
                            iuew6K504ax--;
                            mintj = mintj - 1;
                            maxqw = maxqw + 1;
                        }
                    }
                }
            }
        }
        printf ("%d", iuew6K504ax * 200);
        scanf ("%d", &BhH9VcS2);
        printf ("\n");
    }
    return 0;
}

