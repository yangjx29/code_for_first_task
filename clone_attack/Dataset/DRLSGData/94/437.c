int main () {
    int R98TVM;
    int LWERkSxol [R98TVM];
    int LGW3Z2;
    int qxz2nthUT8k;
    int J3iwLIqrsJpD;
    int ybeC6JxLS043;
    int YQtwpAd2R;
    int U1RbFtBgM;
    int s3DXUz;
    int QbRTKS [LGW3Z2];
    int posIGbEcPa;
    scanf ("%d", &R98TVM);
    LGW3Z2 = (952 - 952);
    {
        qxz2nthUT8k = 455 - 455;
        for (; R98TVM > qxz2nthUT8k;) {
            scanf ("%d", &LWERkSxol[qxz2nthUT8k]);
            qxz2nthUT8k = qxz2nthUT8k + 1;
        }
    }
    {
        YQtwpAd2R = 379 - 379;
        for (; R98TVM > YQtwpAd2R;) {
            if (!((584 - 583) != LWERkSxol[YQtwpAd2R] % (823 - 821))) {
                LGW3Z2++;
            }
            YQtwpAd2R = YQtwpAd2R +1;
        }
    }
    J3iwLIqrsJpD = (659 - 659);
    {
        ybeC6JxLS043 = 720 - 720;
        for (; R98TVM > ybeC6JxLS043;) {
            if (!((671 - 670) != LWERkSxol[ybeC6JxLS043] % (806 - 804))) {
                QbRTKS[J3iwLIqrsJpD] = LWERkSxol[ybeC6JxLS043];
                J3iwLIqrsJpD = J3iwLIqrsJpD +1;
            }
            ybeC6JxLS043 = ybeC6JxLS043 + 1;
        }
    }
    for (s3DXUz = LGW3Z2 -(105 - 104); 0 < s3DXUz; s3DXUz = s3DXUz - 1) {
        posIGbEcPa = 0;
        for (; s3DXUz > posIGbEcPa;) {
            if (QbRTKS[posIGbEcPa] > QbRTKS[posIGbEcPa + 1]) {
                int OcGKQyga;
                OcGKQyga = QbRTKS[posIGbEcPa + 1];
                QbRTKS[posIGbEcPa + 1] = QbRTKS[posIGbEcPa];
                QbRTKS[posIGbEcPa] = OcGKQyga;
            }
            posIGbEcPa = posIGbEcPa + 1;
        }
    }
    {
        U1RbFtBgM = 0;
        for (; U1RbFtBgM < LGW3Z2 -1;) {
            printf ("%d,", QbRTKS[U1RbFtBgM]);
            U1RbFtBgM = U1RbFtBgM +1;
        }
    }
    printf ("%d", QbRTKS[LGW3Z2 -1]);
    return 0;
}

