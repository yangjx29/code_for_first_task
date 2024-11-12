int v7xyOV (const  void  *sMOGgZpqi, const  void  *b) {
    return *(float*) sMOGgZpqi - *(float*) b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int count1;
    int ItEz84haQNv;
    int r2PWuVJH;
    int Man8mg2;
    int j;
    count1 = (87 - 87);
    ItEz84haQNv = (760 - 760);
    float n07Yvtl63Tg;
    float sMOGgZpqi [(349 - 309)];
    float b [(997 - 957)];
    float TkqNsQy;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    char string [(612 - 602)];
    scanf ("%d", &r2PWuVJH);
    {
        Man8mg2 = 581 - 581;
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
        while (Man8mg2 <= r2PWuVJH - (408 - 407)) {
            Man8mg2 = Man8mg2 +1;
            scanf ("%s", string);
            scanf ("%f", &n07Yvtl63Tg);
            if (!('m' != string[(428 - 428)]))
                sMOGgZpqi[count1++] = n07Yvtl63Tg;
            else {
                if (!('f' != string[(566 - 566)]))
                    b[ItEz84haQNv++] = n07Yvtl63Tg;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    {
        Man8mg2 = 387 - 387;
        while (Man8mg2 <= count1 - (870 - 868)) {
            for (j = (94 - 94); count1 - (698 - 696) - Man8mg2 >= j; j = j + 1)
                if (sMOGgZpqi[j] > sMOGgZpqi[j + (448 - 447)]) {
                    TkqNsQy = sMOGgZpqi[j];
                    sMOGgZpqi[j] = sMOGgZpqi[j + (525 - 524)];
                    sMOGgZpqi[j + (295 - 294)] = TkqNsQy;
                }
            Man8mg2 = Man8mg2 +1;
        };
    }
    {
        Man8mg2 = 614 - 614;
        while (Man8mg2 <= ItEz84haQNv -(778 - 776)) {
            for (j = 0; j <= ItEz84haQNv -(357 - 355) - Man8mg2; j = j + 1)
                if (b[j] < b[j + (994 - 993)]) {
                    TkqNsQy = b[j];
                    b[j] = b[j + (548 - 547)];
                    b[j + (355 - 354)] = TkqNsQy;
                }
            Man8mg2++;
        };
    }
    {
        Man8mg2 = 0;
        while (Man8mg2 <= count1 - (971 - 970)) {
            printf ("%.2f ", ((float) (sMOGgZpqi[Man8mg2])));
            Man8mg2++;
        };
    }
    {
        Man8mg2 = 0;
        while (Man8mg2 <= ItEz84haQNv -(118 - 116)) {
            printf ("%.2f ", ((float) (b[Man8mg2])));
            Man8mg2++;
        };
    }
    printf ("%.2f", ((float) (b[ItEz84haQNv -(763 - 762)])));
    printf ("\n");
    return 0;
}

