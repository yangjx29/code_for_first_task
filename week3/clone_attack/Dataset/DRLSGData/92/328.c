int main () {
    int k4VDFTy [1001], PTYoOUS [1001];
    int CLY1G8SdAvo, xxlsBw, xPn9zGWI, Zo6JK8tmQv, TRcWnF6Z;
    for (; scanf ("%d", &CLY1G8SdAvo), CLY1G8SdAvo;) {
        for (xxlsBw = 0; xxlsBw < CLY1G8SdAvo; xxlsBw = xxlsBw + 1) {
            scanf ("%d", &k4VDFTy[xxlsBw]);
            for (xPn9zGWI = xxlsBw - 1; 0 <= xPn9zGWI; xPn9zGWI = xPn9zGWI - 1) {
                if (k4VDFTy[xPn9zGWI + 1] > k4VDFTy[xPn9zGWI]) {
                    k4VDFTy[xPn9zGWI] += k4VDFTy[xPn9zGWI + 1];
                    k4VDFTy[xPn9zGWI + 1] = k4VDFTy[xPn9zGWI] - k4VDFTy[xPn9zGWI + 1];
                    k4VDFTy[xPn9zGWI] -= k4VDFTy[xPn9zGWI + 1];
                }
            }
        }
        for (xxlsBw = 0; CLY1G8SdAvo > xxlsBw; xxlsBw = xxlsBw + 1) {
            scanf ("%d", &PTYoOUS[xxlsBw]);
            {
                xPn9zGWI = xxlsBw - 1;
                for (; 0 <= xPn9zGWI;) {
                    if (PTYoOUS[xPn9zGWI] < PTYoOUS[xPn9zGWI + 1]) {
                        PTYoOUS[xPn9zGWI] += PTYoOUS[xPn9zGWI + 1];
                        PTYoOUS[xPn9zGWI + 1] = PTYoOUS[xPn9zGWI] - PTYoOUS[xPn9zGWI + 1];
                        PTYoOUS[xPn9zGWI] -= PTYoOUS[xPn9zGWI + 1];
                    }
                    xPn9zGWI = xPn9zGWI - 1;
                }
            }
        }
        xPn9zGWI = 0;
        Zo6JK8tmQv = 0;
        TRcWnF6Z = CLY1G8SdAvo -1;
        for (xxlsBw = 0; xxlsBw < CLY1G8SdAvo &&xPn9zGWI <= TRcWnF6Z;) {
            if (k4VDFTy[xPn9zGWI] < PTYoOUS[xxlsBw]) {
                Zo6JK8tmQv = Zo6JK8tmQv -1;
                TRcWnF6Z = TRcWnF6Z -1;
                xxlsBw = xxlsBw + 1;
            }
            else if (!(PTYoOUS[xxlsBw] != k4VDFTy[xPn9zGWI])) {
                if (PTYoOUS[CLY1G8SdAvo -1] > k4VDFTy[TRcWnF6Z]) {
                    TRcWnF6Z = TRcWnF6Z -1;
                    xxlsBw = xxlsBw + 1;
                    Zo6JK8tmQv = Zo6JK8tmQv -1;
                }
                else if (k4VDFTy[TRcWnF6Z] > PTYoOUS[CLY1G8SdAvo -1]) {
                    TRcWnF6Z = TRcWnF6Z -1;
                    Zo6JK8tmQv = Zo6JK8tmQv +1;
                    CLY1G8SdAvo = CLY1G8SdAvo -1;
                }
                else if (k4VDFTy[TRcWnF6Z] == PTYoOUS[CLY1G8SdAvo -1]) {
                    if (k4VDFTy[TRcWnF6Z] != PTYoOUS[xxlsBw]) {
                        TRcWnF6Z = TRcWnF6Z -1;
                        xxlsBw = xxlsBw + 1;
                        Zo6JK8tmQv = Zo6JK8tmQv -1;
                    }
                    else
                        break;
                }
            }
            else {
                xPn9zGWI = xPn9zGWI + 1;
                Zo6JK8tmQv = Zo6JK8tmQv +1;
                xxlsBw = xxlsBw + 1;
            }
        }
        printf ("%d\n", Zo6JK8tmQv *200);
    }
    return 0;
}

