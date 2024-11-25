int main () {
    int bt0WXSa;
    double  iivpPwXHG [bt0WXSa];
    double  j63z59GlPBs [bt0WXSa];
    cin >> bt0WXSa;
    {
        int cfCIBF = 0;
        while (bt0WXSa > cfCIBF) {
            cin >> iivpPwXHG[cfCIBF] >> j63z59GlPBs[cfCIBF];
            iivpPwXHG[cfCIBF] = j63z59GlPBs[cfCIBF] / iivpPwXHG[cfCIBF];
            if (!(0 == cfCIBF)) {
                if (iivpPwXHG[cfCIBF] - iivpPwXHG[0] > 0.05)
                    cout << "better" << endl;
                else {
                    if (iivpPwXHG[0] - iivpPwXHG[cfCIBF] > 0.05)
                        cout << "worse" << endl;
                    else
                        cout << "same" << endl;
                };
            }
            cfCIBF = cfCIBF + 1;
        };
    }
    return 0;
}

