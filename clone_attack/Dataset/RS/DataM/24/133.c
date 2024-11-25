int main () {
    char b [200] [24] = {'\0'};
    int i, j = 0, FhzECsq, eC2czu0d8 = 0, BF4mkthIlab, De7sE93C, s, Y20pricJbIo, q1;
    char a [2000] = {'\0'};
    gets (a);
    FhzECsq = strlen (a);
    scanf ("%d\n", &q1);
    for (i = 0;; i = i + 1) {
        {
            j = 0;
            while (j + eC2czu0d8 <= FhzECsq) {
                if (*(a + j + eC2czu0d8) == ' ') {
                    eC2czu0d8 = j + eC2czu0d8 + 1;
                    j = 0;
                    break;
                }
                else if (*(a + j + eC2czu0d8) == ',') {
                    eC2czu0d8 = j + eC2czu0d8 + 2;
                    j = 0;
                    break;
                }
                else
                    *(*(b + i) + j) = *(a + j + eC2czu0d8);
                j = j + 1;
            };
        }
        if (j + eC2czu0d8 == FhzECsq +1)
            break;
    }
    BF4mkthIlab = strlen (*(b + 0)), s = 0;
    De7sE93C = strlen (*(b + 0)), Y20pricJbIo = 0;
    {
        j = 1;
        while (j <= i) {
            if (strlen (*(b + j)) > BF4mkthIlab) {
                BF4mkthIlab = strlen (*(b + j));
                s = j;
            }
            if (strlen (*(b + j)) < De7sE93C) {
                De7sE93C = strlen (*(b + j));
                Y20pricJbIo = j;
            }
            j++;
        };
    }
    printf ("%s\n%s\n", *(b + s), *(b + Y20pricJbIo));
    return 0;
}

