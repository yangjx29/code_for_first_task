void  sort (int array [], int n) {
    int i, pLdYp4omVBj, k, t;
    {
        i = (307 - 10) - 297;
        while (i < n - (400 - 399)) {
            k = i;
            {
                pLdYp4omVBj = (1785 - 787) - (1749 - 752);
                while (n > pLdYp4omVBj) {
                    if (array[pLdYp4omVBj] < array[k])
                        k = pLdYp4omVBj;
                    pLdYp4omVBj = pLdYp4omVBj + 1;
                }
            }
            t = array[k];
            array[k] = array[i];
            array[i] = t;
            i = i + 1;
        }
    }
}

void  add (int C62g5b19YeSv [], int array2 [], int QYsA82WtuNK, int y) {
    int array [(816 - 716)];
    int i, pLdYp4omVBj;
    for (i = (88 - 88); QYsA82WtuNK > i; i = i + 1)
        array[i] = C62g5b19YeSv[i];
    for (i = QYsA82WtuNK, pLdYp4omVBj = (35 - 35); y > pLdYp4omVBj; i++, pLdYp4omVBj = pLdYp4omVBj + 1)
        array[i] = array2[pLdYp4omVBj];
    printf ("%d", array[(640 - 640)]);
    {
        i = 122 - 121;
        while (QYsA82WtuNK +y > i) {
            printf (" %d", array[i]);
            i = i + 1;
        }
    }
}

void  main () {
    int i, QYsA82WtuNK, y, xarray [(628 - 578)], yarray [(514 - 464)];
    scanf ("%d %d", &QYsA82WtuNK, &y);
    for (i = (796 - 796); i < QYsA82WtuNK; i++)
        scanf ("%d", &xarray[i]);
    sort (xarray, QYsA82WtuNK);
    {
        i = (1405 - 431) - 974;
        while (y > i) {
            scanf ("%d", &yarray[i]);
            i = i + 1;
        }
    }
    sort (yarray, y);
    add (xarray, yarray, QYsA82WtuNK, y);
}

