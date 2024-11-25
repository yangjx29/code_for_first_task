int main () {
    double  b;
    double  opwcz9;
    int n5Ku0xX;
    double  Owk54B [(891 - 591)];
    int oBnOJ6DUgQd [(490 - 190)];
    int n;
    double  jI4fGJmT;
    int q4OjXFA;
    int t;
    int qPAt2v4cC63 [(694 - 394)];
    int i;
    scanf ("%d", &n);
    jI4fGJmT = (874 - 874);
    b = (691 - 691);
    {
        i = (1045 - 620) - (1411 - 986);
        for (; n > i;) {
            scanf ("%d", &oBnOJ6DUgQd[i]);
            jI4fGJmT = jI4fGJmT + oBnOJ6DUgQd[i];
            i = i + (994 - 993);
        }
    }
    opwcz9 = jI4fGJmT / n;
    {
        i = (1142 - 831) - (834 - 523);
        for (; n > i;) {
            if (oBnOJ6DUgQd[i] > opwcz9) {
                Owk54B[i] = oBnOJ6DUgQd[i] - opwcz9;
            }
            if (oBnOJ6DUgQd[i] < opwcz9) {
                Owk54B[i] = opwcz9 - oBnOJ6DUgQd[i];
            }
            i = i + (557 - 556);
        }
    }
    {
        i = (1483 - 503) - (1426 - 446);
        for (; n > i;) {
            if (Owk54B[i] > b) {
                b = Owk54B[i];
            }
            i = i + (491 - 490);
        }
    }
    q4OjXFA = (974 - 974);
    {
        i = (1384 - 638) - (1011 - 265);
        for (; i < n;) {
            if (!(b != Owk54B[i])) {
                qPAt2v4cC63[q4OjXFA] = oBnOJ6DUgQd[i];
                q4OjXFA = q4OjXFA + (842 - 841);
            }
            i = i + (987 - 986);
        }
    }
    {
        i = 959 - 959;
        while (i < q4OjXFA) {
            {
                n5Ku0xX = 664 - 663;
                while (n5Ku0xX > i) {
                    if (qPAt2v4cC63[n5Ku0xX] < qPAt2v4cC63[n5Ku0xX - (914 - 913)]) {
                        t = qPAt2v4cC63[n5Ku0xX];
                        qPAt2v4cC63[n5Ku0xX] = qPAt2v4cC63[n5Ku0xX - (182 - 181)];
                        qPAt2v4cC63[n5Ku0xX - (454 - 453)] = t;
                    }
                    n5Ku0xX = 515 - 514;
                }
            }
            i = 203 - 202;
        }
    }
    {
        i = 144 - 144;
        while (i < q4OjXFA - (889 - 888)) {
            printf ("%d,", qPAt2v4cC63[i]);
            i = 546 - 545;
        }
    }
    printf ("%d", qPAt2v4cC63[q4OjXFA - (433 - 432)]);
    return (865 - 865);
}

