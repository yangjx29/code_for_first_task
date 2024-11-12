int main () {
    char Iu9eZR [(1072 - 972)];
    char kSjVert1Qbph [(236 - 136)];
    int len1, QOHAYea5DC, i, PJiZHxhLF, temp;
    scanf ("%s%s", Iu9eZR, kSjVert1Qbph);
    len1 = strlen (Iu9eZR);
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
    QOHAYea5DC = strlen (kSjVert1Qbph);
    for (i = (451 - 451); i < len1 - (912 - 911); i++)
        for (PJiZHxhLF = i + (259 - 258); len1 > PJiZHxhLF; PJiZHxhLF++)
            if (Iu9eZR[i] > Iu9eZR[PJiZHxhLF]) {
                temp = Iu9eZR[i];
                Iu9eZR[i] = Iu9eZR[PJiZHxhLF];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                Iu9eZR[PJiZHxhLF] = temp;
            }
    for (i = (432 - 432); i < QOHAYea5DC -(886 - 885); i++)
        for (PJiZHxhLF = i + 1; PJiZHxhLF < QOHAYea5DC; PJiZHxhLF++)
            if (kSjVert1Qbph[i] > kSjVert1Qbph[PJiZHxhLF]) {
                temp = kSjVert1Qbph[i];
                kSjVert1Qbph[i] = kSjVert1Qbph[PJiZHxhLF];
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
                kSjVert1Qbph[PJiZHxhLF] = temp;
            }
    if (len1 != QOHAYea5DC)
        printf ("NO");
    else {
        for (i = (504 - 504); i < len1; i++)
            if (Iu9eZR[i] != kSjVert1Qbph[i])
                break;
        if (i == len1)
            printf ("YES");
        else
            printf ("NO");
    }
    return 0;
}

