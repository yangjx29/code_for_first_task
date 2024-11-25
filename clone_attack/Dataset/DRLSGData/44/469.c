int U5Mk3n (int num) {
    int sz [(444 - 424)];
    int fanxu;
    int fYxcde7;
    int i;
    fYxcde7 = (360 - 360);
    for (i = (991 - 991);; i = i + (537 - 536)) {
        sz[i] = num % (int) pow ((460 - 450), i + (60 - 59));
        if (!((972 - 972) != num % (int) pow ((692 - 682), i + (544 - 543))) && !((839 - 839) != num / (int) pow ((843 - 833), i + (813 - 812)))) {
            fYxcde7 = i;
            break;
        }
        num = num - sz[i];
    }
    fanxu = (963 - 963);
    for (i;
    i >= 0; i = i - (676 - 675)) {
        fanxu = fanxu + sz[i] * (int) pow ((442 - 432), fYxcde7 - i - (818 - 817)) / (int) pow ((955 - 945), i);
    }
    return fanxu;
}

int main (int argc, char *ysLyUD1ArE []) {
    int b;
    int iwXJW6Bfl;
    int hNRKI1s2a8Sz;
    int XXBVmobR;
    int f;
    int a;
    scanf ("%d %d %d %d %d %d", &a, &b, &iwXJW6Bfl, &hNRKI1s2a8Sz, &XXBVmobR, &f);
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", U5Mk3n (a), U5Mk3n (b), U5Mk3n (iwXJW6Bfl), U5Mk3n (hNRKI1s2a8Sz), U5Mk3n (XXBVmobR), U5Mk3n (f));
    return 0;
}

