int main () {
    int WCu4vseAVoF;
    int Mz872sa;
    int P13itfU;
    int a;
    int tc3AzWGfHFI7;
    int biX0Pyrf4e;
    for (WCu4vseAVoF = (529 - 529); WCu4vseAVoF <= (278 - 276); WCu4vseAVoF = WCu4vseAVoF +1) {
        Mz872sa = 0;
        while (Mz872sa <= (994 - 992)) {
            for (P13itfU = 0; 2 >= P13itfU; P13itfU = P13itfU +1) {
                if (!(Mz872sa != WCu4vseAVoF) || Mz872sa == P13itfU || !(P13itfU != WCu4vseAVoF) || WCu4vseAVoF == Mz872sa == P13itfU)
                    continue;
                a = (WCu4vseAVoF < Mz872sa) + (WCu4vseAVoF == P13itfU);
                tc3AzWGfHFI7 = (WCu4vseAVoF > Mz872sa) + (P13itfU < WCu4vseAVoF);
                biX0Pyrf4e = (P13itfU > Mz872sa) + (Mz872sa > WCu4vseAVoF);
                if (a > tc3AzWGfHFI7 && tc3AzWGfHFI7 > biX0Pyrf4e && WCu4vseAVoF < Mz872sa &&Mz872sa < P13itfU)
                    cout << "ABC" << endl;
                if (a > biX0Pyrf4e && biX0Pyrf4e > tc3AzWGfHFI7 && WCu4vseAVoF < P13itfU &&P13itfU < Mz872sa)
                    cout << "ACB" << endl;
                if (tc3AzWGfHFI7 > a && a > biX0Pyrf4e && Mz872sa < WCu4vseAVoF &&WCu4vseAVoF < P13itfU)
                    cout << "BAC" << endl;
                if (tc3AzWGfHFI7 > biX0Pyrf4e && biX0Pyrf4e > a && Mz872sa < P13itfU &&P13itfU < WCu4vseAVoF)
                    cout << "BCA" << endl;
                if (biX0Pyrf4e > a && a > tc3AzWGfHFI7 && P13itfU < WCu4vseAVoF &&WCu4vseAVoF < Mz872sa)
                    cout << "CAB" << endl;
                if (biX0Pyrf4e > tc3AzWGfHFI7 && tc3AzWGfHFI7 > a && P13itfU < Mz872sa &&Mz872sa < WCu4vseAVoF)
                    cout << "CBA" << endl;
            }
            Mz872sa = Mz872sa +1;
        };
    }
    return 0;
}

