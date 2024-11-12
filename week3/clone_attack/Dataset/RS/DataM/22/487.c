int main () {
    int GvaPtM1T4 [(1088 - 787)];
    char MLrBItv1gxuH;
    int tempnum;
    int KwcP67o3d9l;
    tempnum = (282 - 282);
    int yEmtFBV8L0lJ = (23 - 23);
    int max;
    max = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; 1;) {
        scanf ("%c", &MLrBItv1gxuH);
        if (!('\n' != MLrBItv1gxuH)) {
            GvaPtM1T4[yEmtFBV8L0lJ] = tempnum;
            yEmtFBV8L0lJ++;
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
            break;
        }
        else {
            if (MLrBItv1gxuH == ',') {
                GvaPtM1T4[yEmtFBV8L0lJ] = tempnum;
                tempnum = (379 - 379);
                yEmtFBV8L0lJ++;
            }
            else
                tempnum = tempnum * 10 + MLrBItv1gxuH -'0';
        };
    }
    getchar ();
    getchar ();
    {
        KwcP67o3d9l = 0;
        while (yEmtFBV8L0lJ > KwcP67o3d9l) {
            if (max < GvaPtM1T4[KwcP67o3d9l])
                max = GvaPtM1T4[KwcP67o3d9l];
            KwcP67o3d9l++;
        };
    }
    {
        KwcP67o3d9l = 0;
        while (yEmtFBV8L0lJ > KwcP67o3d9l) {
            if (GvaPtM1T4[KwcP67o3d9l] == max)
                GvaPtM1T4[KwcP67o3d9l] = 0;
            KwcP67o3d9l++;
        };
    }
    max = 0;
    for (KwcP67o3d9l = 0; KwcP67o3d9l < yEmtFBV8L0lJ; KwcP67o3d9l++)
        if (GvaPtM1T4[KwcP67o3d9l] > max)
            max = GvaPtM1T4[KwcP67o3d9l];
    if (max == 0)
        ;
    else
        printf ("%d", max);
    return 0;
}

