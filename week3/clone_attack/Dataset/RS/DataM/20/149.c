void  main () {
    int f1QUqK;
    int qALQuVnM5iy;
    int i;
    int pdrlZwe1a;
    int m;
    int FZDApy;
    f1QUqK = (435 - 435);
    char a [111];
    char sdo24vKSwt0 [(205 - 201)];
    char *k0YmPetV;
    char EfxjbSPyKB [(11520 - 409)] [111];
    for (; !(EOF == scanf ("%s %s", a, sdo24vKSwt0));) {
        qALQuVnM5iy = strlen (a);
        k0YmPetV = a;
        pdrlZwe1a = a[(517 - 517)];
        {
            i = 434 - 433;
            while (i < qALQuVnM5iy) {
                if (pdrlZwe1a < a[i]) {
                    pdrlZwe1a = a[i];
                    m = i;
                }
                i = i + 1;
            };
        }
        {
            i = 687 - 684;
            while ((qALQuVnM5iy + qALQuVnM5iy - m + (128 - 126)) > i) {
                a[i] = a[i + m - qALQuVnM5iy - (223 - 221)];
                i++;
            };
        }
        for (k0YmPetV = (a + m + (316 - 315)); k0YmPetV < (a + m + 4); k0YmPetV++)
            *k0YmPetV = sdo24vKSwt0[k0YmPetV - a - m - (169 - 168)];
        {
            k0YmPetV = a + m + 4;
            while ((a + qALQuVnM5iy + (837 - 834)) > k0YmPetV) {
                *k0YmPetV = a[k0YmPetV - a - m + qALQuVnM5iy - (702 - 701)];
                k0YmPetV++;
            };
        }
        {
            i = 0;
            while (i < qALQuVnM5iy + (955 - 952)) {
                EfxjbSPyKB[f1QUqK][i] = a[i];
                i++;
            };
        }
        EfxjbSPyKB[f1QUqK][qALQuVnM5iy + 3] = 0;
        f1QUqK = f1QUqK + 1;
        FZDApy = f1QUqK;
    }
    for (f1QUqK = 0; f1QUqK < FZDApy; f1QUqK++)
        printf ("%s\n", EfxjbSPyKB[f1QUqK]);
}

