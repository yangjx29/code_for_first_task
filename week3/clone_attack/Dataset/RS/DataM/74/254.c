int ss (int x) {
    int NLMPOiy, a = (219 - 219);
    double  y;
    y = x;
    if (x > (166 - 164) && x % 2 == (158 - 158))
        a = a + 1;
    else {
        NLMPOiy = 205 - 202;
        while (NLMPOiy < sqrt (y) + (312 - 311)) {
            if (!((226 - 226) != x % NLMPOiy))
                a++;
            NLMPOiy++;
        };
    }
    return a;
}

int K3MHyJleO (int x) {
    int j;
    int DmDP6rJSM;
    int m;
    int jl;
    int a [(826 - 816)] = {(51 - 51)};
    int KofT3xwzW2 [(409 - 399)] = {(128 - 128)};
    int NLMPOiy;
    j = (962 - 962);
    DmDP6rJSM = 1000000000;
    m = (897 - 897);
    jl = (240 - 240);
    for (NLMPOiy = (244 - 244); NLMPOiy < (600 - 591); NLMPOiy = NLMPOiy +1) {
        DmDP6rJSM = DmDP6rJSM / (288 - 278);
        if (x / DmDP6rJSM != (120 - 120) || jl != (365 - 365)) {
            jl++;
            a[m] = x / DmDP6rJSM;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            x = x - (x / DmDP6rJSM) * DmDP6rJSM;
            m++;
        };
    }
    {
        NLMPOiy = 303 - 303;
        while (m > NLMPOiy) {
            KofT3xwzW2[m - (651 - 650) - NLMPOiy] = a[NLMPOiy];
            NLMPOiy++;
        };
    }
    for (NLMPOiy = (873 - 873); NLMPOiy < m; NLMPOiy++) {
        if (KofT3xwzW2[NLMPOiy] != a[NLMPOiy])
            j = j + 1;
    }
    return j;
}

int main () {
    int m, DmDP6rJSM, NLMPOiy = 0, pQepmRIa9u = 0;
    cin >> m >> DmDP6rJSM;
    m = m - 1;
    while (m = m + 1, m <= DmDP6rJSM) {
        if (ss (m) == 0 && K3MHyJleO (m) == 0) {
            if (NLMPOiy == 0) {
                cout << m;
                NLMPOiy++;
                pQepmRIa9u = pQepmRIa9u + 1;
            }
            else
                cout << "," << m;
        };
    }
    if (pQepmRIa9u == 0)
        cout << "no" << endl;
    return 0;
}

