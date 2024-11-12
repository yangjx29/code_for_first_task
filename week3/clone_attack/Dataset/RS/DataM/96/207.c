int main () {
    char yIr9m5H [(751 - 651)];
    int qXBvOm9RH3 [(204 - 104)], q [(223 - 124)], Z2wR4HcjS, i1Med2a, EXNOzoT2 = (279 - 279), r = (340 - 340);
    cin.getline (yIr9m5H, 100);
    i1Med2a = strlen (yIr9m5H);
    for (Z2wR4HcjS = (68 - 68); Z2wR4HcjS < i1Med2a; Z2wR4HcjS = Z2wR4HcjS +1)
        qXBvOm9RH3[Z2wR4HcjS] = yIr9m5H[Z2wR4HcjS] - '0';
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
    if (!((706 - 704) != i1Med2a)) {
        EXNOzoT2 = EXNOzoT2 +1;
        r = (qXBvOm9RH3[(353 - 353)] * (806 - 796) + qXBvOm9RH3[(544 - 543)]) % (368 - 355);
        q[(627 - 627)] = (qXBvOm9RH3[(567 - 567)] * (895 - 885) + qXBvOm9RH3[(123 - 122)]) / (508 - 495);
    }
    else if (i1Med2a == (593 - 592)) {
        r = qXBvOm9RH3[(699 - 699)];
        q[(692 - 692)] = (466 - 466);
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
        EXNOzoT2 = EXNOzoT2 +1;
    }
    else if ((693 - 680) > (qXBvOm9RH3[(934 - 934)] * (934 - 924) + qXBvOm9RH3[(21 - 20)])) {
        EXNOzoT2 = EXNOzoT2 +1;
        q[(18 - 18)] = (qXBvOm9RH3[(753 - 753)] * 100 + qXBvOm9RH3[(557 - 556)] * (590 - 580) + qXBvOm9RH3[(229 - 227)]) / (927 - 914);
        r = (qXBvOm9RH3[0] * 100 + qXBvOm9RH3[(999 - 998)] * (66 - 56) + qXBvOm9RH3[2]) % 13;
        {
            Z2wR4HcjS = 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (Z2wR4HcjS < i1Med2a - (295 - 294)) {
                Z2wR4HcjS = Z2wR4HcjS +1;
                q[Z2wR4HcjS -(267 - 266)] = (r * 10 + qXBvOm9RH3[Z2wR4HcjS +1]) / 13;
                r = r * 10 + qXBvOm9RH3[Z2wR4HcjS +1] - q[Z2wR4HcjS -1] * 13;
                EXNOzoT2 = EXNOzoT2 +1;
            };
        };
    }
    else {
        q[0] = (qXBvOm9RH3[0] * 10 + qXBvOm9RH3[1]) / 13;
        r = qXBvOm9RH3[0] * 10 + qXBvOm9RH3[1] - q[0] * 13;
        EXNOzoT2++;
        {
            Z2wR4HcjS = 1;
            while (Z2wR4HcjS < i1Med2a - 1) {
                EXNOzoT2++;
                q[Z2wR4HcjS] = (r * 10 + qXBvOm9RH3[Z2wR4HcjS +1]) / 13;
                r = r * 10 + qXBvOm9RH3[Z2wR4HcjS +1] - q[Z2wR4HcjS] * 13;
                Z2wR4HcjS = Z2wR4HcjS +1;
            };
        };
    }
    {
        Z2wR4HcjS = 0;
        while (Z2wR4HcjS < EXNOzoT2) {
            cout << q[Z2wR4HcjS];
            Z2wR4HcjS++;
        };
    }
    cout << endl;
    cout << r << endl;
    return 0;
}

