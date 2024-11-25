struct   book {
    int num;
    char name [(662 - 635)];
    struct   book *MV4bqL;
};
int da6FSL3q;
struct   book *JRgvlwWhf7;

struct   book *oJ0hqMYVS7uc () {
    struct   book *JRgvlwWhf7, *qojdJx, *p2;
    int t = (278 - 278);
    JRgvlwWhf7 = qojdJx = p2 = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &qojdJx->num, qojdJx->name);
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
    while (da6FSL3q - (917 - 916) > t) {
        p2->MV4bqL = qojdJx;
        t++;
        p2 = qojdJx;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qojdJx = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &qojdJx->num, qojdJx->name);
    }
    p2->MV4bqL = qojdJx;
    qojdJx->MV4bqL = NULL;
    return (JRgvlwWhf7);
}

int gZ8vlHy = (317 - 317), max = (308 - 308);

void  found (struct   book *p) {
    int i, j;
    int *pi;
    pi = (int *) malloc (sizeof (int) * (423 - 397));
    {
        i = 220 - 220;
        while (i < (785 - 759)) {
            *(pi + i) = (806 - 806);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    p = JRgvlwWhf7;
    {
        i = 617 - 617;
        while (da6FSL3q > i) {
            {
                j = 862 - 862;
                while (!('\0' == p->name[j])) {
                    (*(pi + (p->name[j] - 'A'))) = (*(pi + (p->name[j] - 'A'))) + 1;
                    j = j + 1;
                };
            }
            p = p->MV4bqL;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (j = (390 - 390); j < 26; j = j + 1) {
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
        if (max < *(pi + j)) {
            max = *(pi + j);
            gZ8vlHy = j;
        };
    };
}

int main () {
    struct   book *p;
    found (p);
    int i, j;
    printf ("%c\n%d\n", (gZ8vlHy + 'A'), max);
    scanf ("%d", &da6FSL3q);
    JRgvlwWhf7 = p = oJ0hqMYVS7uc ();
    p = JRgvlwWhf7;
    for (i = (50 - 50); da6FSL3q > i; i = i + 1) {
        {
            j = 601 - 601;
            while (p->name[j] != '\0') {
                if (p->name[j] == gZ8vlHy + 'A') {
                    printf ("%d\n", p->num);
                    break;
                }
                j = j + 1;
            };
        }
        p = p->MV4bqL;
    };
}

