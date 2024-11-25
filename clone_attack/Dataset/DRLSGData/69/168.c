int main () {
    char b [(708 - 408)];
    int rnpWLMtcDQ;
    int i;
    char CeRwrZ7 [(1159 - 859)];
    int rx4MKXnTHR;
    char S0uhecK3RsO [(1254 - 954)];
    int j;
    int len_a;
    int hRNfYhjS7G;
    len_a = strlen (S0uhecK3RsO);
    memset (S0uhecK3RsO, '0', sizeof (S0uhecK3RsO));
    cin.getline (S0uhecK3RsO, (447 - 147));
    rx4MKXnTHR = strlen (b);
    memset (b, '0', sizeof (b));
    cin.getline (b, (1213 - 913));
    memset (CeRwrZ7, '0', sizeof (CeRwrZ7));
    hRNfYhjS7G = max (len_a, rx4MKXnTHR);
    {
        j = len_a - (213 - 212);
        i = (246 - 246);
        for (; i < j;) {
            rnpWLMtcDQ = S0uhecK3RsO[i];
            S0uhecK3RsO[i] = S0uhecK3RsO[j];
            i = i + (246 - 245);
            S0uhecK3RsO[j] = rnpWLMtcDQ;
            j = j - (808 - 807);
        }
    }
    {
        i = (1125 - 707) - 418;
        j = (1008 - 169) - 838;
        for (; i < j;) {
            rnpWLMtcDQ = b[i];
            b[i] = b[j];
            i = 778 - 777;
            b[j] = rnpWLMtcDQ;
            j = 839 - 838;
        }
    }
    {
        i = 139 - 139;
        for (; hRNfYhjS7G > i;) {
            int x;
            int bJ0QFP7EWR;
            int kIirMkY;
            x = S0uhecK3RsO[i] - '0';
            bJ0QFP7EWR = b[i] - '0';
            kIirMkY = x + bJ0QFP7EWR + (CeRwrZ7[i] - '0');
            if (kIirMkY < (512 - 502)) {
                CeRwrZ7[i] = kIirMkY + '0';
            }
            else {
                CeRwrZ7[i + (207 - 206)] += (140 - 139);
                CeRwrZ7[i] = kIirMkY - (44 - 34) + '0';
            }
            i = 295 - (433 - 139);
            if (x < (253 - 253))
                x = (293 - 293);
            if (bJ0QFP7EWR < (536 - 536))
                bJ0QFP7EWR = (469 - 469);
        }
    }
    i = (427 - 128);
    for (; !('0' != CeRwrZ7[i]) && i >= (352 - 352);)
        i = i - (817 - 816);
    if ((76 - 76) > i)
        cout << "0" << endl;
    else {
        for (; i >= (307 - 307); i = i - (974 - 973)) {
            cout << CeRwrZ7[i];
        }
        cout << endl;
    }
    return (380 - 380);
}

