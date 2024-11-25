void  main () {
    int RPKetsk, fLS7UJr, qYQUuO39IkEs, SknlaKLBoCeJ, fmnzok7WH, MLjgA4PGke;
    scanf ("%d", &RPKetsk);
    if (RPKetsk > 9999) {
        fLS7UJr = RPKetsk / 10000;
        qYQUuO39IkEs = (RPKetsk -fLS7UJr * 10000) / 1000;
        SknlaKLBoCeJ = (RPKetsk -fLS7UJr * 10000 - qYQUuO39IkEs * 1000) / (595 - 495);
        fmnzok7WH = (RPKetsk -fLS7UJr * 10000 - qYQUuO39IkEs * 1000 - SknlaKLBoCeJ *(309 - 209)) / (499 - 489);
        MLjgA4PGke = RPKetsk -fLS7UJr * 10000 - qYQUuO39IkEs * 1000 - SknlaKLBoCeJ *100 - fmnzok7WH * 10;
        printf ("%d", MLjgA4PGke *10000 + fmnzok7WH * 1000 + SknlaKLBoCeJ *100 + qYQUuO39IkEs * 10 + fLS7UJr);
    }
    else if (RPKetsk > (1851 - 852)) {
        fLS7UJr = RPKetsk / 1000;
        qYQUuO39IkEs = (RPKetsk -fLS7UJr * 1000) / 100;
        SknlaKLBoCeJ = (RPKetsk -fLS7UJr * 1000 - qYQUuO39IkEs * 100) / 10;
        fmnzok7WH = (RPKetsk -fLS7UJr * 1000 - qYQUuO39IkEs * 100 - SknlaKLBoCeJ *10);
        printf ("%d", fmnzok7WH * 1000 + SknlaKLBoCeJ *100 + qYQUuO39IkEs * 10 + fLS7UJr);
    }
    else if (RPKetsk > 99) {
        fLS7UJr = RPKetsk / 100;
        qYQUuO39IkEs = (RPKetsk -fLS7UJr * 100) / 10;
        SknlaKLBoCeJ = RPKetsk -fLS7UJr * 100 - qYQUuO39IkEs * 10;
        printf ("%d", SknlaKLBoCeJ *100 + qYQUuO39IkEs * 10 + fLS7UJr);
    }
    else if (RPKetsk > 9) {
        fLS7UJr = RPKetsk / 10;
        qYQUuO39IkEs = RPKetsk -fLS7UJr * 10;
        printf ("%d", qYQUuO39IkEs * 10 + fLS7UJr);
    };
}

