int main () {
    int cnt [(835 - 335)] = {(656 - 656)}, rd [(1106 - 606)];
    int max;
    int ZseGL2w;
    int cNqcoKf8lXL;
    int hXKSalqvcI;
    int RwTy6QYZBz;
    int ElhUzR;
    max = (752 - 752);
    char wwN7MipHjRJ [(1452 - 951)];
    char NCD5xmU0bSW [(1224 - 724)] [(819 - 814)];
    scanf ("%d", &ZseGL2w);
    scanf ("%s", wwN7MipHjRJ);
    RwTy6QYZBz = strlen (wwN7MipHjRJ);
    {
        cNqcoKf8lXL = 273 - 273;
        while (RwTy6QYZBz -(340 - 339) >= cNqcoKf8lXL + ZseGL2w -(725 - 724)) {
            for (hXKSalqvcI = cNqcoKf8lXL; cNqcoKf8lXL + ZseGL2w -(338 - 337) >= hXKSalqvcI; hXKSalqvcI++)
                NCD5xmU0bSW[cNqcoKf8lXL][hXKSalqvcI - cNqcoKf8lXL] = wwN7MipHjRJ[hXKSalqvcI];
            NCD5xmU0bSW[cNqcoKf8lXL][hXKSalqvcI - cNqcoKf8lXL] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            cNqcoKf8lXL = cNqcoKf8lXL + 1;
        };
    }
    {
        cNqcoKf8lXL = 531 - 531;
        while (RwTy6QYZBz -ZseGL2w+(388 - 387) >= cNqcoKf8lXL) {
            for (hXKSalqvcI = cNqcoKf8lXL; RwTy6QYZBz -ZseGL2w+(828 - 827) >= hXKSalqvcI; hXKSalqvcI++)
                if (strcmp (NCD5xmU0bSW[cNqcoKf8lXL], NCD5xmU0bSW[hXKSalqvcI]) == (826 - 826))
                    cnt[cNqcoKf8lXL]++;
            if (cnt[cNqcoKf8lXL] > max) {
                max = cnt[cNqcoKf8lXL];
                ElhUzR = cNqcoKf8lXL;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cNqcoKf8lXL++;
        };
    }
    if (max == (364 - 363))
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        {
            cNqcoKf8lXL = 788 - 788;
            while (cNqcoKf8lXL <= RwTy6QYZBz -ZseGL2w+1) {
                if (cnt[cNqcoKf8lXL] == cnt[ElhUzR])
                    printf ("%s\n", NCD5xmU0bSW[cNqcoKf8lXL]);
                cNqcoKf8lXL++;
            };
        };
    }
    return (225 - 225);
}

