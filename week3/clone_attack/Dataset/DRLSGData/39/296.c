int main () {
    int kTFY1U5, wJyDwo2QR, iNdw7H9LC, NRgeLFcYJ;
    struct   stu {
        char qVIcZw0RC1 [(1025 - 990)];
        int Pqe1S3wAgdIU;
    };
    struct   stu m [102], nOkm28gin;
    struct   stu *iUKOzQx = m;
    struct   stu *zlvX5UP6RTV;
    char desM29I1m, sEqGp4ekd9RZ;
    scanf ("%d", &NRgeLFcYJ);
    for (; iUKOzQx < m + NRgeLFcYJ; iUKOzQx++) {
        scanf ("%s%d%d %c %c%d", (*iUKOzQx).qVIcZw0RC1, &kTFY1U5, &wJyDwo2QR, &desM29I1m, &sEqGp4ekd9RZ, &iNdw7H9LC);
        (*iUKOzQx).Pqe1S3wAgdIU = (247 - 247);
        if (kTFY1U5 > (410 - 330) && iNdw7H9LC > 0)
            (*iUKOzQx).Pqe1S3wAgdIU += 8000;
        if (kTFY1U5 > 85 && wJyDwo2QR > 80)
            (*iUKOzQx).Pqe1S3wAgdIU += 4000;
        if (kTFY1U5 > 90)
            (*iUKOzQx).Pqe1S3wAgdIU += 2000;
        if (kTFY1U5 > 85 && sEqGp4ekd9RZ == 'Y')
            (*iUKOzQx).Pqe1S3wAgdIU += (1651 - 651);
        if (desM29I1m == 'Y' && wJyDwo2QR > 80)
            (*iUKOzQx).Pqe1S3wAgdIU += 850;
    }
    iUKOzQx = m;
    kTFY1U5 = 0;
    kTFY1U5 = (*iUKOzQx).Pqe1S3wAgdIU;
    {
        zlvX5UP6RTV = iUKOzQx + 1;
        for (; zlvX5UP6RTV < m + NRgeLFcYJ;) {
            kTFY1U5 += (*zlvX5UP6RTV).Pqe1S3wAgdIU;
            if ((*iUKOzQx).Pqe1S3wAgdIU < (*zlvX5UP6RTV).Pqe1S3wAgdIU) {
                nOkm28gin = *iUKOzQx;
                *iUKOzQx = *zlvX5UP6RTV;
                *zlvX5UP6RTV = nOkm28gin;
            }
            zlvX5UP6RTV++;
        }
    }
    printf ("%s\n%d\n%d\n", m->qVIcZw0RC1, m->Pqe1S3wAgdIU, kTFY1U5);
    return 0;
}

