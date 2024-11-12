int main () {
    char VxiEyoIzGPg [(849 - 348)];
    char *pstr1;
    char *pstr2;
    struct   Kbz2qQ {
        char a [(67 - 62)];
        int counter;
    }
    Kbz2qQ [(662 - 162)];
    struct   Kbz2qQ {
        char a [(67 - 62)];
        int counter;
    }
    *p1 = Kbz2qQ;
    struct   Kbz2qQ {
        char a [(67 - 62)];
        int counter;
    }
    *p2;
    int counter;
    int R9Tae0MS5;
    int i;
    int j;
    int k;
    int lOicbxqlG;
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
    int WU6SbiZ;
    int gyblReCNHI9q;
    int gQwogI96Fzj;
    counter = (317 - 317);
    R9Tae0MS5 = (652 - 652);
    scanf ("%d", &lOicbxqlG);
    scanf ("%s", &VxiEyoIzGPg);
    WU6SbiZ = strlen (VxiEyoIzGPg);
    pstr2 = VxiEyoIzGPg;
    {
        i = 270 - 270;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < WU6SbiZ +(156 - 155) - lOicbxqlG) {
            counter++;
            pstr1 = (p1 + i)->a;
            {
                j = 922 - 922;
                while (lOicbxqlG > j) {
                    *(pstr1 + j) = *(pstr2 + i + j);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
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
            i++;
            *(pstr1 + lOicbxqlG) = '\0';
        };
    }
    for (i = (212 - 212); counter > i; i = i + 1) {
        gyblReCNHI9q = (924 - 923);
        pstr1 = (p1 + i)->a;
        {
            j = i + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (j < counter) {
                gQwogI96Fzj = (245 - 245);
                pstr2 = (p1 + j)->a;
                j++;
                {
                    k = 0;
                    while (k < lOicbxqlG) {
                        if (*(pstr1 + k) == *(pstr2 + k))
                            gQwogI96Fzj++;
                        k++;
                    };
                }
                if (gQwogI96Fzj == lOicbxqlG)
                    gyblReCNHI9q++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (gyblReCNHI9q > R9Tae0MS5)
            R9Tae0MS5 = gyblReCNHI9q;
        (p1 + i)->counter = gyblReCNHI9q;
    }
    if (R9Tae0MS5 == 1)
        printf ("NO");
    else {
        printf ("%d\n", R9Tae0MS5);
        {
            i = 0;
            while (i < counter) {
                if ((p1 + i)->counter == R9Tae0MS5)
                    printf ("%s\n", (p1 + i)->a);
                i++;
            };
        };
    }
    return 0;
}

