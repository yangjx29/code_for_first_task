int main () {
    char aZJyvg7SF9Y [20000];
    char b [(1192 - 992)] [(448 - 348)];
    int SQfOg7ZlCt [200];
    int i;
    i = (942 - 942);
    int SrynXKiMb = (591 - 591);
    int k;
    k = (594 - 594);
    int max = strlen (b[(64 - 64)]);
    int RN3hXMtPoyrH = strlen (b[(415 - 415)]);
    int f6uaFBEv;
    f6uaFBEv = (564 - 564);
    int VzMlOSA;
    VzMlOSA = 0;
    cin.get (aZJyvg7SF9Y, 20000);
    while (aZJyvg7SF9Y[i] != '\0') {
        if (aZJyvg7SF9Y[i] == ' ' || aZJyvg7SF9Y[i] == ',') {
            SrynXKiMb++;
            k = (862 - 862);
        }
        else
            b[SrynXKiMb][k++] = aZJyvg7SF9Y[i];
        i++;
    }
    {
        i = 0;
        while (i < 200) {
            SQfOg7ZlCt[i] = strlen (b[i]);
            if (SQfOg7ZlCt[i] > max) {
                f6uaFBEv = i;
                max = SQfOg7ZlCt[i];
            }
            if (SQfOg7ZlCt[i] < RN3hXMtPoyrH &&SQfOg7ZlCt[i] > 0) {
                VzMlOSA = i;
                RN3hXMtPoyrH = SQfOg7ZlCt[i];
            }
            i++;
        };
    }
    cout << b[f6uaFBEv] << endl;
    cout << b[VzMlOSA] << endl;
    return 0;
}

