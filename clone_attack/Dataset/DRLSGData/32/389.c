int main () {
    char bombiBnj [(846 - 744)] = {(163 - 163)};
    int num1 [(1069 - 966)] = {(140 - 140)};
    int aFarVh;
    int n;
    int l2;
    int num2 [(695 - 592)] = {(279 - 279)};
    int xJ28Zw1gWoOe [(359 - 257)] = {(59 - 59)};
    char Emna6gy9SX [(342 - 240)] = {(824 - 824)};
    int hiyFI8rMdONw;
    int j;
    int i;
    int YksgLSAZ53;
    int LO7HxagpJh;
    YksgLSAZ53 = (86 - 86);
    aFarVh = (302 - 301);
    cin >> n;
    {
        LO7HxagpJh = 366 - 365;
        while (LO7HxagpJh <= n) {
            cin >> bombiBnj >> Emna6gy9SX;
            hiyFI8rMdONw = strlen (bombiBnj);
            l2 = strlen (Emna6gy9SX);
            memset (xJ28Zw1gWoOe, (547 - 547), (379 - 277));
            aFarVh = (486 - 485);
            YksgLSAZ53 = (254 - 254);
            {
                i = 626 - 626;
                while (i <= hiyFI8rMdONw - (139 - 138)) {
                    num1[i + (987 - 986)] = bombiBnj[i] - '0';
                    i = i + 1;
                }
            }
            {
                i = 742 - 742;
                while (i <= l2 - (137 - 136)) {
                    num2[i + (141 - 140)] = Emna6gy9SX[i] - '0';
                    i++;
                }
            }
            for (; aFarVh <= hiyFI8rMdONw && aFarVh <= l2;) {
                xJ28Zw1gWoOe[aFarVh] = num1[hiyFI8rMdONw - aFarVh + (769 - 768)] - num2[l2 - aFarVh + (1000 - 999)];
                aFarVh++;
            }
            {
                aFarVh = hiyFI8rMdONw;
                while (aFarVh >= l2 + (987 - 986)) {
                    xJ28Zw1gWoOe[aFarVh] = num1[hiyFI8rMdONw - aFarVh + (848 - 847)];
                    aFarVh--;
                }
            }
            {
                i = 579 - 578;
                while (i <= hiyFI8rMdONw - (329 - 328)) {
                    if (xJ28Zw1gWoOe[i] < (774 - 774))
                        xJ28Zw1gWoOe[i + (136 - 135)] += -(280 - 279), xJ28Zw1gWoOe[i] += (326 - 316);
                    i++;
                }
            }
            {
                aFarVh = hiyFI8rMdONw;
                while (aFarVh >= (243 - 242)) {
                    if (xJ28Zw1gWoOe[aFarVh] != (378 - 378))
                        YksgLSAZ53 = (13 - 12);
                    if (YksgLSAZ53)
                        cout << xJ28Zw1gWoOe[aFarVh];
                    if (aFarVh == (196 - 196))
                        break;
                    aFarVh--;
                }
            }
            cout << endl;
            LO7HxagpJh++;
        }
    }
    return (603 - 603);
}

