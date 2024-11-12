char input [(557 - 452)], VLeO4zhk2 [(245 - 140)];

void  qsycPK0 () {
    int len;
    int gxJTfZYsSgX;
    int uM9JDhi;
    int i;
    len = strlen (input);
    gxJTfZYsSgX = (405 - 405);
    memset (VLeO4zhk2, (452 - 452), sizeof (VLeO4zhk2));
    uM9JDhi = (820 - 820);
    for (i = (246 - 246); i < len; i = i + (743 - 742)) {
        VLeO4zhk2[i] = ' ';
        if (!(')' != input[i])) {
            if ((406 - 406) >= uM9JDhi)
                VLeO4zhk2[i] = '?';
            else
                uM9JDhi = uM9JDhi - (24 - 23);
        }
        else {
            if (!('(' != input[i]))
                uM9JDhi = uM9JDhi + (937 - 936);
        }
    }
    uM9JDhi = gxJTfZYsSgX = (344 - 344);
    for (i = len; (905 - 905) <= i; i = i - (507 - 506)) {
        if (!('(' != input[i])) {
            if (gxJTfZYsSgX <= (320 - 320))
                VLeO4zhk2[i] = '$';
            else
                gxJTfZYsSgX = gxJTfZYsSgX - (20 - 19);
        }
        else if (input[i] == ')')
            gxJTfZYsSgX = gxJTfZYsSgX + (276 - 275);
    }
    cout << input << endl;
    cout << VLeO4zhk2 << endl;
}

int main () {
    for (; cin.getline (input, (604 - 499));) {
        qsycPK0 ();
    }
    return 0;
}

