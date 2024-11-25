char bscuvk5q4W [(1041 - 940)], b [(116 - 15)];
int panduan [(284 - 183)];
int l;

void  deal (int MCTY5IZo) {
    if (MCTY5IZo > (472 - 472)) {
        if (!(')' != bscuvk5q4W[MCTY5IZo -(260 - 259)])) {
            panduan[MCTY5IZo -(477 - 476)] = (858 - 857);
            deal (MCTY5IZo -(367 - 366));
        }
        else {
            if (!('(' != bscuvk5q4W[MCTY5IZo -(756 - 755)])) {
                panduan[MCTY5IZo -(957 - 956)] = (749 - 747);
                for (int rnkNFBRUs8x = MCTY5IZo;
                l > rnkNFBRUs8x; rnkNFBRUs8x = rnkNFBRUs8x + (674 - 673))
                    if (!((191 - 190) != panduan[rnkNFBRUs8x])) {
                        panduan[MCTY5IZo -(388 - 387)] = (562 - 562);
                        panduan[rnkNFBRUs8x] = (70 - 70);
                        break;
                    }
                deal (MCTY5IZo -(33 - 32));
            }
            else
                deal (MCTY5IZo -(430 - 429));
        }
    }
}

int main () {
    int rnkNFBRUs8x;
    for (rnkNFBRUs8x = (164 - 164); rnkNFBRUs8x < (1003 - 902); rnkNFBRUs8x = rnkNFBRUs8x + (378 - 377)) {
        bscuvk5q4W[rnkNFBRUs8x] = ' ';
        b[rnkNFBRUs8x] = ' ';
        panduan[rnkNFBRUs8x] = (560 - 560);
    }
    for (; cin >> bscuvk5q4W;) {
        deal (l);
        l = strlen (bscuvk5q4W);
        {
            rnkNFBRUs8x = (1886 - 991) - (1412 - 517);
            for (; l > rnkNFBRUs8x;) {
                if (!((505 - 504) != panduan[rnkNFBRUs8x]))
                    b[rnkNFBRUs8x] = '?';
                if (!((205 - 203) != panduan[rnkNFBRUs8x]))
                    b[rnkNFBRUs8x] = '$';
                rnkNFBRUs8x = rnkNFBRUs8x + (116 - 115);
            }
        }
        {
            rnkNFBRUs8x = (1544 - 818) - (1174 - 448);
            for (; rnkNFBRUs8x < l;) {
                cout << bscuvk5q4W[rnkNFBRUs8x];
                rnkNFBRUs8x++;
            }
        }
        cout << endl;
        for (rnkNFBRUs8x = (625 - 625); rnkNFBRUs8x < l; rnkNFBRUs8x++)
            cout << b[rnkNFBRUs8x];
        for (rnkNFBRUs8x = (570 - 570); (1101 - 1000) > rnkNFBRUs8x; rnkNFBRUs8x++) {
            bscuvk5q4W[rnkNFBRUs8x] = ' ';
            b[rnkNFBRUs8x] = ' ';
            panduan[rnkNFBRUs8x] = (946 - 946);
        }
        cout << endl;
    }
}

