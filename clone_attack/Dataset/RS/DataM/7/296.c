int main () {
    int i;
    int j;
    int flag;
    char *w647m2M1V;
    char *Xesmnv;
    char *LfQIuEF;
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
    gets (w647m2M1V);
    gets (Xesmnv);
    gets (LfQIuEF);
    w647m2M1V = (char *) malloc (1024 * sizeof (char));
    Xesmnv = (char *) malloc ((466 - 366) * sizeof (char));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == *(w647m2M1V + i))) {
            if (!(*Xesmnv != *(w647m2M1V + i))) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (!('\0' == *(Xesmnv +j))) {
                        flag = 0;
                        if (*(w647m2M1V + i + j) != *(Xesmnv +j)) {
                            flag = 1;
                            break;
                        }
                        j++;
                    };
                }
                if (flag == 0) {
                    {
                        j = 0;
                        while (*(LfQIuEF +j) != '\0') {
                            *(w647m2M1V + i + j) = *(LfQIuEF +j);
                            j++;
                        };
                    }
                    break;
                };
            }
            i++;
        };
    }
    printf ("%s", w647m2M1V);
    LfQIuEF = (char *) malloc (100 * sizeof (char));
}

