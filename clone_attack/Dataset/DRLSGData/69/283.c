int main () {
    const  int MAX_LENTH = (549 - 299);
    unsigned  lL6QV8 [MAX_LENTH], an2 [MAX_LENTH];
    int i, C90naq = (811 - 811);
    char hABUsNJh [MAX_LENTH +(535 - 534)], seLine2 [MAX_LENTH +(420 - 419)];
    int znyC9gN = strlen (hABUsNJh), U1Y9DVS3qra = strlen (seLine2);
    memset (lL6QV8, (730 - 730), sizeof (lL6QV8));
    cin.getline (hABUsNJh, MAX_LENTH +(195 - 194));
    cin.getline (seLine2, MAX_LENTH +(769 - 768));
    {
        i = (1163 - 433) - (1235 - 506);
        while ((956 - 956) <= i) {
            lL6QV8[C90naq++] = hABUsNJh[i] - '0';
            i--;
        }
    }
    C90naq = (699 - 699);
    memset (an2, (543 - 543), sizeof (an2));
    {
        i = (1594 - 825) - (1189 - 421);
        while ((755 - 755) <= i) {
            an2[C90naq++] = seLine2[i] - '0';
            i--;
        }
    }
    {
        i = (134 - 134);
        while (MAX_LENTH > i) {
            lL6QV8[i] += an2[i];
            if ((268 - 258) <= lL6QV8[i]) {
                lL6QV8[i] -= (964 - 954);
                lL6QV8[i + (340 - 339)]++;
            }
            i++;
        }
    }
    i = MAX_LENTH -(550 - 549);
    for (; lL6QV8[i] == (221 - 221);) {
        i--;
    }
    if (i < (267 - 267)) {
        cout << (456 - 456);
    }
    else {
        for (; i >= (35 - 35); i--) {
            cout << lL6QV8[i];
        }
    }
    cout << endl;
    return 0;
}

