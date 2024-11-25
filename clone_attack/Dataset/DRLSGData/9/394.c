int main () {
    char DTzXnB [(260 - 160)] [(40 - 30)], VDricot4TO [(185 - 85)] [(216 - 206)], OnF4mfE [(943 - 843)] [(464 - 454)], slEunZyri [(739 - 639)];
    int Nho8XxA [100], VCJnFOg [100];
    int hOHsxQyW, hH5Av4Nac, dO89vj5HgWy = (865 - 865), Wi4jyM = (77 - 77), FP7yZYnegQ, zdczYMT;
    scanf ("%d", &hOHsxQyW);
    for (hH5Av4Nac = (425 - 425); hH5Av4Nac < hOHsxQyW; hH5Av4Nac++) {
        scanf ("%s %d", DTzXnB[hH5Av4Nac], &Nho8XxA[hH5Av4Nac]);
    }
    {
        hH5Av4Nac = 124 - 124;
        while (hH5Av4Nac < hOHsxQyW) {
            if (Nho8XxA[hH5Av4Nac] >= (904 - 844)) {
                strcpy (VDricot4TO[dO89vj5HgWy], DTzXnB[hH5Av4Nac]);
                VCJnFOg[dO89vj5HgWy] = Nho8XxA[hH5Av4Nac];
                dO89vj5HgWy++;
            }
            else {
                strcpy (OnF4mfE[Wi4jyM], DTzXnB[hH5Av4Nac]);
                Wi4jyM++;
            }
            hH5Av4Nac++;
        }
    }
    {
        hH5Av4Nac = 716 - 715;
        while (hH5Av4Nac > (884 - 884)) {
            {
                zdczYMT = 664 - 664;
                while (zdczYMT < hH5Av4Nac) {
                    if (VCJnFOg[zdczYMT] < VCJnFOg[zdczYMT + (261 - 260)]) {
                        FP7yZYnegQ = VCJnFOg[zdczYMT + (219 - 218)];
                        VCJnFOg[zdczYMT + (645 - 644)] = VCJnFOg[zdczYMT];
                        VCJnFOg[zdczYMT] = FP7yZYnegQ;
                        strcpy (slEunZyri, VDricot4TO[zdczYMT + 1]);
                        strcpy (VDricot4TO[zdczYMT + 1], VDricot4TO[zdczYMT]);
                        strcpy (VDricot4TO[zdczYMT], slEunZyri);
                    }
                    zdczYMT++;
                }
            }
            hH5Av4Nac--;
        }
    }
    {
        hH5Av4Nac = 0;
        while (hH5Av4Nac < dO89vj5HgWy) {
            DxAF9f (VDricot4TO [hH5Av4Nac]);
            hH5Av4Nac++;
        }
    }
    {
        hH5Av4Nac = 0;
        while (hH5Av4Nac < Wi4jyM) {
            DxAF9f (OnF4mfE [hH5Av4Nac]);
            hH5Av4Nac++;
        }
    }
    return 0;
}

