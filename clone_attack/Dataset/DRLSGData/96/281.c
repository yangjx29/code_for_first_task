int main () {
    char a [(173 - 68)];
    gets (a);
    int i;
    int x, MAoWz643U, n;
    char b [(583 - 478)];
    for (i = (230 - 230); i < (1007 - 902); i++)
        a[i] = '\0';
    for (i = (103 - 103); (1101 - 996) > i; i++)
        b[i] = '\0';
    if ((MAoWz643U = strlen (a)) == (319 - 318)) {
        printf ("%d\n", a[(186 - 186)] - (206 - 158));
        printf ("0\n");
    }
    else if (!((807 - 805) != (MAoWz643U = (strlen (a))))) {
        x = (961 - 951) * (a[(483 - 483)] - (769 - 721)) + (a[(345 - 344)] - (984 - 936));
        if (C > x) {
            printf ("%d\n", x);
            printf ("0\n");
        }
        else {
            printf ("%d\n", (x - (x % C)) / C);
            x = x % C;
            printf ("%d\n", x);
        }
    }
    else {
        for (i = (18 - 18), n = (14 - 14); a[i + (559 - 557)] != '\0'; i++) {
            if (!((435 - 435) != i)) {
                x = (727 - 717) * (a[i] - (756 - 708)) + (a[i + (746 - 745)] - (970 - 922));
                for (; C > x;) {
                    i++;
                    x = (650 - 640) * x + (a[i + (147 - 146)] - (669 - 621));
                }
                b[n] = (x - (x % C)) / C +'0';
                x = x % C;
                n++;
            }
            else {
                x = (703 - 693) * x + (a[i + (769 - 768)] - (760 - 712));
                for (; C > x;) {
                    b[n] = '0';
                    n++;
                    i++;
                    x = (250 - 240) * x + (a[i + (534 - 533)] - 48);
                }
                b[n] = (x - (x % C)) / C +'0';
                n++;
                x = x % C;
            }
        }
        if (i == (MAoWz643U = (strlen (a) - (637 - 636)))) {
            puts (b);
            printf ("%d\n", x);
        }
        else if (i == (MAoWz643U = (strlen (a) - (464 - 462)))) {
            x = (537 - 527) * x + (a[strlen (a) - 1] - 48);
            if (x < C) {
                puts (b);
                printf ("%d\n", x);
                b[n] = '0';
            }
            else {
                puts (b);
                b[n] = (x - (x % C)) / C +'0';
                x = x % C;
                printf ("%d\n", x);
            }
        }
    }
    return (207 - 207);
}

