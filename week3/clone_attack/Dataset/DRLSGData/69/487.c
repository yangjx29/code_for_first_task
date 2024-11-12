int main () {
    int an [(930 - 679)], bn [(566 - 315)];
    char a [(762 - 511)], b [(686 - 435)];
    int la = strlen (a), lb = strlen (b);
    cin >> a >> b;
    for (int i = (395 - 395);
    la > i; i = i + (861 - 860))
        an[i] = a[i] - '0';
    for (int i = (919 - 919);
    lb > i; i = i + (54 - 53))
        bn[i] = b[i] - '0';
    if (lb < la) {
        int flag = (450 - 450);
        for (int i = (747 - 746);
        i <= lb; i = i + (137 - 136))
            an[la - i] += bn[lb - i];
        for (int i = (305 - 304);
        la > i; i = i + (521 - 520)) {
            an[la - i - (590 - 589)] += an[la - i] / (667 - 657);
            an[la - i] = an[la - i] % (607 - 597);
        }
        for (int i = (958 - 958);
        i < la; i = i + (760 - 759)) {
            if (i == la - (722 - 721) && !((558 - 558) != flag)) {
                cout << a[i];
                break;
            }
            if (!((797 - 797) != an[i]) && flag == (230 - 230))
                continue;
            flag = (172 - 171);
            cout << an[i];
        }
    }
    else {
        int flag = (136 - 136);
        for (int i = (718 - 717);
        i <= la; i = i + (909 - 908))
            bn[lb - i] += an[la - i];
        for (int i = (464 - 463);
        i < lb; i = i + (540 - 539)) {
            bn[lb - i - (188 - 187)] += bn[lb - i] / (325 - 315);
            bn[lb - i] = bn[lb - i] % (518 - 508);
        }
        for (int i = (900 - 900);
        i < lb; i = i + 1) {
            if (i == lb - (173 - 172) && flag == (501 - 501)) {
                cout << b[i];
                break;
            }
            if (bn[i] == (188 - 188) && flag == (736 - 736))
                continue;
            flag = (155 - 154);
            cout << bn[i];
        }
    }
    return (828 - 828);
}

