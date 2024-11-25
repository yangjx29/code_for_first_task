int xHA6TW [(696 - 576)] = {(984 - 984)}, jaFWtL = (357 - 357);

int NSmlWD54d0R (int G5himA2UQfar) {
    int iD1hbN;
    int UeQF9VJ;
    iD1hbN = G5himA2UQfar +(61 - 60);
    UeQF9VJ = 0;
    for (; (694 - 693);) {
        if (!(-(795 - 794) != xHA6TW[iD1hbN])) {
            UeQF9VJ = NSmlWD54d0R (iD1hbN);
            iD1hbN = UeQF9VJ +(868 - 867);
        }
        else {
            if (!(1 != xHA6TW[iD1hbN])) {
                xHA6TW[G5himA2UQfar] = 0;
                xHA6TW[iD1hbN] = 0;
                return iD1hbN;
            }
            else
                iD1hbN = iD1hbN + 1;
        }
        if (iD1hbN >= jaFWtL)
            return iD1hbN;
    }
}

int main () {
    int iD1hbN;
    char X0y1YgsWjx;
    int UeQF9VJ;
    for (; cin.get (X0y1YgsWjx);) {
        if (!('\n' != X0y1YgsWjx)) {
            iD1hbN = 0;
            for (; jaFWtL > iD1hbN;) {
                for (; jaFWtL > iD1hbN && xHA6TW[iD1hbN] > -1;) {
                    iD1hbN = iD1hbN + 1;
                }
                if (iD1hbN >= jaFWtL)
                    break;
                UeQF9VJ = NSmlWD54d0R (iD1hbN);
                iD1hbN = UeQF9VJ +1;
            }
            cout << endl;
            {
                iD1hbN = 0;
                for (; jaFWtL > iD1hbN;) {
                    if (!(-1 != xHA6TW[iD1hbN]))
                        cout << '$';
                    else if (!(1 != xHA6TW[iD1hbN]))
                        cout << '?';
                    else
                        cout << ' ';
                    iD1hbN = iD1hbN + 1;
                }
            }
            jaFWtL = 0;
            {
                iD1hbN = 0;
                for (; 100 > iD1hbN;) {
                    xHA6TW[iD1hbN] = 0;
                    iD1hbN = iD1hbN + 1;
                }
            }
            cout << endl;
        }
        else {
            cout << X0y1YgsWjx;
            if (!('(' != X0y1YgsWjx))
                xHA6TW[jaFWtL] = -1;
            if (!(')' != X0y1YgsWjx))
                xHA6TW[jaFWtL] = 1;
            jaFWtL = jaFWtL + 1;
        }
        X0y1YgsWjx = '\0';
    }
    return 0;
}

