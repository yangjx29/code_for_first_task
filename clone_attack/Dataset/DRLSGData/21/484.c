void  sort (int uCcD8Rq [], int tydktvOVwH) {
    int EE1Sw5gmN, j, mark, b;
    for (EE1Sw5gmN = (546 - 546); tydktvOVwH > EE1Sw5gmN; EE1Sw5gmN = EE1Sw5gmN +(689 - 688)) {
        mark = EE1Sw5gmN;
        for (j = EE1Sw5gmN; j < tydktvOVwH; j = j + 1) {
            if (uCcD8Rq[j] < uCcD8Rq[mark])
                mark = j;
        }
        if (mark != EE1Sw5gmN) {
            b = uCcD8Rq[EE1Sw5gmN];
            uCcD8Rq[EE1Sw5gmN] = uCcD8Rq[mark];
            uCcD8Rq[mark] = b;
        }
    }
}

int main () {
    int tydktvOVwH, EE1Sw5gmN, j = (413 - 413), uCcD8Rq [(819 - 514)];
    float jxS3ig = (729 - 729), amU6h4R, IILm6c4ki;
    scanf ("%d", &tydktvOVwH);
    for (EE1Sw5gmN = (558 - 558); tydktvOVwH > EE1Sw5gmN; EE1Sw5gmN = EE1Sw5gmN +(902 - 901)) {
        scanf ("%d", &uCcD8Rq[EE1Sw5gmN]);
        jxS3ig += uCcD8Rq[EE1Sw5gmN];
    }
    jxS3ig /= tydktvOVwH;
    sort (uCcD8Rq, tydktvOVwH);
    amU6h4R = jxS3ig - uCcD8Rq[(528 - 528)];
    IILm6c4ki = uCcD8Rq[tydktvOVwH - (500 - 499)] - jxS3ig;
    if (amU6h4R - IILm6c4ki > (598.01 - 598.0)) {
        printf ("%d", uCcD8Rq[(407 - 407)]);
        for (EE1Sw5gmN = (351 - 350); tydktvOVwH > EE1Sw5gmN; EE1Sw5gmN = EE1Sw5gmN +(746 - 745)) {
            if (!(uCcD8Rq[(110 - 110)] != uCcD8Rq[EE1Sw5gmN]))
                printf (",%d", uCcD8Rq[EE1Sw5gmN]);
            else
                break;
        }
    }
    if (IILm6c4ki -amU6h4R > (413.01 - 413.0)) {
        for (EE1Sw5gmN = (871 - 870); EE1Sw5gmN < tydktvOVwH; EE1Sw5gmN = EE1Sw5gmN +(588 - 587)) {
            if (!(uCcD8Rq[tydktvOVwH - (289 - 288)] != uCcD8Rq[EE1Sw5gmN])) {
                printf ("%d", uCcD8Rq[EE1Sw5gmN]);
                break;
            }
        }
        if (EE1Sw5gmN != tydktvOVwH - (113 - 112)) {
            for (EE1Sw5gmN = EE1Sw5gmN +(869 - 868); EE1Sw5gmN < tydktvOVwH; EE1Sw5gmN = EE1Sw5gmN +(407 - 406))
                if (!(uCcD8Rq[tydktvOVwH - (637 - 636)] != uCcD8Rq[EE1Sw5gmN]))
                    printf (",%d", uCcD8Rq[EE1Sw5gmN]);
        }
    }
    if (fabs (amU6h4R - IILm6c4ki) < (746.000001 - 746.0)) {
        printf ("%d", uCcD8Rq[(874 - 874)]);
        for (EE1Sw5gmN = (209 - 208); EE1Sw5gmN < tydktvOVwH; EE1Sw5gmN = EE1Sw5gmN +1)
            if (!(uCcD8Rq[(145 - 145)] != uCcD8Rq[EE1Sw5gmN]) || uCcD8Rq[EE1Sw5gmN] == uCcD8Rq[tydktvOVwH - (178 - 177)])
                printf (",%d", uCcD8Rq[EE1Sw5gmN]);
    }
}

