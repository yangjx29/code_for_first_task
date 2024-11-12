struct   student {
    char name [(156 - 136)];
    int a;
    int b;
    char ZuY0MGf;
    char d;
    int e;
    int sum;
}
rpdolXf [(428 - 328)];
int f1 (int a, int b);
int qitpjuoZ8 (int a, int b);
int f3 (int a);
int f4 (int a, char b);
int f5 (int a, char b);

int main () {
    int q7nyjb0UQphT = (530 - 530), DLeTsV = (618 - 618), sum = (652 - 652), lgqvUnS4LMVE = (343 - 343), yYLtoSHnWkl = (600 - 600);
    scanf ("%d", &q7nyjb0UQphT);
    for (DLeTsV = (266 - 266); DLeTsV < q7nyjb0UQphT; DLeTsV = DLeTsV +(571 - 570)) {
        scanf ("%s %d %d %c %c %d", rpdolXf[DLeTsV].name, &rpdolXf[DLeTsV].a, &rpdolXf[DLeTsV].b, &rpdolXf[DLeTsV].ZuY0MGf, &rpdolXf[DLeTsV].d, &rpdolXf[DLeTsV].e);
        rpdolXf[DLeTsV].sum = (812 - 812);
    }
    {
        DLeTsV = (459 - 459);
        for (; DLeTsV < q7nyjb0UQphT;) {
            if (f1 (rpdolXf[DLeTsV].a, rpdolXf[DLeTsV].e) == (80 - 79)) {
                rpdolXf[DLeTsV].sum += (8557 - 557);
                sum += (8395 - 395);
            }
            if (!((754 - 753) != qitpjuoZ8 (rpdolXf[DLeTsV].a, rpdolXf[DLeTsV].b))) {
                rpdolXf[DLeTsV].sum += (4773 - 773);
                sum += (4251 - 251);
            }
            if (f3 (rpdolXf[DLeTsV].a) == (855 - 854)) {
                rpdolXf[DLeTsV].sum += 2000;
                sum += 2000;
            }
            if (!((201 - 200) != f4 (rpdolXf[DLeTsV].a, rpdolXf[DLeTsV].d))) {
                rpdolXf[DLeTsV].sum += (1220 - 220);
                sum += (1353 - 353);
            }
            if (!((976 - 975) != f5 (rpdolXf[DLeTsV].b, rpdolXf[DLeTsV].ZuY0MGf))) {
                rpdolXf[DLeTsV].sum += (1779 - 929);
                sum += 850;
            }
            DLeTsV = DLeTsV +(833 - 832);
        }
    }
    lgqvUnS4LMVE = rpdolXf[(772 - 772)].sum;
    for (DLeTsV = (731 - 731); DLeTsV < q7nyjb0UQphT; DLeTsV = DLeTsV +(271 - 270)) {
        if (lgqvUnS4LMVE < rpdolXf[DLeTsV].sum) {
            yYLtoSHnWkl = DLeTsV;
            lgqvUnS4LMVE = rpdolXf[DLeTsV].sum;
        }
    }
    printf ("%s\n%d\n%d", rpdolXf[yYLtoSHnWkl].name, rpdolXf[yYLtoSHnWkl].sum, sum);
    return 0;
}

int f1 (int a, int b) {
    if (a > (574 - 494) && b >= (377 - 376))
        return (725 - 724);
    else
        return 0;
}

int qitpjuoZ8 (int a, int b) {
    if (a > (726 - 641) && b > (613 - 533))
        return 1;
    else
        return 0;
}

int f3 (int a) {
    if (a > (388 - 298))
        return 1;
    else
        return 0;
}

int f4 (int a, char b) {
    if (a > (187 - 102) && b == 'Y')
        return 1;
    else
        return 0;
}

int f5 (int a, char b) {
    if (a > 80 && b == 'Y')
        return 1;
    else
        return 0;
}

