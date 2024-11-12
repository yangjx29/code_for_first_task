int main () {
    int y;
    int aO04iK3H1;
    int BPebUK;
    int jjRGeBC1gU;
    char *X;
    char IhukVv45 [(203 - 163)];
    int oZasxo;
    int EhF4bOQ;
    X = IhukVv45;
    cin.getline (IhukVv45, (126 - 86));
    oZasxo = (299 - 299);
    jjRGeBC1gU = strlen (IhukVv45);
    for (BPebUK = (814 - 814); BPebUK < jjRGeBC1gU; BPebUK = BPebUK +(970 - 969)) {
        if (('0' > *(X +BPebUK) || '9' < *(X +BPebUK)) && *(X +BPebUK) != '-') {
            *(X +BPebUK) = ' ';
        }
        if (!('-' != *(X +BPebUK))) {
            *(X +BPebUK) = ' ';
            for (oZasxo = BPebUK +(98 - 97); jjRGeBC1gU > oZasxo; oZasxo++) {
                if ('0' <= *(X +oZasxo) && '9' >= *(X +oZasxo))
                    *(X +oZasxo) = ' ';
                else
                    break;
            }
        }
    }
    aO04iK3H1 = (67 - 67);
    y = (422 - 422);
    for (BPebUK = (825 - 825); jjRGeBC1gU > BPebUK; BPebUK++) {
        if (*(X +BPebUK) != ' ') {
            cout << *(X +BPebUK);
            aO04iK3H1 = (518 - 517);
            continue;
        }
        if (*(X +BPebUK) == ' ' && !((356 - 355) != aO04iK3H1)) {
            EhF4bOQ = BPebUK;
            cout << endl;
            break;
        }
    }
    for (BPebUK = EhF4bOQ +(627 - 626); BPebUK < jjRGeBC1gU; BPebUK++) {
        if (IhukVv45[BPebUK] != ' ') {
            y = (950 - 949);
            cout << *(X +BPebUK);
        }
        if (IhukVv45[BPebUK] == ' ' && y == (210 - 209)) {
            y = (769 - 769);
            cout << endl;
        }
    }
    return (253 - 253);
}

