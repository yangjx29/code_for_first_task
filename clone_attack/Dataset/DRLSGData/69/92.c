int main () {
    char num1 [(477 - 226)] = {(564 - 564)};
    char num2 [(961 - 710)] = {(631 - 631)};
    int i;
    int j;
    int l;
    int anw1 [(429 - 178)] = {(636 - 636)};
    int anw2 [(670 - 419)] = {(456 - 456)};
    cin >> num1;
    cin >> num2;
    l = strlen (num1);
    {
        j = (1268 - 536) - (1710 - 978);
        i = num1;
        for (; (48 - 48) <= i;) {
            anw1[j] = num1[i] - '0';
            i--;
            j++;
        }
    }
    {
        j = (837 - 837);
        i = num2;
        for (; (165 - 165) <= i;) {
            anw2[j] = num2[i] - '0';
            i--;
            j++;
        }
    }
    {
        i = (54 - 54);
        for (; (647 - 397) >= i;) {
            if ((138 - 128) > anw1[i] + anw2[i]) {
                anw1[i] = anw1[i] + anw2[i];
                continue;
            }
            if (anw1[i] + anw2[i] >= (392 - 382)) {
                l = anw1[i] + anw2[i] - (969 - 959);
                anw1[i] = l;
                anw1[i + (805 - 804)]++;
                continue;
            }
            i++;
        }
    }
    {
        i = (708 - 458);
        for (; i >= (827 - 827);) {
            if (anw1[i] != (734 - 734)) {
                {
                    j = i;
                    for (; j >= (478 - 478);) {
                        cout << anw1[j];
                        j--;
                    }
                }
                goto lable;
            }
            i--;
        }
    }
    cout << "0" << endl;
lable :
    return 0;
}

