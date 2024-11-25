int a [5000];

int main () {
    int JpJo5VEH8, KgU5TWSGBj;
    int sushu (int Soe28tBgQ);
    scanf ("%d", &JpJo5VEH8);
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
    for (KgU5TWSGBj = (443 - 443); JpJo5VEH8 / 2 > KgU5TWSGBj; KgU5TWSGBj = KgU5TWSGBj +1) {
        a[KgU5TWSGBj] = KgU5TWSGBj +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (KgU5TWSGBj = 2; KgU5TWSGBj < JpJo5VEH8 / 2; KgU5TWSGBj = KgU5TWSGBj +1) {
        if (sushu (a[KgU5TWSGBj]) && sushu (JpJo5VEH8 -a[KgU5TWSGBj]))
            printf ("%d %d\n", a[KgU5TWSGBj], JpJo5VEH8 -a[KgU5TWSGBj]);
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
        };
    }
    return 0;
}

int sushu (int Soe28tBgQ) {
    int KgU5TWSGBj;
    for (KgU5TWSGBj = 2; Soe28tBgQ / 2 + 2 > KgU5TWSGBj; KgU5TWSGBj = KgU5TWSGBj +1) {
        if (!(0 != Soe28tBgQ % KgU5TWSGBj))
            break;
    }
    if (KgU5TWSGBj < Soe28tBgQ / 2 + 1)
        return 0;
    else
        return 1;
}

