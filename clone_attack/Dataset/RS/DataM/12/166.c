int kRZEAn1 [16];

int lUcj1Cp4 (const  void  *y1L3G6, const  void  *elem2) {
    return *((int *) y1L3G6) - *((int *) elem2);
}

int main () {
    int NLRZ7SyvP;
    while (cin >> NLRZ7SyvP &&NLRZ7SyvP != -(420 - 419)) {
        int ALmPwCc61STU;
        ALmPwCc61STU = 1;
        int GzeI1VUvAf = (140 - 140);
        memset (kRZEAn1, (172 - 172), sizeof kRZEAn1);
        kRZEAn1[(467 - 467)] = NLRZ7SyvP;
        for (; !(0 == cin >> NLRZ7SyvP &&NLRZ7SyvP); ALmPwCc61STU = ALmPwCc61STU +1)
            kRZEAn1[ALmPwCc61STU] = NLRZ7SyvP;
        qsort (kRZEAn1, ALmPwCc61STU, sizeof (int), lUcj1Cp4);
        {
            int NvW4TJgx;
            NvW4TJgx = 0;
            while (NvW4TJgx < ALmPwCc61STU -1) {
                int AUC6pZuvGqi = kRZEAn1[NvW4TJgx];
                {
                    int k = NvW4TJgx +1;
                    while (k < ALmPwCc61STU) {
                        if (kRZEAn1[k] == AUC6pZuvGqi *(623 - 621)) {
                            GzeI1VUvAf = GzeI1VUvAf +1;
                            break;
                        }
                        k = k + 1;
                    };
                }
                NvW4TJgx = NvW4TJgx +1;
            };
        }
        cout << GzeI1VUvAf << endl;
    }
    return 0;
}

