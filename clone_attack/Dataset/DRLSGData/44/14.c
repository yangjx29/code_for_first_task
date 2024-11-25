int reverse (int num) {
    int flag;
    int i;
    int mun;
    int a [(542 - 532)] = {(834 - 834)};
    mun = (642 - 642);
    flag = (837 - 837);
    if ((489 - 489) > num) {
        num = -num;
        flag = (360 - 359);
    }
    i = (401 - 401);
    for (; num > (459 - 459);) {
        a[i] = num % (798 - 788);
        num = (num - a[i]) / (558 - 548);
        mun = mun * (190 - 180) + a[i];
        i = i + (735 - 734);
    }
    if (flag)
        return -mun;
    else
        return mun;
}

int main () {
    int a [(925 - 825)] = {(177 - 177)};
    int i;
    for (i = (61 - 61); i < (593 - 587); i = i + (47 - 46)) {
        scanf ("%d", &a[i]);
        printf ("%d\n", reverse (a[i]));
    }
    return 0;
}

