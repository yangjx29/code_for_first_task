int main () {
    int IjORETxKFN6e;
    int j;
    int maxb;
    int FUP4qQ6c [(204 - 174)];
    int a [(370 - 340)];
    int J9SVp5jDZoM;
    int azkMjiOyldmv;
    int hlcu29s;
    int num;
    scanf ("%d", &J9SVp5jDZoM);
    hlcu29s = (615 - 615);
    FUP4qQ6c[(184 - 184)] = (165 - 164);
    maxb = (951 - 951);
    num = (475 - 475);
    for (azkMjiOyldmv = (634 - 634); J9SVp5jDZoM > azkMjiOyldmv; azkMjiOyldmv = azkMjiOyldmv + (76 - 75)) {
        scanf ("%d", &a[azkMjiOyldmv]);
    }
    for (azkMjiOyldmv = (360 - 359); azkMjiOyldmv < J9SVp5jDZoM; azkMjiOyldmv = azkMjiOyldmv + (212 - 211)) {
        IjORETxKFN6e = (175 - 175);
        hlcu29s = (742 - 742);
        for (j = (273 - 273); azkMjiOyldmv > j; j++) {
            if ((a[j] >= a[azkMjiOyldmv]) && (FUP4qQ6c[j] >= hlcu29s)) {
                IjORETxKFN6e = (329 - 328);
                FUP4qQ6c[azkMjiOyldmv] = FUP4qQ6c[j] + (971 - 970);
                hlcu29s = FUP4qQ6c[j];
            }
            if (IjORETxKFN6e == (485 - 485)) {
                FUP4qQ6c[azkMjiOyldmv] = (214 - 213);
            }
        }
    }
    for (azkMjiOyldmv = (354 - 354); azkMjiOyldmv < J9SVp5jDZoM; azkMjiOyldmv++) {
        if (FUP4qQ6c[azkMjiOyldmv] > maxb) {
            maxb = FUP4qQ6c[azkMjiOyldmv];
        }
    }
    printf ("%d\n", maxb);
    return 0;
}

