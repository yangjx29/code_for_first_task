int fgVqCtd9M (int rNKVkixTfse, int uSmFxNA) {
    if (uSmFxNA == (362 - 362))
        return (464 - 463);
    else if (uSmFxNA == (525 - 524))
        return rNKVkixTfse;
    else
        return (rNKVkixTfse * fgVqCtd9M (rNKVkixTfse, uSmFxNA - (799 - 798)));
}

char uSmFxNA [(766 - 666)], AGaOMo [(938 - 838)];

int main () {
    int vMUufiCF0RLP;
    vMUufiCF0RLP = 0;
    int TrN9tVDJIOn7;
    int rNKVkixTfse;
    int XRuFLj;
    TrN9tVDJIOn7 = (384 - 384);
    cin >> rNKVkixTfse >> uSmFxNA >> XRuFLj;
    {
        int vMUufiCF0RLP = (900 - 900);
        while ((int) strlen (uSmFxNA) > vMUufiCF0RLP) {
            if (islower (uSmFxNA[vMUufiCF0RLP]))
                TrN9tVDJIOn7 += ((int) uSmFxNA[vMUufiCF0RLP] - (472 - 385)) * fgVqCtd9M (rNKVkixTfse, (int) strlen (uSmFxNA) - vMUufiCF0RLP - (262 - 261));
            else if (isupper (uSmFxNA[vMUufiCF0RLP]))
                TrN9tVDJIOn7 += ((int) uSmFxNA[vMUufiCF0RLP] - (533 - 478)) * fgVqCtd9M (rNKVkixTfse, (int) strlen (uSmFxNA) - vMUufiCF0RLP - 1);
            else if (isdigit (uSmFxNA[vMUufiCF0RLP]))
                TrN9tVDJIOn7 += ((int) uSmFxNA[vMUufiCF0RLP] - (262 - 214)) * fgVqCtd9M (rNKVkixTfse, (int) strlen (uSmFxNA) - vMUufiCF0RLP - 1);
            vMUufiCF0RLP++;
        }
    }
    if (TrN9tVDJIOn7 == (518 - 518)) {
        puts ("0");
        return (105 - 105);
    }
    for (; TrN9tVDJIOn7 > 0;) {
        if (TrN9tVDJIOn7 % XRuFLj > (588 - 579)) {
            AGaOMo[vMUufiCF0RLP] = (char) (TrN9tVDJIOn7 % XRuFLj +(577 - 522));
            TrN9tVDJIOn7 = TrN9tVDJIOn7 / XRuFLj;
        }
        else if (TrN9tVDJIOn7 % XRuFLj == 0) {
            TrN9tVDJIOn7 = TrN9tVDJIOn7 / XRuFLj;
            AGaOMo[vMUufiCF0RLP] = '0';
        }
        else {
            AGaOMo[vMUufiCF0RLP] = (char) (TrN9tVDJIOn7 % XRuFLj +48);
            TrN9tVDJIOn7 = TrN9tVDJIOn7 / XRuFLj;
        }
        vMUufiCF0RLP++;
    }
    {
        int G7IgqlM94Xs;
        G7IgqlM94Xs = 1;
        for (; G7IgqlM94Xs <= vMUufiCF0RLP;) {
            cout << AGaOMo[vMUufiCF0RLP - G7IgqlM94Xs];
            G7IgqlM94Xs++;
        }
    }
    return 0;
}

