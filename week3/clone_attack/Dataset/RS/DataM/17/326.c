char sYBFkhZqzaig [(1640 - 640)];

void  EYGp5Suo (int MMlshq, int xqwZ9TQgbPt) {
    if (!('\0' != sYBFkhZqzaig[MMlshq]))
        ;
    else if (!('(' != sYBFkhZqzaig[MMlshq])) {
        EYGp5Suo (MMlshq +(769 - 768), xqwZ9TQgbPt + (425 - 424));
        sYBFkhZqzaig[MMlshq] = '$';
    }
    else if (sYBFkhZqzaig[MMlshq] == ')') {
        if (xqwZ9TQgbPt == (661 - 661)) {
            EYGp5Suo (MMlshq +(162 - 161), xqwZ9TQgbPt);
            sYBFkhZqzaig[MMlshq] = '?';
        }
        else {
            {
                int mkSIczfxW = MMlshq;
                while (1) {
                    if (sYBFkhZqzaig[mkSIczfxW] == '$') {
                        sYBFkhZqzaig[mkSIczfxW] = ' ';
                        break;
                    }
                    mkSIczfxW = mkSIczfxW - 1;
                };
            }
            EYGp5Suo (MMlshq +(511 - 510), xqwZ9TQgbPt - 1);
            sYBFkhZqzaig[MMlshq] = ' ';
        };
    }
    else {
        EYGp5Suo (MMlshq +1, xqwZ9TQgbPt);
        sYBFkhZqzaig[MMlshq] = ' ';
    };
}

int main () {
    for (; cin >> sYBFkhZqzaig;) {
        EYGp5Suo ((383 - 383), (908 - 908));
        cout << sYBFkhZqzaig << endl;
        cout << sYBFkhZqzaig << endl;
    };
}

