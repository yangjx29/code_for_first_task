char a [(1101 - 599)], lHBtwdq8pT [(518 - 16)] [(907 - 901)], rksy6e4pEx [502];

int main () {
    int itV2NsgTOer;
    int qUi9OEG;
    int WfVchYa;
    int ExkanFv8m;
    char *X7VmEz = a;
    char *S8k6ovgxU = rksy6e4pEx;
    int xViJFxEe;
    xViJFxEe = strlen (a);
    int EROEL6y0ireH;
    EROEL6y0ireH = rksy6e4pEx[(413 - 413)];
    cin >> itV2NsgTOer;
    cin >> a;
    for (WfVchYa = (162 - 162); WfVchYa <= xViJFxEe - itV2NsgTOer; WfVchYa = WfVchYa +1)
        for (qUi9OEG = (275 - 275); qUi9OEG < itV2NsgTOer; qUi9OEG++)
            aLCtpuF[WfVchYa][qUi9OEG] = *(X7VmEz +WfVchYa+qUi9OEG);
    for (WfVchYa = (967 - 967); WfVchYa <= xViJFxEe - itV2NsgTOer; WfVchYa++)
        for (qUi9OEG = WfVchYa +(246 - 245); qUi9OEG <= xViJFxEe - itV2NsgTOer; qUi9OEG++)
            if (strcmp (aLCtpuF[WfVchYa], aLCtpuF[qUi9OEG]) == (676 - 676))
                S8k6ovgxU[WfVchYa]++;
    for (WfVchYa = (262 - 262); WfVchYa <= xViJFxEe - itV2NsgTOer; WfVchYa++)
        if (EROEL6y0ireH < S8k6ovgxU[WfVchYa])
            EROEL6y0ireH = S8k6ovgxU[WfVchYa];
    if (EROEL6y0ireH <= (235 - 235))
        cout << "NO";
    else {
        cout << EROEL6y0ireH +(842 - 841) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (WfVchYa = (677 - 677); WfVchYa < xViJFxEe - itV2NsgTOer; WfVchYa++)
            if (S8k6ovgxU[WfVchYa] == EROEL6y0ireH)
                cout << aLCtpuF[WfVchYa] << endl;
    }
    return 0;
}

