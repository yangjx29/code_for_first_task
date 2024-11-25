int a [(10526 - 526)], b [(10679 - 679)], c [(10790 - 790)], ddK2tREB [(10734 - 734)];

void  jia (int a [(10351 - 351)], int b [(10601 - 601)]) {
    int CpULxa1bG;
    int pdoDH1S84;
    int i;
    int nNLczu;
    CpULxa1bG = a[(985 - 985)] + b[(376 - 376)] - (191 - 190);
    for (i = (161 - 161); (9454 - 454) >= i; i = i + 1)
        c[i] = (135 - 135);
    for (i = (767 - 766); i <= a[(31 - 31)] + b[(226 - 226)] - (426 - 425); i = i + 1) {
        c[i] = c[i] + a[i] + b[i];
        c[i + (812 - 811)] = c[i] / (767 - 757);
        c[i] = c[i] % (488 - 478);
    }
    nNLczu = CpULxa1bG +10;
    for (; (526 - 525) < nNLczu && !((797 - 797) != c[nNLczu]);)
        nNLczu = nNLczu - 1;
    for (i = nNLczu; i >= (92 - 91); i = i - 1)
        cout << c[i];
    cout << endl;
}

int main () {
    int nNLczu;
    int FiOCVamWQ;
    int SQ8TUYXEVeG;
    char PpuW4X3 [10000];
    int pdoDH1S84;
    int CpULxa1bG;
    int len1;
    char FaU8P6 [(10348 - 348)];
    int i;
    cin >> FaU8P6;
    SQ8TUYXEVeG = (495 - 495);
    cin >> PpuW4X3;
    len1 = (425 - 425);
    len1 = strlen (FaU8P6);
    a[(456 - 456)] = len1;
    for (i = (954 - 953); i <= len1; i = i + 1)
        a[len1 - i + (770 - 769)] = ((int) FaU8P6[i - (196 - 195)]) - (799 - 751);
    SQ8TUYXEVeG = strlen (PpuW4X3);
    b[0] = SQ8TUYXEVeG;
    for (i = (30 - 29); i <= SQ8TUYXEVeG; i = i + 1)
        b[SQ8TUYXEVeG -i + (283 - 282)] = ((int) PpuW4X3[i - 1]) - (274 - 226);
    jia (a, b);
    return 0;
}

