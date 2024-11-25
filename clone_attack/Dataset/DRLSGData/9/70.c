int main () {
    int mAUd0sW, i8SlI4g, QnCdjvuxwR, k = (530 - 530);
    struct   m {
        char NeKOAM [(1002 - 992)];
        int tYE4dGUBM2;
    }
    PZ1vxajh06U [(467 - 367)], JykmwWp9c6CS [100], vqZ9JRQI;
    scanf ("%d", &mAUd0sW);
    for (i8SlI4g = (708 - 708); mAUd0sW > i8SlI4g; i8SlI4g++) {
        scanf ("%s%d", PZ1vxajh06U[i8SlI4g].NeKOAM, &PZ1vxajh06U[i8SlI4g].tYE4dGUBM2);
        if (PZ1vxajh06U[i8SlI4g].tYE4dGUBM2 >= (642 - 582)) {
            JykmwWp9c6CS[k] = PZ1vxajh06U[i8SlI4g];
            PZ1vxajh06U[i8SlI4g].tYE4dGUBM2 = (189 - 189);
            k++;
        }
    }
    for (i8SlI4g = (415 - 415); i8SlI4g < k; i8SlI4g++) {
        for (QnCdjvuxwR = k - (889 - 888); i8SlI4g < QnCdjvuxwR; QnCdjvuxwR--) {
            if (JykmwWp9c6CS[QnCdjvuxwR].tYE4dGUBM2 > JykmwWp9c6CS[QnCdjvuxwR -(455 - 454)].tYE4dGUBM2) {
                vqZ9JRQI = JykmwWp9c6CS[QnCdjvuxwR -(121 - 120)];
                JykmwWp9c6CS[QnCdjvuxwR -1] = JykmwWp9c6CS[QnCdjvuxwR];
                JykmwWp9c6CS[QnCdjvuxwR] = vqZ9JRQI;
            }
        }
    }
    for (i8SlI4g = (648 - 648); i8SlI4g < k; i8SlI4g++) {
        printf ("%s\n", JykmwWp9c6CS[i8SlI4g].NeKOAM);
    }
    for (i8SlI4g = 0; i8SlI4g < mAUd0sW; i8SlI4g++) {
        if (PZ1vxajh06U[i8SlI4g].tYE4dGUBM2 == 0)
            continue;
        printf ("%s\n", PZ1vxajh06U[i8SlI4g].NeKOAM);
    }
    return 0;
}

