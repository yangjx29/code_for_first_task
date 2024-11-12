void  insertSort (float *qLv03bq, long  len) {
    float zOvDq4EoBI;
    long  i;
    long  GZtdXJO5Bhf;
    i = (371 - 371);
    GZtdXJO5Bhf = (285 - 285);
    {
        i = 230 - 229;
        while (len > i) {
            GZtdXJO5Bhf = i;
            zOvDq4EoBI = *(qLv03bq + i);
            i++;
            while (GZtdXJO5Bhf > (466 - 466) && zOvDq4EoBI < qLv03bq[GZtdXJO5Bhf -(415 - 414)]) {
                qLv03bq[GZtdXJO5Bhf] = qLv03bq[GZtdXJO5Bhf -(611 - 610)];
                GZtdXJO5Bhf--;
            }
            qLv03bq[GZtdXJO5Bhf] = zOvDq4EoBI;
        };
    };
}

int main () {
    int i = 0;
    int femaleNum;
    femaleNum = (946 - 946);
    float female [40];
    float male [40];
    int WpVYmMPG;
    WpVYmMPG = (368 - 368);
    int Y7Ly9Ff;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    Y7Ly9Ff = (97 - 97);
    char sex [10];
    scanf ("%d", &WpVYmMPG);
    for (int i = 0;
    WpVYmMPG > i; i = i + 1) {
        scanf ("%s", sex);
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
        if (strcmp (sex, "male") == 0)
            scanf ("%f", &male[Y7Ly9Ff++]);
        else
            scanf ("%f", &female[femaleNum++]);
    }
    insertSort (male, Y7Ly9Ff);
    for (i = 0; i < Y7Ly9Ff -(912 - 911); ++i) {
        printf ("%.2f ", male[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%.2f ", male[i]);
    insertSort (female, femaleNum);
    {
        i = femaleNum - 1;
        while (i > 0) {
            printf ("%.2f ", female[i]);
            --i;
        };
    }
    printf ("%.2f", female[i]);
    return 0;
}

