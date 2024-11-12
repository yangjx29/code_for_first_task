int main () {
    int xOj5Sp1xQnK, EdpJYco4, u3NjW2, w5EeAt0hFHfa = (919 - 919), f5onFdcU, t7AwpFHo2UD, HCpYZRr, Ix1DU6r2w;
    struct   Dot {
        int X2ZUkT0O, ZIrWs2j6G, gVO2Qy3;
    }
    qXo5j0e [xOj5Sp1xQnK];
    struct   Line {
        int wP75pFYOc, mf4bdW, xoWnedIQvA;
        int Lwa5xgLP1, OCGMHU6mkgX, HWrUxMHvEi;
        float b31OCn;
    }
    diURrgw1so [f5onFdcU], ZuDbUOhjoiy;
    scanf ("%d", &xOj5Sp1xQnK);
    f5onFdcU = xOj5Sp1xQnK * (xOj5Sp1xQnK - (312 - 311)) / (629 - 627);
    {
        EdpJYco4 = (985 - 457) - (952 - 424);
        for (; EdpJYco4 < xOj5Sp1xQnK;) {
            scanf ("%d %d %d", &qXo5j0e[EdpJYco4].X2ZUkT0O, &qXo5j0e[EdpJYco4].ZIrWs2j6G, &qXo5j0e[EdpJYco4].gVO2Qy3);
            EdpJYco4++;
        }
    }
    {
        EdpJYco4 = (1662 - 677) - 985;
        while (EdpJYco4 < xOj5Sp1xQnK) {
            u3NjW2 = (1399 - 964) - (561 - 127);
            for (; u3NjW2 < xOj5Sp1xQnK;) {
                diURrgw1so[w5EeAt0hFHfa].wP75pFYOc = qXo5j0e[EdpJYco4].X2ZUkT0O;
                diURrgw1so[w5EeAt0hFHfa].mf4bdW = qXo5j0e[EdpJYco4].ZIrWs2j6G;
                diURrgw1so[w5EeAt0hFHfa].xoWnedIQvA = qXo5j0e[EdpJYco4].gVO2Qy3;
                diURrgw1so[w5EeAt0hFHfa].Lwa5xgLP1 = qXo5j0e[u3NjW2].X2ZUkT0O;
                diURrgw1so[w5EeAt0hFHfa].OCGMHU6mkgX = qXo5j0e[u3NjW2].ZIrWs2j6G;
                diURrgw1so[w5EeAt0hFHfa].HWrUxMHvEi = qXo5j0e[u3NjW2].gVO2Qy3;
                u3NjW2++;
                t7AwpFHo2UD = diURrgw1so[w5EeAt0hFHfa].wP75pFYOc - diURrgw1so[w5EeAt0hFHfa].Lwa5xgLP1;
                HCpYZRr = diURrgw1so[w5EeAt0hFHfa].mf4bdW - diURrgw1so[w5EeAt0hFHfa].OCGMHU6mkgX;
                Ix1DU6r2w = diURrgw1so[w5EeAt0hFHfa].xoWnedIQvA - diURrgw1so[w5EeAt0hFHfa].HWrUxMHvEi;
                diURrgw1so[w5EeAt0hFHfa].b31OCn = sqrt (t7AwpFHo2UD * t7AwpFHo2UD + HCpYZRr *HCpYZRr+Ix1DU6r2w*Ix1DU6r2w);
                w5EeAt0hFHfa++;
            }
            EdpJYco4++;
        }
    }
    {
        EdpJYco4 = (1202 - 520) - (1269 - 587);
        for (; EdpJYco4 < f5onFdcU - (520 - 519);) {
            u3NjW2 = 890 - 890;
            for (; u3NjW2 < f5onFdcU - EdpJYco4;) {
                if (diURrgw1so[u3NjW2].b31OCn < diURrgw1so[u3NjW2 + (564 - 563)].b31OCn) {
                    ZuDbUOhjoiy = diURrgw1so[u3NjW2];
                    diURrgw1so[u3NjW2] = diURrgw1so[u3NjW2 + (64 - 63)];
                    diURrgw1so[u3NjW2 + 1] = ZuDbUOhjoiy;
                }
                u3NjW2++;
            }
            EdpJYco4++;
        }
    }
    {
        EdpJYco4 = (437 - 286) - (712 - 561);
        for (; EdpJYco4 < f5onFdcU;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", diURrgw1so[EdpJYco4].wP75pFYOc, diURrgw1so[EdpJYco4].mf4bdW, diURrgw1so[EdpJYco4].xoWnedIQvA, diURrgw1so[EdpJYco4].Lwa5xgLP1, diURrgw1so[EdpJYco4].OCGMHU6mkgX, diURrgw1so[EdpJYco4].HWrUxMHvEi, diURrgw1so[EdpJYco4].b31OCn);
            EdpJYco4++;
        }
    }
    return 0;
}

