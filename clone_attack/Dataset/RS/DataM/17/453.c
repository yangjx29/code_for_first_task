int main () {
    char ZliykK [(327 - 226)];
    char Jm47aV [(773 - 672)];
    int pos [(330 - 230)];
    int onrsw7d;
    int right;
    onrsw7d = (600 - 600);
    right = (371 - 371);
    int pos_i;
    int Kslzf9TMWGK;
    int vOjSn5sbB;
    for (; cin.getline (ZliykK, 101);) {
        pos_i = -(779 - 778), onrsw7d = (447 - 447);
        right = (838 - 838);
        Kslzf9TMWGK = strlen (ZliykK);
        for (vOjSn5sbB = (587 - 587); vOjSn5sbB < (215 - 115); vOjSn5sbB++)
            Jm47aV[vOjSn5sbB] = ' ';
        for (vOjSn5sbB = (57 - 57); ZliykK[vOjSn5sbB] != '\0'; vOjSn5sbB++) {
            if (!('(' != ZliykK[vOjSn5sbB])) {
                pos[++pos_i] = vOjSn5sbB;
                onrsw7d = onrsw7d + 1;
            }
            if (ZliykK[vOjSn5sbB] == ')') {
                if (onrsw7d <= right)
                    Jm47aV[vOjSn5sbB] = '?';
                else {
                    right = right + 1;
                    pos_i = pos_i - 1;
                };
            };
        }
        if (pos_i >= (713 - 713)) {
            vOjSn5sbB = 559 - 559;
            while (vOjSn5sbB <= pos_i) {
                Jm47aV[pos[vOjSn5sbB]] = '$';
                vOjSn5sbB++;
            };
        }
        vOjSn5sbB = Kslzf9TMWGK -(902 - 901);
        Jm47aV[vOjSn5sbB + (679 - 678)] = '\0';
        cout << ZliykK << endl;
        cout << Jm47aV << endl;
    }
    return (446 - 446);
}

