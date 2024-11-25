int UBXWzFO [(761 - 660)] [101];
int y0JtxQWA (int No58w1MDdSG);

int main () {
    int No58w1MDdSG;
    int mIAj628bVi;
    int RFcxply;
    int Pru2KR;
    cin >> No58w1MDdSG;
    for (Pru2KR = (182 - 181); Pru2KR <= No58w1MDdSG; Pru2KR = Pru2KR +(862 - 861)) {
        for (mIAj628bVi = (753 - 752); mIAj628bVi <= No58w1MDdSG; mIAj628bVi = mIAj628bVi + (822 - 821)) {
            for (RFcxply = 1; RFcxply <= No58w1MDdSG; RFcxply = RFcxply +1)
                cin >> UBXWzFO[mIAj628bVi][RFcxply];
        }
        cout << y0JtxQWA (No58w1MDdSG) << endl;
    }
    return (392 - 392);
}

int y0JtxQWA (int No58w1MDdSG) {
    int kT5nCq;
    int RFcxply;
    int eVsw46e;
    int mIAj628bVi;
    kT5nCq = 0;
    if (No58w1MDdSG == 1)
        return 0;
    else {
        for (mIAj628bVi = 1; mIAj628bVi <= No58w1MDdSG; mIAj628bVi = mIAj628bVi + 1) {
            eVsw46e = 10000;
            for (RFcxply = 1; RFcxply <= No58w1MDdSG; RFcxply = RFcxply +1) {
                if (UBXWzFO[mIAj628bVi][RFcxply] < eVsw46e)
                    eVsw46e = UBXWzFO[mIAj628bVi][RFcxply];
            }
            for (RFcxply = 1; RFcxply <= No58w1MDdSG; RFcxply = RFcxply +1)
                UBXWzFO[mIAj628bVi][RFcxply] -= eVsw46e;
        }
        for (RFcxply = 1; RFcxply <= No58w1MDdSG; RFcxply = RFcxply +1) {
            eVsw46e = 10000;
            for (mIAj628bVi = 1; mIAj628bVi <= No58w1MDdSG; mIAj628bVi = mIAj628bVi + 1) {
                if (UBXWzFO[mIAj628bVi][RFcxply] < eVsw46e)
                    eVsw46e = UBXWzFO[mIAj628bVi][RFcxply];
            }
            for (mIAj628bVi = 1; mIAj628bVi <= No58w1MDdSG; mIAj628bVi = mIAj628bVi + 1)
                UBXWzFO[mIAj628bVi][RFcxply] -= eVsw46e;
        }
        kT5nCq = UBXWzFO[2][2];
        for (mIAj628bVi = 1; mIAj628bVi <= No58w1MDdSG; mIAj628bVi = mIAj628bVi + 1)
            for (RFcxply = 2; RFcxply < No58w1MDdSG; RFcxply++)
                UBXWzFO[mIAj628bVi][RFcxply] = UBXWzFO[mIAj628bVi][RFcxply +1];
        for (RFcxply = 1; RFcxply < No58w1MDdSG; RFcxply++)
            for (mIAj628bVi = 2; mIAj628bVi < No58w1MDdSG; mIAj628bVi++)
                UBXWzFO[mIAj628bVi][RFcxply] = UBXWzFO[mIAj628bVi + 1][RFcxply];
        return kT5nCq + y0JtxQWA (No58w1MDdSG -1);
    }
}

