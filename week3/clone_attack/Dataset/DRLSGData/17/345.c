char IPAuH6C4koGl [150];

int JJ75TG (int F2eLRsQOfr, int y) {
    int b;
    if (!('\0' != IPAuH6C4koGl[F2eLRsQOfr]))
        return -1;
    if (!('(' != IPAuH6C4koGl[F2eLRsQOfr])) {
        b = JJ75TG (F2eLRsQOfr +1, y + 1);
        IPAuH6C4koGl[F2eLRsQOfr] = (!(-1 != b)) ? '$' : ' ';
        return (!(-1 != b)) ? -1 : JJ75TG (b + 1, y);
    }
    if (!(')' != IPAuH6C4koGl[F2eLRsQOfr])) {
        IPAuH6C4koGl[F2eLRsQOfr] = (!(0 != y)) ? '?' : ' ';
        return (!(0 != y)) ? JJ75TG (F2eLRsQOfr +1, y) : F2eLRsQOfr;
    }
    else {
        IPAuH6C4koGl[F2eLRsQOfr] = ' ';
        return JJ75TG (F2eLRsQOfr +1, y);
    }
}

int main () {
    int ruHq9aISOb;
    ruHq9aISOb = 1000;
    {
        int i;
        i = 1;
        for (; i < ruHq9aISOb;) {
            cin.getline (IPAuH6C4koGl, 150);
            if (!('\0' != IPAuH6C4koGl[0]))
                break;
            else {
                JJ75TG (0, 0);
                cout << IPAuH6C4koGl << endl;
                cout << IPAuH6C4koGl << endl;
            }
            i = i + 1;
        }
    }
    return 0;
}

