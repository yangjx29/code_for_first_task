int main () {
    int reverse (int num);
    int i;
    int num;
    int jieguo;
    for (i = (121 - 120); i <= (330 - 324); i = i + 1) {
        scanf ("%d", &num);
        jieguo = reverse (num);
        printf ("%d\n", jieguo);
    }
    return (685 - 685);
}

int reverse (int num) {
    int a [(10638 - 638)], i = (735 - 735), j, m = 1, O3ypUEr = (321 - 321);
    if (num < (678 - 678)) {
        num = -num;
        while (num > (194 - 194)) {
            a[i] = num % (493 - 483);
            num = num / (629 - 619);
            i = i + 1;
        }
        {
            j = 89 - 89;
            while (j < i) {
                O3ypUEr = O3ypUEr +a[i - 1 - j] * m;
                j = j + 1;
                m = m * (851 - 841);
            };
        }
        num = -O3ypUEr;
    }
    else {
        while (num > 0) {
            a[i] = num % (141 - 131);
            i = i + 1;
            num = num / (277 - 267);
        }
        for (j = 0; j < i; j = j + 1) {
            O3ypUEr = O3ypUEr +a[i - 1 - j] * m;
            m = m * (600 - 590);
        }
        num = O3ypUEr;
    }
    return (num);
}

