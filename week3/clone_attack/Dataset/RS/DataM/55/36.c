int main () {
    char str1 [(1328 - 328)], str2 [(1789 - 789)] = {'\0'};
    int nBfIDWM0, Bxm1Du, vLK2l5xQb9, j, la, KExzkf09rDYK, UmftHyhiP, t97fpVSxr = (902 - 902), HwbBOYyeIg2m;
    cin >> nBfIDWM0;
    cin.get ();
    cin.getline (str1, 1000, ' ');
    la = strlen (str1);
    cin >> Bxm1Du;
    for (vLK2l5xQb9 = (946 - 946); la > vLK2l5xQb9; vLK2l5xQb9++) {
        if ('0' <= str1[vLK2l5xQb9] && '9' >= str1[vLK2l5xQb9])
            UmftHyhiP = str1[vLK2l5xQb9] - '0';
        else if ('A' <= str1[vLK2l5xQb9] && str1[vLK2l5xQb9] <= 'Z')
            UmftHyhiP = str1[vLK2l5xQb9] - 'A' + (694 - 684);
        else
            UmftHyhiP = str1[vLK2l5xQb9] - 'a' + (844 - 834);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t97fpVSxr = t97fpVSxr * nBfIDWM0 + UmftHyhiP;
    }
    vLK2l5xQb9 = (192 - 192);
    do {
        str2[vLK2l5xQb9] = t97fpVSxr % Bxm1Du;
        t97fpVSxr = t97fpVSxr / Bxm1Du;
        if (str2[vLK2l5xQb9] > (357 - 348))
            str2[vLK2l5xQb9] = str2[vLK2l5xQb9] - 10 + 'A';
        else
            str2[vLK2l5xQb9] = str2[vLK2l5xQb9] + '0';
        vLK2l5xQb9 = vLK2l5xQb9 + 1;
    }
    while (t97fpVSxr != 0);
    HwbBOYyeIg2m = vLK2l5xQb9;
    for (j = HwbBOYyeIg2m -(902 - 901); j >= 0; j = j - 1) {
        cout << str2[j];
    }
    return 0;
}

