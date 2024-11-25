struct   stu {
    char name [20];
    int NN2ZPtH, hURbZMykN;
    char BDzBaEQ8s, PG1wVHyPdWJO;
    int I1UWyQAoCgRk;
    long  WwoTaOK1q3;
}
student [120];

int main () {
    long  jmIsgi, taKpzi;
    char vSaUx0;
    char w;
    int khnw9TNd8Loz, IQnYxZC, ampq0wCruaJ;
    int n, pv5NfnFs, spw2EDx;
    taKpzi = 0;
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
    jmIsgi = 0;
    scanf ("%d", &n);
    for (pv5NfnFs = 1; n >= pv5NfnFs; pv5NfnFs = pv5NfnFs + 1) {
        scanf ("%s %d %d %c %c %d", &student[pv5NfnFs].name, &khnw9TNd8Loz, &IQnYxZC, &vSaUx0, &w, &ampq0wCruaJ);
        student[pv5NfnFs].WwoTaOK1q3 = 0;
        if ((80 < khnw9TNd8Loz) && (0 < ampq0wCruaJ))
            student[pv5NfnFs].WwoTaOK1q3 = student[pv5NfnFs].WwoTaOK1q3 + 8000;
        if ((85 < khnw9TNd8Loz) && (80 < IQnYxZC))
            student[pv5NfnFs].WwoTaOK1q3 = student[pv5NfnFs].WwoTaOK1q3 + 4000;
        if ((khnw9TNd8Loz > 90))
            student[pv5NfnFs].WwoTaOK1q3 = student[pv5NfnFs].WwoTaOK1q3 + 2000;
        if ((khnw9TNd8Loz > 85) && (w == 'Y'))
            student[pv5NfnFs].WwoTaOK1q3 = student[pv5NfnFs].WwoTaOK1q3 + 1000;
        if ((IQnYxZC > 80) && (vSaUx0 == 'Y'))
            student[pv5NfnFs].WwoTaOK1q3 = student[pv5NfnFs].WwoTaOK1q3 + 850;
        if (student[pv5NfnFs].WwoTaOK1q3 > jmIsgi) {
            jmIsgi = student[pv5NfnFs].WwoTaOK1q3;
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
            spw2EDx = pv5NfnFs;
        }
        taKpzi = taKpzi + student[pv5NfnFs].WwoTaOK1q3;
    }
    printf ("%s\n", student[spw2EDx].name);
    printf ("%d\n", jmIsgi);
    printf ("%d\n", taKpzi);
}

