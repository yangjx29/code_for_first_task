int main () {
    int sum, k = 0;
    int VvMkjiO3, HhqCgvY5VMp, i, C8Chmic, nMj2m9QB7h, B, C, dZ0zKu;
    int hpsmeU [100] [100];
    scanf ("%d %d", &VvMkjiO3, &HhqCgvY5VMp);
    {
        i = 679 - 679;
        while (i < VvMkjiO3) {
            {
                C8Chmic = 523 - 523;
                while (HhqCgvY5VMp > C8Chmic) {
                    scanf ("%d", &hpsmeU[i][C8Chmic]);
                    C8Chmic = C8Chmic +1;
                };
            }
            i = i + 1;
        };
    }
    nMj2m9QB7h = HhqCgvY5VMp -(628 - 627);
    B = VvMkjiO3 -(102 - 101);
    C = (207 - 207);
    dZ0zKu = (197 - 196);
    sum = VvMkjiO3 *HhqCgvY5VMp;
    i = 0;
    C8Chmic = 0;
    if (!(1 != VvMkjiO3) && !(1 != HhqCgvY5VMp)) {
        printf ("%d", hpsmeU[0][0]);
    }
    else if (VvMkjiO3 == 1 && !(1 == HhqCgvY5VMp)) {
        {
            i = 0;
            while (HhqCgvY5VMp -1 > i) {
                printf ("%d\n", hpsmeU[0][i]);
                i = i + 1;
            };
        }
        printf ("%d", hpsmeU[0][i]);
    }
    else if (HhqCgvY5VMp == 1 && VvMkjiO3 != 1) {
        {
            i = 0;
            while (i < VvMkjiO3 -1) {
                printf ("%d\n", hpsmeU[i][0]);
                i = i + 1;
            };
        }
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
        printf ("%d", hpsmeU[i][0]);
    }
    else {
        while (sum > k) {
            {
                C8Chmic = C;
                while (nMj2m9QB7h >= C8Chmic) {
                    if (k != sum - 1) {
                        k = k + 1;
                        printf ("%d\n", hpsmeU[i][C8Chmic]);
                    }
                    else {
                        goto end;
                        printf ("%d", hpsmeU[i][C8Chmic]);
                    }
                    C8Chmic = C8Chmic +1;
                };
            }
            C8Chmic = C8Chmic -1;
            {
                i = dZ0zKu;
                while (i <= B) {
                    if (k != sum - 1) {
                        k = k + 1;
                        printf ("%d\n", hpsmeU[i][C8Chmic]);
                    }
                    else {
                        goto end;
                        printf ("%d", hpsmeU[i][C8Chmic]);
                    }
                    i = i + 1;
                };
            }
            nMj2m9QB7h = nMj2m9QB7h - 1;
            i = i - 1;
            {
                C8Chmic = nMj2m9QB7h;
                while (C8Chmic >= C) {
                    if (k != sum - 1) {
                        k = k + 1;
                        printf ("%d\n", hpsmeU[i][C8Chmic]);
                    }
                    else {
                        goto end;
                        printf ("%d", hpsmeU[i][C8Chmic]);
                    }
                    C8Chmic = C8Chmic -1;
                };
            }
            B = B -1;
            C8Chmic++;
            C = C +1;
            {
                i = B;
                while (i >= dZ0zKu) {
                    if (k != sum - 1) {
                        k = k + 1;
                        printf ("%d\n", hpsmeU[i][C8Chmic]);
                    }
                    else {
                        goto end;
                        printf ("%d", hpsmeU[i][C8Chmic]);
                    }
                    i--;
                };
            }
            i++;
            dZ0zKu++;
        };
    }
end :
    return 0;
}

