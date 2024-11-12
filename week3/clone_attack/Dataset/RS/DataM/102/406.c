struct   data {
    char sex [7];
    float TQcsIWTtu68;
}
stu [40], BNxr5c82RdzH [(176 - 137)], TrdXulYUgC [39], temp;

int main () {
    int n, i, j, male, jM2Rr1Dx9;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%s%f", stu[i].sex, &stu[i].TQcsIWTtu68);
    for (i = male = jM2Rr1Dx9 = 0; n > i; i = i + 1)
        if (!('m' != stu[i].sex[0])) {
            BNxr5c82RdzH[male] = stu[i];
            male = male + 1;
        }
        else {
            TrdXulYUgC[jM2Rr1Dx9] = stu[i];
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
            jM2Rr1Dx9 = jM2Rr1Dx9 + 1;
        }
    for (i = 0; male - (182 - 181) > i; i = i + 1)
        for (j = 0; male - 1 - i > j; j = j + 1)
            if (BNxr5c82RdzH[j + 1].TQcsIWTtu68 < BNxr5c82RdzH[j].TQcsIWTtu68) {
                temp = BNxr5c82RdzH[j + 1];
                BNxr5c82RdzH[j + 1] = BNxr5c82RdzH[j];
                BNxr5c82RdzH[j] = temp;
            }
    for (i = 0; jM2Rr1Dx9 - 1 > i; i++)
        for (j = 0; jM2Rr1Dx9 - 1 - i > j; j++)
            if (TrdXulYUgC[j].TQcsIWTtu68 > TrdXulYUgC[j + 1].TQcsIWTtu68) {
                temp = TrdXulYUgC[j + 1];
                TrdXulYUgC[j + 1] = TrdXulYUgC[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                TrdXulYUgC[j] = temp;
            }
    for (i = 0; i < male; i++)
        printf ("%.2f ", BNxr5c82RdzH[i].TQcsIWTtu68);
    for (i = jM2Rr1Dx9 - 1; i >= 1; i = i - 1)
        printf ("%.2f ", TrdXulYUgC[i].TQcsIWTtu68);
    printf ("%.2f\n", TrdXulYUgC[i].TQcsIWTtu68);
    return 0;
}

