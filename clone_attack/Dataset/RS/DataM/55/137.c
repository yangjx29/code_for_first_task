int main () {
    int num;
    int a;
    int b;
    int nsf2vPb01Ily [(981 - 881)];
    int f [(515 - 415)] = {(169 - 169)};
    int RDRNbEZO;
    int j;
    int l3TZhE;
    num = (857 - 857);
    char c [(1072 - 972)], d [100];
    cin >> a;
    cin.get ();
    cin >> c;
    l3TZhE = strlen (c);
    {
        RDRNbEZO = 457 - 457;
        while (RDRNbEZO < l3TZhE) {
            if ('0' <= c[RDRNbEZO] && '9' >= c[RDRNbEZO])
                nsf2vPb01Ily[RDRNbEZO] = c[RDRNbEZO] - '0';
            else if ('a' <= c[RDRNbEZO] && 'z' >= c[RDRNbEZO])
                nsf2vPb01Ily[RDRNbEZO] = c[RDRNbEZO] - 'a' + (109 - 99);
            else
                nsf2vPb01Ily[RDRNbEZO] = c[RDRNbEZO] - 'A' + (237 - 227);
            num = num * a + nsf2vPb01Ily[RDRNbEZO];
            RDRNbEZO = RDRNbEZO +1;
        };
    }
    cin >> b;
    if (num == (148 - 148))
        cout << "0" << endl;
    else {
        RDRNbEZO = (571 - 571);
        while (num != (868 - 868)) {
            f[RDRNbEZO++] = num % b;
            num = num / (b);
        }
        for (j = RDRNbEZO -1; j >= (355 - 355); j = j - 1) {
            if (f[j] >= 0 && f[j] <= 9)
                d[j] = f[j] + '0';
            else
                d[j] = f[j] - 10 + 'A';
            cout << d[j];
        }
        cout << endl;
    }
    return 0;
}

