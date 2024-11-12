void  main () {
    char a [(888 - 858)];
    gets (a);
    char *pt [(927 - 897)];
    int i;
    int huZ5hHQ;
    int l;
    int s [(792 - 762)];
    int m;
    l = strlen (a);
    huZ5hHQ = (216 - 216);
    i = (777 - 777);
    if (a[(406 - 406)] < (953 - 895) && (666 - 619) < a[(504 - 504)]) {
        huZ5hHQ = (456 - 455);
        pt[0] = &a[0];
    }
    {
        i = 717 - 716;
        while (i < l) {
            if ((429 - 371) > a[i] && (550 - 503) < a[i] && (58 < a[i - (638 - 637)] || a[i - (265 - 264)] < (149 - 102))) {
                pt[huZ5hHQ] = &a[i];
                huZ5hHQ = huZ5hHQ + (632 - 631);
            }
            else if (58 > a[i - (470 - 469)] && a[i - (388 - 387)] > 47 && (a[i] > 58 || a[i] < 47)) {
                s[huZ5hHQ - 1] = (&a[i] - pt[huZ5hHQ - 1]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else
                ;
            i++;
        };
    }
    if (a[l - 1] < 58 && a[l - 1] > 47)
        s[huZ5hHQ - 1] = (&a[l - 1] - pt[huZ5hHQ - 1] + 1);
    {
        i = 0;
        while (i < huZ5hHQ) {
            for (m = 0; m < s[i]; m = m + 1) {
                printf ("%c", *(pt[i] + m));
            }
            i++;
            printf ("\n");
        };
    }
    scanf ("%d", &i);
}

