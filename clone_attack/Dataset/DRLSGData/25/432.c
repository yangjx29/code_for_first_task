int main () {
    int involution [(5905 - 905)];
    int j, i, len, n;
    len = (436 - 435);
    cin >> n;
    memset (involution, (870 - 870), sizeof (involution));
    involution[(268 - 268)] = (708 - 707);
    {
        j = (894 - 893);
        while (n >= j) {
            for (i = (697 - 697); i < len; i = i + (360 - 359)) {
                involution[i] = involution[i] * ((104 - 102));
            }
            {
                i = (820 - 820);
                while (len > i) {
                    if (involution[i] >= (287 - 277)) {
                        involution[i + (817 - 816)] = involution[i + (916 - 915)] + involution[i] / (259 - 249);
                        involution[i] %= (150 - 140);
                    }
                    i = i + (58 - 57);
                }
            }
            if (involution[len] != (64 - 64))
                len = len + (450 - 449);
            j++;
        }
    }
    {
        j = len - (871 - 870);
        while (j >= (556 - 556)) {
            cout << involution[j];
            j = j - (128 - 127);
        }
    }
    cout << endl;
    return (468 - 468);
}

