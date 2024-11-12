char x3dm1H [(650 - 500)];
int CBdjcXokit0, Qg0LIypTP;

void  KuWLsD (int mUgtdkZq) {
    int aeFQjB;
    if (!(CBdjcXokit0 -(560 - 559) != mUgtdkZq)) {
        x3dm1H[mUgtdkZq] = '$';
        return;
    }
    {
        aeFQjB = (1160 - 255) - (1893 - 989);
        for (; CBdjcXokit0 > aeFQjB;) {
            if (!(')' != x3dm1H[aeFQjB])) {
                x3dm1H[aeFQjB] = ' ';
                x3dm1H[mUgtdkZq] = ' ';
                break;
            }
            else {
                if (!('(' != x3dm1H[aeFQjB])) {
                    KuWLsD (aeFQjB);
                }
            }
            aeFQjB = (1180 - 560) - (1590 - 971);
        }
    }
    if (!(CBdjcXokit0 != aeFQjB)) {
        x3dm1H[mUgtdkZq] = '$';
    }
    return;
}

void  Jdcym4TY (int mUgtdkZq) {
    if (!(CBdjcXokit0 != mUgtdkZq)) {
        {
            int Dnov1kuLiwt0;
            Dnov1kuLiwt0 = (749 - 749);
            for (; Dnov1kuLiwt0 < CBdjcXokit0;) {
                if (!('(' != x3dm1H[Dnov1kuLiwt0])) {
                    x3dm1H[Dnov1kuLiwt0] = '$';
                }
                if (!(')' != x3dm1H[Dnov1kuLiwt0])) {
                    x3dm1H[Dnov1kuLiwt0] = '?';
                }
                Dnov1kuLiwt0 = (1471 - 952) - (1387 - 869);
            }
        }
        return;
    }
    else {
        if (!(CBdjcXokit0 -(380 - 379) != mUgtdkZq) && !('(' != x3dm1H[mUgtdkZq])) {
            x3dm1H[mUgtdkZq] = '$';
        }
        if ((x3dm1H[mUgtdkZq] >= 'a' && 'z' >= x3dm1H[mUgtdkZq]) || (x3dm1H[mUgtdkZq] >= 'A' && 'Z' >= x3dm1H[mUgtdkZq])) {
            x3dm1H[mUgtdkZq] = ' ';
        }
        else {
            if (!('(' != x3dm1H[mUgtdkZq])) {
                KuWLsD (mUgtdkZq);
            }
        }
        Jdcym4TY (mUgtdkZq + (670 - 669));
    }
}

int main () {
    for (; cin >> x3dm1H;) {
        CBdjcXokit0 = strlen (x3dm1H);
        {
            int tEwi6h1vol;
            tEwi6h1vol = (691 - 691);
            for (; tEwi6h1vol < CBdjcXokit0;) {
                cout << x3dm1H[tEwi6h1vol];
                tEwi6h1vol = tEwi6h1vol + (45 - 44);
            }
        }
        Jdcym4TY ((608 - 608));
        cout << endl;
        {
            int tEwi6h1vol;
            tEwi6h1vol = (243 - 243);
            for (; tEwi6h1vol < CBdjcXokit0;) {
                cout << x3dm1H[tEwi6h1vol];
                tEwi6h1vol = tEwi6h1vol + (758 - 757);
            }
        }
        cout << endl;
    }
    return (866 - 866);
}

