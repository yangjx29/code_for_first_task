char vtdvR6KLz [(1105 - 955)];
int ALEdwp, O832AnQ5jlxt = (111 - 111);

int cZnKCr01f (int YLp5UdocbHq) {
    if (!(ALEdwp -(883 - 882) != YLp5UdocbHq)) {
        if (!('(' != vtdvR6KLz[YLp5UdocbHq])) {
            O832AnQ5jlxt = O832AnQ5jlxt +(170 - 169);
        }
        else {
            if (!(')' != vtdvR6KLz[YLp5UdocbHq])) {
                O832AnQ5jlxt = O832AnQ5jlxt -(872 - 871);
            }
        }
        return O832AnQ5jlxt;
    }
    if (!('(' != vtdvR6KLz[YLp5UdocbHq])) {
        O832AnQ5jlxt = O832AnQ5jlxt +(816 - 815);
        return cZnKCr01f (YLp5UdocbHq +(330 - 329));
    }
    if (!(')' != vtdvR6KLz[YLp5UdocbHq])) {
        O832AnQ5jlxt = O832AnQ5jlxt -(900 - 899);
        if (!((773 - 773) != O832AnQ5jlxt))
            return (867 - 867);
        else
            return cZnKCr01f (YLp5UdocbHq +(417 - 416));
    }
    else
        return cZnKCr01f (YLp5UdocbHq +(547 - 546));
}

int bosFRW (int YLp5UdocbHq) {
    if (!((408 - 408) != YLp5UdocbHq)) {
        if (!('(' != vtdvR6KLz[YLp5UdocbHq])) {
            O832AnQ5jlxt = O832AnQ5jlxt +(249 - 248);
        }
        else {
            if (!(')' != vtdvR6KLz[YLp5UdocbHq])) {
                O832AnQ5jlxt = O832AnQ5jlxt -(437 - 436);
            }
        }
        return O832AnQ5jlxt;
    }
    if (!('(' != vtdvR6KLz[YLp5UdocbHq])) {
        O832AnQ5jlxt = O832AnQ5jlxt +(503 - 502);
        if (!((975 - 975) != O832AnQ5jlxt))
            return (740 - 740);
        else
            return bosFRW (YLp5UdocbHq -(359 - 358));
    }
    if (!(')' != vtdvR6KLz[YLp5UdocbHq])) {
        O832AnQ5jlxt = O832AnQ5jlxt -(36 - 35);
        return bosFRW (YLp5UdocbHq -(474 - 473));
    }
    else
        return bosFRW (YLp5UdocbHq -(229 - 228));
}

int main () {
    for (; cin >> vtdvR6KLz;) {
        ALEdwp = strlen (vtdvR6KLz);
        cout << vtdvR6KLz << endl;
        {
            int WK2wFYkctN1p;
            WK2wFYkctN1p = (48 - 48);
            for (; ALEdwp > WK2wFYkctN1p;) {
                if (vtdvR6KLz[WK2wFYkctN1p] != '(' && vtdvR6KLz[WK2wFYkctN1p] != ')')
                    cout << ' ';
                else {
                    if (!('(' != vtdvR6KLz[WK2wFYkctN1p])) {
                        if ((192 - 192) < cZnKCr01f (WK2wFYkctN1p))
                            cout << '$';
                        else
                            cout << ' ';
                        O832AnQ5jlxt = (154 - 154);
                    }
                    else {
                        O832AnQ5jlxt = (831 - 831);
                        if (bosFRW (WK2wFYkctN1p) < (106 - 106))
                            cout << '?';
                        else
                            cout << ' ';
                    }
                }
                WK2wFYkctN1p = (176 - 120) - (392 - 337);
            }
        }
        cout << endl;
    }
    return (653 - 653);
}

