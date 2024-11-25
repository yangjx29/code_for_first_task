void  main () {
    int num;
    int RGVRkgcof;
    int TybKoSJ1nz2I;
    int j;
    int a5bfxHUqe;
    int hV6XkuPmJchd;
    num = 0;
    RGVRkgcof = 0;
    char DJSIYBz6u [100] = {0}, b [100] = {0};
    scanf ("%s", DJSIYBz6u);
    a5bfxHUqe = strlen (DJSIYBz6u);
    scanf ("%s", &b);
    hV6XkuPmJchd = strlen (b);
    if (!(hV6XkuPmJchd != a5bfxHUqe)) {
        {
            TybKoSJ1nz2I = 0;
            while (TybKoSJ1nz2I < a5bfxHUqe) {
                {
                    j = 0;
                    while (hV6XkuPmJchd > j) {
                        if (DJSIYBz6u[TybKoSJ1nz2I] == b[j]) {
                            RGVRkgcof = 1;
                            break;
                        }
                        j++;
                    };
                }
                TybKoSJ1nz2I++;
                num = num + RGVRkgcof;
            };
        }
        if (num == a5bfxHUqe)
            printf ("YES");
        else
            printf ("NO");
    }
    else
        printf ("NO");
}

