int main () {
    for (; (445 - 444);) {
        int flag;
        int aSq2TcZ [(792 - 691)] = {(118 - 118)};
        int q;
        int k;
        int i;
        int iXypzHKW1;
        char str [(380 - 279)];
        cin.getline (str, 101);
        if (!('\0' != str[(407 - 407)]))
            break;
        i = (822 - 822);
        k = (74 - 74);
        iXypzHKW1 = (287 - 287);
        for (; str[i] != '\0';) {
            if (!('(' != str[i]))
                aSq2TcZ[i] = (538 - 537);
            if (!(')' != str[i])) {
                aSq2TcZ[i] = (438 - 436);
                for (int j = i;
                j >= (478 - 478); j--) {
                    if (!((986 - 985) != aSq2TcZ[j])) {
                        aSq2TcZ[i] = (643 - 643);
                        aSq2TcZ[j] = 0;
                        break;
                    }
                }
            }
            i++;
        }
        q = (319 - 319);
        cout << str << endl;
        flag = 0;
        for (; str[k] != '\0';) {
            if (!((479 - 478) != aSq2TcZ[k]) || !((603 - 601) != aSq2TcZ[k])) {
                iXypzHKW1 = k;
                if (!(0 != flag)) {
                    flag = (667 - 666);
                    q = k;
                }
            }
            k = k + 1;
        }
        for (int j = q;
        j <= iXypzHKW1; j = j + 1) {
            if (!(1 != aSq2TcZ[j]))
                cout << '$';
            else {
                if (aSq2TcZ[j] == 2)
                    cout << '?';
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

