int gTwo8tU3KOkl (char *V3rH5una) {
    int i;
    i = 1;
    while (!('\0' == V3rH5una[i])) {
        if (!(')' != V3rH5una[i])) {
            V3rH5una[i] = ' ';
            V3rH5una[0] = ' ';
            return i;
        }
        else if (!('(' != V3rH5una[i])) {
            V3rH5una[i] = '$';
            i = i + gTwo8tU3KOkl (V3rH5una +i);
        }
        else
            V3rH5una[i] = ' ';
        i = i + 1;
    }
    return i - 1;
}

int main () {
    for (; cin.peek () != EOF;) {
        char RTr8Mm7 [(655 - 545)];
        int i;
        i = 0;
        cin.getline (RTr8Mm7, (1046 - 936), '\n');
        cout << RTr8Mm7 << endl;
        for (; RTr8Mm7[i] != '\0';) {
            if (RTr8Mm7[i] == '(') {
                RTr8Mm7[i] = '$';
                i = i + gTwo8tU3KOkl (RTr8Mm7 +i);
            }
            else if (RTr8Mm7[i] == ')')
                RTr8Mm7[i] = '?';
            else
                RTr8Mm7[i] = ' ';
            i++;
        }
        cout << RTr8Mm7 << endl;
    }
    return 0;
}

