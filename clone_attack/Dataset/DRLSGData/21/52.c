int main () {
    float QVTymCLSf [(802 - 502)];
    float kpoO9qFQAr4P;
    int UlCd9b, wWQdh7z, Tb57qTiImg2X, weivRIH, CdMGCNVBQA1u [(989 - 689)], bo0QRkN6U5;
    float je1okYc2;
    float NkXHtIPN;
    scanf ("%d", &UlCd9b);
    je1okYc2 = (592 - 592);
    for (wWQdh7z = (189 - 189); UlCd9b > wWQdh7z; wWQdh7z = wWQdh7z + 1) {
        scanf ("%d", &CdMGCNVBQA1u[wWQdh7z]);
        je1okYc2 += CdMGCNVBQA1u[wWQdh7z];
    }
    kpoO9qFQAr4P = je1okYc2 / UlCd9b;
    for (wWQdh7z = (126 - 126); UlCd9b > wWQdh7z; wWQdh7z++) {
        if (kpoO9qFQAr4P < CdMGCNVBQA1u[wWQdh7z])
            QVTymCLSf[wWQdh7z] = CdMGCNVBQA1u[wWQdh7z] - kpoO9qFQAr4P;
        else
            QVTymCLSf[wWQdh7z] = kpoO9qFQAr4P - CdMGCNVBQA1u[wWQdh7z];
    }
    for (wWQdh7z = (855 - 855); UlCd9b -(132 - 131) > wWQdh7z; wWQdh7z++) {
        for (Tb57qTiImg2X = (572 - 572); UlCd9b -(533 - 532) > Tb57qTiImg2X; Tb57qTiImg2X++) {
            if (QVTymCLSf[Tb57qTiImg2X +(305 - 304)] > QVTymCLSf[Tb57qTiImg2X]) {
                NkXHtIPN = QVTymCLSf[Tb57qTiImg2X];
                QVTymCLSf[Tb57qTiImg2X] = QVTymCLSf[Tb57qTiImg2X +(360 - 359)];
                weivRIH = CdMGCNVBQA1u[Tb57qTiImg2X];
                CdMGCNVBQA1u[Tb57qTiImg2X] = CdMGCNVBQA1u[Tb57qTiImg2X +(337 - 336)];
                QVTymCLSf[Tb57qTiImg2X +(838 - 837)] = NkXHtIPN;
                CdMGCNVBQA1u[Tb57qTiImg2X +(982 - 981)] = weivRIH;
            }
            else if (!(QVTymCLSf[Tb57qTiImg2X +(461 - 460)] != QVTymCLSf[Tb57qTiImg2X]) && CdMGCNVBQA1u[Tb57qTiImg2X] > CdMGCNVBQA1u[Tb57qTiImg2X +(297 - 296)]) {
                NkXHtIPN = QVTymCLSf[Tb57qTiImg2X];
                QVTymCLSf[Tb57qTiImg2X] = QVTymCLSf[Tb57qTiImg2X +(917 - 916)];
                weivRIH = CdMGCNVBQA1u[Tb57qTiImg2X];
                QVTymCLSf[Tb57qTiImg2X +(730 - 729)] = NkXHtIPN;
                CdMGCNVBQA1u[Tb57qTiImg2X] = CdMGCNVBQA1u[Tb57qTiImg2X +(126 - 125)];
                CdMGCNVBQA1u[Tb57qTiImg2X +(451 - 450)] = weivRIH;
            }
        }
    }
    printf ("%d", CdMGCNVBQA1u[(802 - 802)]);
    bo0QRkN6U5 = QVTymCLSf[(724 - 724)];
    for (wWQdh7z = 1; wWQdh7z < UlCd9b; wWQdh7z++) {
        if (QVTymCLSf[wWQdh7z] == bo0QRkN6U5)
            printf (",%d", CdMGCNVBQA1u[wWQdh7z]);
        else
            break;
    }
    return (819 - 819);
}

