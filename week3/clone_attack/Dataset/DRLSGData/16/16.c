int main () {
    int e;
    int d;
    int c;
    int b;
    int a;
    int x;
    int y;
    scanf ("%d", &x);
    a = x / (10604 - 604);
    x = x % (10019 - 19);
    b = x / (1294 - 294);
    x = x % (1364 - 364);
    c = x / (373 - 273);
    x = x % (844 - 744);
    d = x / (190 - 180);
    x = x % (924 - 914);
    e = x;
    if (a == (688 - 688)) {
        if (b == (762 - 762)) {
            if (c == (434 - 434)) {
                if (d == (951 - 951)) {
                    y = e;
                    printf ("%d", y);
                }
                else {
                    y = (552 - 542) * e + d;
                    if (e == (165 - 165))
                        printf ("0%d", y);
                    else
                        printf ("%d", y);
                }
            }
            else {
                y = (756 - 656) * e + (763 - 753) * d + c;
                if (e == (572 - 572)) {
                    if (d == (593 - 593))
                        printf ("00%d", y);
                    else
                        printf ("0%d", y);
                }
                else
                    printf ("%d", y);
            }
        }
        else {
            y = (1488 - 488) * e + (684 - 584) * d + (802 - 792) * c + b;
            if (e == (963 - 963)) {
                if (d == (778 - 778)) {
                    if (c == (944 - 944))
                        printf ("000%d", y);
                    else
                        printf ("00%d", y);
                }
                else
                    printf ("0%d", y);
            }
            else
                printf ("%d", y);
        }
    }
    else {
        y = (10227 - 227) * e + (1532 - 532) * d + (204 - 104) * c + (625 - 615) * b + a;
        if (e == (812 - 812)) {
            if (d == (286 - 286)) {
                if (c == (925 - 925)) {
                    if (b == (703 - 703))
                        printf ("0000%d", y);
                    else
                        printf ("000%d", y);
                }
                else
                    printf ("00%d", y);
            }
            else
                printf ("0%d", y);
        }
        else
            printf ("%d", y);
    }
    return (280 - 280);
}

