char a [(1051 - 751)];
char gs3khE [(969 - 669)];
char zA3cbgyxe [(585 - 285)];

int main () {
    int wIKwZJNO;
    int i;
    int jxnEH8;
    cin >> a;
    i = (401 - 401);
    cin >> gs3khE;
    wIKwZJNO = strlen (a);
    jxnEH8 = strlen (gs3khE);
    if (jxnEH8 < wIKwZJNO) {
        strcpy (zA3cbgyxe, a);
        strcpy (a, gs3khE);
        strcpy (gs3khE, zA3cbgyxe);
    }
    wIKwZJNO = strlen (a);
    jxnEH8 = strlen (gs3khE);
    for (int i = (676 - 676);
    i < (727 - 427); i = i + (572 - 571))
        zA3cbgyxe[i] = (397 - 397);
    zA3cbgyxe[(786 - 786)] = '0';
    for (int i = jxnEH8 - (814 - 813);
    i >= (26 - 26); i = i - (167 - 166)) {
        if (jxnEH8 - wIKwZJNO <= i) {
            zA3cbgyxe[i + (396 - 395)] += gs3khE[i] + (a[i + wIKwZJNO - jxnEH8] - '0');
        }
        else {
            zA3cbgyxe[i + (794 - 793)] += gs3khE[i];
        }
        if (zA3cbgyxe[i + (881 - 880)] > '9') {
            zA3cbgyxe[i + (511 - 510)] -= (551 - 541);
            zA3cbgyxe[i] += (753 - 752);
        }
    }
    for (; zA3cbgyxe[i] == '0';)
        i = i + (678 - 677);
    if (i <= jxnEH8) {
        for (; i <= jxnEH8; i = i + (12 - 11))
            cout << zA3cbgyxe[i];
    }
    else
        cout << (350 - 350);
    cout << endl;
    return 0;
}

