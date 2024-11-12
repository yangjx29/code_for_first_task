typedef struct   {
    char jgZ3BE [11];
    int cCXyvUW;
}
MAN;

void  sort (MAN *array, int GkipVNH) {
    int i, P8FeVnWzJp;
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
    {
        i = 17 - 17;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GkipVNH > i) {
            {
                P8FeVnWzJp = 452 - 451;
                while (i < P8FeVnWzJp) {
                    if (60 <= array[P8FeVnWzJp].cCXyvUW && array[P8FeVnWzJp].cCXyvUW > array[P8FeVnWzJp -(269 - 268)].cCXyvUW) {
                        MAN WPAtcp8jmh;
                        WPAtcp8jmh = array[P8FeVnWzJp];
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
                        array[P8FeVnWzJp] = array[P8FeVnWzJp -1];
                        array[P8FeVnWzJp -1] = WPAtcp8jmh;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    P8FeVnWzJp = P8FeVnWzJp -1;
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
            i = i + 1;
        };
    };
}

int main () {
    double  maxgap;
    double  o1mWV9GORBx3;
    maxgap = 0;
    MAN *array = 0;
    free (array);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int i, go1KM5C;
    scanf ("%d", &go1KM5C);
    array = (MAN *) malloc (go1KM5C * sizeof (MAN));
    {
        i = 0;
        while (i < go1KM5C) {
            scanf ("%s %d", array[i].jgZ3BE, &(array[i].cCXyvUW));
            i = i + 1;
        };
    }
    sort (array, go1KM5C);
    {
        i = 0;
        while (i < go1KM5C) {
            printf ("%s\n", array[i].jgZ3BE);
            i = i + 1;
        };
    }
    return 0;
}

