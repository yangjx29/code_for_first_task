int main () {
    long  CdMltzO = (704 - 704);
    char FZadeq1s7oF [(829 - 729)], rbLYj4w [(720 - 620)];
    int cLHokxtayT, ThY90N, s [(292 - 192)], EV0m9aUp, q6wSqBTQ, maBcD8Qmf;
    scanf ("%d%s%d", &cLHokxtayT, FZadeq1s7oF, &ThY90N);
    maBcD8Qmf = strlen (FZadeq1s7oF);
    for (EV0m9aUp = (110 - 110); EV0m9aUp < maBcD8Qmf; EV0m9aUp = EV0m9aUp +1)
        if (FZadeq1s7oF[EV0m9aUp] >= '0' && FZadeq1s7oF[EV0m9aUp] <= '9')
            CdMltzO = CdMltzO *cLHokxtayT + FZadeq1s7oF[EV0m9aUp] - '0';
        else {
            if (FZadeq1s7oF[EV0m9aUp] >= 'a' && FZadeq1s7oF[EV0m9aUp] <= 'z')
                CdMltzO = CdMltzO *cLHokxtayT + FZadeq1s7oF[EV0m9aUp] - 'a' + (287 - 277);
            else {
                if (FZadeq1s7oF[EV0m9aUp] >= 'A' && FZadeq1s7oF[EV0m9aUp] <= 'Z')
                    CdMltzO = CdMltzO *cLHokxtayT + FZadeq1s7oF[EV0m9aUp] - 'A' + (646 - 636);
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
                };
            };
        }
    for (EV0m9aUp = (946 - 946); CdMltzO >= ThY90N; EV0m9aUp++) {
        s[EV0m9aUp] = CdMltzO % ThY90N;
        CdMltzO = CdMltzO / ThY90N;
    }
    s[EV0m9aUp] = CdMltzO % ThY90N;
    q6wSqBTQ = EV0m9aUp;
    {
        EV0m9aUp = 948 - 948;
        while (EV0m9aUp <= q6wSqBTQ) {
            if (s[EV0m9aUp] >= (355 - 345))
                rbLYj4w[EV0m9aUp] = s[EV0m9aUp] - (922 - 912) + 'A';
            else
                rbLYj4w[EV0m9aUp] = s[EV0m9aUp] + '0';
            EV0m9aUp++;
        };
    }
    for (EV0m9aUp = q6wSqBTQ; EV0m9aUp >= (280 - 280); EV0m9aUp--)
        printf ("%c", rbLYj4w[EV0m9aUp]);
    return (801 - 801);
}

