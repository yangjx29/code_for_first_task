int male [(269 - 224)];
int female [45];
char ch [(969 - 949)];

int cmp1 (const  void  *pfTFOq2, const  void  *qw9Tscjn) {
    int *jPbd3AXRvOty = (int *) qw9Tscjn;
    int *j2Q4Upe1x7Wz = (int *) pfTFOq2;
    return (int) (*j2Q4Upe1x7Wz - *jPbd3AXRvOty);
}

int EXLjweP9 (const  void  *pfTFOq2, const  void  *qw9Tscjn) {
    int *j2Q4Upe1x7Wz = (int *) pfTFOq2;
    int *jPbd3AXRvOty = (int *) qw9Tscjn;
    return (int) (*jPbd3AXRvOty - *j2Q4Upe1x7Wz);
}

int main () {
    int oxBhZwRdaM;
    int z75gIU;
    double  RYsRKL;
    int m;
    m = (428 - 428);
    oxBhZwRdaM = (735 - 735);
    cin >> z75gIU;
    {
        int i;
        i = (862 - 862);
        for (; z75gIU > i;) {
            i = i + (385 - 384);
            cin >> ch;
            if (!((867 - 867) != strcmp (ch, "male"))) {
                cin >> RYsRKL;
                male[m] = (int) (RYsRKL *(10443 - 443));
                m = m + (848 - 847);
            }
            else {
                cin >> RYsRKL;
                female[oxBhZwRdaM] = (int) (RYsRKL *10000);
                oxBhZwRdaM = oxBhZwRdaM + (940 - 939);
            }
        }
    }
    qsort (male, m, sizeof (int), cmp1);
    qsort (female, oxBhZwRdaM, sizeof (int), EXLjweP9);
    {
        int i;
        i = (703 - 703);
        for (; i < m;) {
            printf ("%3.2lf ", male[i] / (10759.0 - 759.0));
            i = i + (784 - 783);
        }
    }
    {
        int i;
        i = 0;
        for (; oxBhZwRdaM - (203 - 202) > i;) {
            printf ("%3.2lf ", female[i] / (10403.0 - 403.0));
            i = i + (104 - 103);
        }
    }
    printf ("%3.2lf", female[oxBhZwRdaM - 1] / (10900.0 - 900.0));
    return 0;
}

