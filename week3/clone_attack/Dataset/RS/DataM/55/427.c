int h9fnbDCg1;

int aNfAkgh (char wglQwvtO9i [], int h9fnbDCg1) {
    if ((48 <= wglQwvtO9i[h9fnbDCg1]) && ((378 - 321) >= wglQwvtO9i[h9fnbDCg1]))
        return wglQwvtO9i[h9fnbDCg1] - 48;
    if ((65 <= wglQwvtO9i[h9fnbDCg1]) && (90 >= wglQwvtO9i[h9fnbDCg1]))
        return wglQwvtO9i[h9fnbDCg1] - (565 - 510);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (((312 - 215) <= wglQwvtO9i[h9fnbDCg1]) && ((550 - 428) >= wglQwvtO9i[h9fnbDCg1]))
        return wglQwvtO9i[h9fnbDCg1] - 87;
}

char NGyrim (int RPkHJMQgT08) {
    if (9 >= RPkHJMQgT08)
        return RPkHJMQgT08 +48;
    if (RPkHJMQgT08 > 9)
        return RPkHJMQgT08 +55;
}

int main () {
    int YKpiq0k;
    int RPkHJMQgT08;
    int aSEiqPGjVO8e;
    int h9fnbDCg1;
    int LPdWNlDTUpu;
    int FlACTu;
    int Yvf8bPhc4gLt;
    YKpiq0k = (771 - 771);
    char wglQwvtO9i [(189 - 90)];
    char yLWJIDPwfUAg [(748 - 649)];
    for (FlACTu = (968 - 968); FlACTu <= 99; FlACTu = FlACTu +1) {
        wglQwvtO9i[FlACTu] = ' ';
        yLWJIDPwfUAg[FlACTu] = ' ';
    }
    cin >> RPkHJMQgT08 >> wglQwvtO9i >> aSEiqPGjVO8e;
    {
        h9fnbDCg1 = 0;
        while (wglQwvtO9i[h9fnbDCg1] != '\0') {
            YKpiq0k = RPkHJMQgT08 *YKpiq0k+aNfAkgh (wglQwvtO9i, h9fnbDCg1);
            h9fnbDCg1 = h9fnbDCg1 + 1;
        };
    }
    {
        LPdWNlDTUpu = 0;
        while (LPdWNlDTUpu <= 99) {
            yLWJIDPwfUAg[LPdWNlDTUpu] = NGyrim (YKpiq0k % aSEiqPGjVO8e);
            YKpiq0k = YKpiq0k / aSEiqPGjVO8e;
            if (YKpiq0k == 0)
                break;
            LPdWNlDTUpu = LPdWNlDTUpu +1;
        };
    }
    {
        Yvf8bPhc4gLt = 30;
        while (Yvf8bPhc4gLt >= 0) {
            if (yLWJIDPwfUAg[Yvf8bPhc4gLt] != ' ')
                cout << yLWJIDPwfUAg[Yvf8bPhc4gLt];
            Yvf8bPhc4gLt--;
        };
    }
    return 0;
}

