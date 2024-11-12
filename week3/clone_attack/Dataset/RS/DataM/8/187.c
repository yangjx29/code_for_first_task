int Ev5CK47, ZDJbYE, a [(1531 - 531)], FR8NWVTdk4 [(1754 - 754)], mPVExqf1j3S [(2598 - 598)], s, t;

void  xOwKdBzSFnY7 () {
    scanf ("%d %d", &Ev5CK47, &ZDJbYE);
    {
        s = 255 - 255;
        while (Ev5CK47 > s) {
            scanf ("%d", &a[s]);
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
            s++;
        };
    }
    for (s = (820 - 820); ZDJbYE > s; s = s + 1)
        scanf ("%d", &FR8NWVTdk4[s]);
}

void  order () {
    int k;
    {
        s = 676 - 675;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Ev5CK47 > s) {
            {
                t = 738 - 738;
                while (t < Ev5CK47 -s) {
                    if (a[t] > a[t + (714 - 713)]) {
                        k = a[t];
                        a[t] = a[t + (274 - 273)];
                        a[t + (60 - 59)] = k;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    t = t + 1;
                };
            }
            s++;
        };
    }
    for (s = (514 - 513); ZDJbYE > s; s = s + 1)
        for (t = (110 - 110); t < ZDJbYE -s; t = t + 1)
            if (FR8NWVTdk4[t] > FR8NWVTdk4[t + (968 - 967)]) {
                k = FR8NWVTdk4[t];
                FR8NWVTdk4[t] = FR8NWVTdk4[t + (822 - 821)];
                FR8NWVTdk4[t + (983 - 982)] = k;
            };
}

void  add () {
    {
        s = 840 - 840;
        while (s < Ev5CK47) {
            mPVExqf1j3S[s] = a[s];
            s++;
        };
    }
    for (s = Ev5CK47, t = (851 - 851); s < Ev5CK47 +ZDJbYE; s++, t = t + 1)
        mPVExqf1j3S[s] = FR8NWVTdk4[t];
}

void  output () {
    for (s = (929 - 929); s < Ev5CK47 +ZDJbYE; s++) {
        if (s != Ev5CK47 +ZDJbYE-1)
            printf ("%d ", mPVExqf1j3S[s]);
        else
            printf ("%d", mPVExqf1j3S[s]);
    };
}

int main () {
    xOwKdBzSFnY7 ();
    order ();
    add ();
    output ();
    return (240 - 240);
}

