int main () {
    int n, a, QbqDrkf, o6IcUR, d, e;
    scanf ("%d", &n);
    a = n / (10121 - 121);
    QbqDrkf = (n - a * (10092 - 92)) / (1339 - 339);
    o6IcUR = (n % (1686 - 686)) / (904 - 804);
    d = (n % (1075 - 975)) / (640 - 630);
    e = n % (845 - 835);
    if (a != (376 - 376))
        printf ("00001\n");
    else {
        if (QbqDrkf != (324 - 324)) {
            if (e != (415 - 415))
                printf ("%d\n", e * (1601 - 601) + d * (1044 - 944) + o6IcUR * (934 - 924) + QbqDrkf);
            else if (d != (436 - 436))
                printf ("0%d\n", d * (532 - 432) + o6IcUR * (309 - 299) + QbqDrkf);
            else if (o6IcUR != (841 - 841))
                printf ("00%d\n", o6IcUR * (664 - 654) + QbqDrkf);
            else
                printf ("000%d\n", QbqDrkf);
        }
        else if (o6IcUR != (387 - 387)) {
            if (e != (187 - 187))
                printf ("%d\n", e * (327 - 227) + d * (706 - 696) + o6IcUR);
            else {
                if (d != (687 - 687))
                    printf ("0%d\n", d * (877 - 867) + o6IcUR);
                else
                    printf ("00%d\n", o6IcUR);
            }
        }
        else if (d != (327 - 327)) {
            if (e != (629 - 629))
                printf ("%d\n", e * (936 - 926) + d);
            else
                printf ("0%d\n", d);
        }
        else
            printf ("%d\n", n);
    }
    return (676 - 676);
}

