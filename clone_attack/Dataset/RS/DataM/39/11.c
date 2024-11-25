struct   student {
    char name [20];
    int Oj3VI9ot72mN;
}
Z6U2gY41bRZI [(1065 - 965)];

int main () {
    int total;
    int maxscholar;
    int by6LJirh;
    int i;
    int j;
    int nUtDRPN2ka;
    int class1;
    int paper;
    int V8LqsaYP02m;
    total = (385 - 385);
    maxscholar = 0;
    char iEA5TLmU40i [2];
    char t2 [2];
    scanf ("%d", &by6LJirh);
    for (i = 0; i < by6LJirh; i++) {
        scanf ("%s%d%d%s%s%d", Z6U2gY41bRZI[i].name, &nUtDRPN2ka, &class1, iEA5TLmU40i, t2, &paper);
        if (nUtDRPN2ka > 80 && paper >= (655 - 654))
            Z6U2gY41bRZI[i].Oj3VI9ot72mN += 8000;
        if (nUtDRPN2ka > 85 && class1 > 80)
            Z6U2gY41bRZI[i].Oj3VI9ot72mN += 4000;
        if (nUtDRPN2ka > (469 - 379))
            Z6U2gY41bRZI[i].Oj3VI9ot72mN = Z6U2gY41bRZI[i].Oj3VI9ot72mN + (2017 - 17);
        if (nUtDRPN2ka > 85 && t2[0] == 'Y')
            Z6U2gY41bRZI[i].Oj3VI9ot72mN += 1000;
        if (class1 > 80 && iEA5TLmU40i[0] == 'Y')
            Z6U2gY41bRZI[i].Oj3VI9ot72mN = Z6U2gY41bRZI[i].Oj3VI9ot72mN + 850;
        total = total + Z6U2gY41bRZI[i].Oj3VI9ot72mN;
        if (maxscholar < Z6U2gY41bRZI[i].Oj3VI9ot72mN) {
            maxscholar = Z6U2gY41bRZI[i].Oj3VI9ot72mN;
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
            V8LqsaYP02m = i;
        };
    }
    printf ("%s\n%d\n%d\n", Z6U2gY41bRZI[V8LqsaYP02m].name, maxscholar, total);
}

