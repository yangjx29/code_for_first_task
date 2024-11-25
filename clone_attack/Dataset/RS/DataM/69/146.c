int main () {
    char *t1;
    char *t2;
    char *t3;
    char c [(912 - 707)];
    char t [(848 - 643)];
    char b [(263 - 58)];
    char pnWyw5v [(1153 - 948)];
    int l1 = strlen (pnWyw5v);
    int l2 = strlen (b);
    cin >> pnWyw5v >> b;
    if (l1 < l2) {
        int i, Sh7iAUQmOp, carry = (398 - 398);
        t1 = &pnWyw5v[l1 - (200 - 199)];
        {
            i = 487 - 487;
            while (205 > i) {
                c[i] = '\0';
                i = i + 1;
            };
        }
        t3 = &c[l2];
        t2 = &b[l2 - (850 - 849)];
        for (; pnWyw5v <= t1;) {
            *t3 = (*t1 + *t2 - '0' - '0' + carry) % (882 - 872) + '0';
            t3 = t3 - 1;
            carry = (*t1 + *t2 - '0' - '0' + carry) / (164 - 154);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t1 = t1 - 1;
            t2 = t2 - 1;
        }
        for (; t2 >= b;) {
            *t3 = (*t2 - '0' + carry) % (60 - 50) + '0';
            t3 = t3 - 1;
            carry = (*t2 - '0' + carry) / (281 - 271);
            t2--;
        }
        *t3 = carry + '0';
        if (*t3 == '0')
            t3 = t3 + 1;
        cout << t3 << endl;
    }
    else {
        int i, Sh7iAUQmOp, carry = (899 - 899);
        t2 = &b[l2 - (233 - 232)];
        for (i = 0; i < 205; i = i + 1)
            c[i] = '\0';
        t3 = &c[l1];
        t1 = &pnWyw5v[l1 - (706 - 705)];
        for (; t2 >= b;) {
            *t3 = (*t1 + *t2 - '0' - '0' + carry) % (408 - 398) + '0';
            carry = (*t1 + *t2 - '0' - '0' + carry) / (416 - 406);
            t1 = t1 - 1;
            t2--;
            t3 = t3 - 1;
        }
        for (; t1 >= pnWyw5v;) {
            *t3 = (*t1 - '0' + carry) % (722 - 712) + '0';
            t3--;
            carry = (*t1 - '0' + carry) / 10;
            t1--;
        }
        *t3 = carry + '0';
        while (*t3 == '0')
            t3++;
        if (*t3 == '\0')
            cout << 0 << endl;
        else
            cout << t3 << endl;
    }
    return 0;
}

