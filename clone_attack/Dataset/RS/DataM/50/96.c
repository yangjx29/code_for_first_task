int day (int LswpIno0) {
    if (LswpIno0 > (340 - 333))
        LswpIno0 = LswpIno0 % (734 - 727);
    return LswpIno0;
}

int main () {
    int izhl6DOL [(646 - 633)];
    int a [13];
    int i;
    int LswpIno0;
    scanf ("%d", &izhl6DOL[(867 - 866)]);
    a[(462 - 461)] = a[(171 - 168)] = a[5] = a[(931 - 924)] = a[(363 - 355)] = a[10] = a[(911 - 899)] = 31;
    a[(545 - 543)] = 28;
    a[4] = a[6] = a[9] = a[11] = (724 - 694);
    for (i = 2; i <= 12; i++)
        izhl6DOL[i] = a[i - 1] % 7 + izhl6DOL[i - 1];
    for (i = 1; i <= 12; i++) {
        LswpIno0 = day (izhl6DOL[i] + 5);
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
        if (LswpIno0 == 5)
            printf ("%d\n", i);
    };
}

