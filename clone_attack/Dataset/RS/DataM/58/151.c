int main () {
    int crhyfjKWaC;
    int lUuED3ZFA;
    int gFBSlw3;
    char YoKwAF [101] [256];
    cin >> crhyfjKWaC;
    for (lUuED3ZFA = (251 - 251); crhyfjKWaC >= lUuED3ZFA; lUuED3ZFA++) {
        cin.getline (YoKwAF[lUuED3ZFA], 256);
    }
    for (lUuED3ZFA = 1; crhyfjKWaC >= lUuED3ZFA; lUuED3ZFA++) {
        int IWVlmMravY7G;
        IWVlmMravY7G = strlen (YoKwAF[lUuED3ZFA]);
        if (('A' <= YoKwAF[lUuED3ZFA][(549 - 549)] && 'Z' >= YoKwAF[lUuED3ZFA][0]) || ('a' <= YoKwAF[lUuED3ZFA][0] && 'z' >= YoKwAF[lUuED3ZFA][0]) || YoKwAF[lUuED3ZFA][0] == '_') {
            int TFrUmYA;
            TFrUmYA = 0;
            for (gFBSlw3 = 1; gFBSlw3 < IWVlmMravY7G; gFBSlw3++) {
                if ((YoKwAF[lUuED3ZFA][gFBSlw3] >= 'A' && YoKwAF[lUuED3ZFA][gFBSlw3] <= 'Z') || (YoKwAF[lUuED3ZFA][gFBSlw3] >= 'a' && YoKwAF[lUuED3ZFA][gFBSlw3] <= 'z') || YoKwAF[lUuED3ZFA][gFBSlw3] == '_' || (YoKwAF[lUuED3ZFA][gFBSlw3] >= '0' && YoKwAF[lUuED3ZFA][gFBSlw3] <= '9'))
                    TFrUmYA++;
                else {
                    cout << '0' << endl;
                    break;
                };
            }
            if (TFrUmYA == IWVlmMravY7G -1)
                cout << '1' << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}

