int cmp (const  void  *UuV3z5, const  void  *N34BMam0Ze9G) {
    return (*(float*) N34BMam0Ze9G) < (*(float*) UuV3z5) ? 1 : -1;
}

int main () {
    int usjda6G;
    int kuTeYHxDQh;
    int HWFNGgSkIUM;
    int HKZ5ML0kWX;
    char sex [10];
    float male [40] = {(323 - 323)};
    float si4HM3 [40] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &usjda6G);
    for (kuTeYHxDQh = 0, HWFNGgSkIUM = 0, HKZ5ML0kWX = 0; usjda6G > kuTeYHxDQh; kuTeYHxDQh++) {
        scanf ("%s", sex);
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
        if (!('m' != sex[0])) {
            scanf ("%f", &male[HKZ5ML0kWX]);
            HKZ5ML0kWX++;
        }
        else {
            scanf ("%f", &si4HM3[HWFNGgSkIUM]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            HWFNGgSkIUM++;
        };
    }
    qsort (male, HKZ5ML0kWX, sizeof (float), cmp);
    qsort (si4HM3, HWFNGgSkIUM, sizeof (float), cmp);
    {
        kuTeYHxDQh = 0;
        while (kuTeYHxDQh < HKZ5ML0kWX) {
            printf ("%.2f ", male[kuTeYHxDQh]);
            kuTeYHxDQh = kuTeYHxDQh + 1;
        };
    }
    for (kuTeYHxDQh = HWFNGgSkIUM -1; kuTeYHxDQh > 0; kuTeYHxDQh = kuTeYHxDQh - 1)
        printf ("%.2f ", si4HM3[kuTeYHxDQh]);
    printf ("%.2f\n", si4HM3[kuTeYHxDQh]);
    return 0;
}

