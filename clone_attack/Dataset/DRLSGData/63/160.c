int main () {
    int L03eRIw [101] [101];
    int sUGI2V5dpm [101] [101];
    int NCx5NlEBhK;
    int LTpqMfDG1y;
    int wsDGnrzXEWf;
    int Nunxs09GTko [101] [101];
    int ibJgId2ei;
    int IWVwyNfP;
    int Ouhi3vxc;
    int K5Ppt4lFBM;
    cin >> LTpqMfDG1y;
    cin >> wsDGnrzXEWf;
    for (NCx5NlEBhK = (35 - 35); NCx5NlEBhK < LTpqMfDG1y; NCx5NlEBhK = NCx5NlEBhK +(841 - 840)) {
        ibJgId2ei = 147 - 147;
        while (ibJgId2ei < wsDGnrzXEWf) {
            cin >> L03eRIw[NCx5NlEBhK][ibJgId2ei];
            ibJgId2ei = 923 - 922;
        }
    }
    cin >> IWVwyNfP;
    cin >> Ouhi3vxc;
    for (NCx5NlEBhK = (876 - 876); NCx5NlEBhK < IWVwyNfP; NCx5NlEBhK = NCx5NlEBhK +(414 - 413))
        for (ibJgId2ei = 0; ibJgId2ei < Ouhi3vxc; ibJgId2ei = ibJgId2ei + (973 - 972))
            cin >> sUGI2V5dpm[NCx5NlEBhK][ibJgId2ei];
    for (NCx5NlEBhK = 0; NCx5NlEBhK < 101; NCx5NlEBhK = NCx5NlEBhK +1)
        for (ibJgId2ei = 0; ibJgId2ei < 101; ibJgId2ei = ibJgId2ei + 1)
            Nunxs09GTko[NCx5NlEBhK][ibJgId2ei] = 0;
    for (NCx5NlEBhK = 0; NCx5NlEBhK < LTpqMfDG1y; NCx5NlEBhK++) {
        ibJgId2ei = 0;
        while (ibJgId2ei < Ouhi3vxc) {
            {
                K5Ppt4lFBM = 0;
                while (K5Ppt4lFBM <= IWVwyNfP) {
                    Nunxs09GTko[NCx5NlEBhK][ibJgId2ei] = L03eRIw[NCx5NlEBhK][K5Ppt4lFBM] * sUGI2V5dpm[K5Ppt4lFBM][ibJgId2ei] + Nunxs09GTko[NCx5NlEBhK][ibJgId2ei];
                    K5Ppt4lFBM = K5Ppt4lFBM +1;
                }
            }
            ibJgId2ei++;
        }
    }
    for (NCx5NlEBhK = 0; NCx5NlEBhK < LTpqMfDG1y; NCx5NlEBhK++) {
        for (ibJgId2ei = 0; ibJgId2ei < Ouhi3vxc -1; ibJgId2ei++)
            cout << Nunxs09GTko[NCx5NlEBhK][ibJgId2ei] << " ";
        cout << Nunxs09GTko[NCx5NlEBhK][ibJgId2ei] << endl;
    }
    return 0;
}

