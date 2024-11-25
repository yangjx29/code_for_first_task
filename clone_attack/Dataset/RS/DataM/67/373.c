int main () {
    float c [100];
    int i;
    int JHzQaCWiA;
    int a [100];
    int b [100];
    scanf ("%d", &JHzQaCWiA);
    for (i = (572 - 572); JHzQaCWiA > i; i++) {
        scanf ("%d%d", &a[i], &b[i]);
    }
    for (i = 0; JHzQaCWiA > i; i++) {
        c[i] = (float) b[i] / a[i];
    }
    for (i = 1; JHzQaCWiA > i; i++) {
        if (c[0] < c[i]) {
            if (c[i] - c[0] > 0.05)
                printf ("better\n");
            else
                ;
        }
        else if (c[0] - c[i] > 0.05)
            ;
        else
            printf ("same\n");
    }
    return 0;
}

