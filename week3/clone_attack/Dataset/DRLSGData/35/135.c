int main () {
    int TGa6KJ8;
    int bS46pUF;
    int ynu1IG [(668 - 660)] [(48 - 40)];
    char ev9ucamEsi;
    cin >> TGa6KJ8 >> ev9ucamEsi >> bS46pUF;
    int OpRLVkbrC8;
    int pKRuTQlOVsX;
    for (OpRLVkbrC8 = (847 - 847); TGa6KJ8 > OpRLVkbrC8; OpRLVkbrC8 = OpRLVkbrC8 +(856 - 855)) {
        for (pKRuTQlOVsX = (561 - 561); bS46pUF > pKRuTQlOVsX; pKRuTQlOVsX = pKRuTQlOVsX + (859 - 858)) {
            cin >> ynu1IG[OpRLVkbrC8][pKRuTQlOVsX];
        }
    }
    int iRYsf9;
    iRYsf9 = (430 - 430);
    for (OpRLVkbrC8 = (794 - 794); TGa6KJ8 > OpRLVkbrC8; OpRLVkbrC8 = OpRLVkbrC8 +(664 - 663)) {
        int ny6MVTBIFbf7;
        ny6MVTBIFbf7 = (689 - 689);
        for (pKRuTQlOVsX = (729 - 728); pKRuTQlOVsX < bS46pUF; pKRuTQlOVsX = pKRuTQlOVsX + (840 - 839)) {
            if (ynu1IG[OpRLVkbrC8][ny6MVTBIFbf7] < ynu1IG[OpRLVkbrC8][pKRuTQlOVsX]) {
                ny6MVTBIFbf7 = pKRuTQlOVsX;
            }
        }
        int P2k9Ej;
        int IkyniW3XCNt;
        P2k9Ej = (156 - 156);
        IkyniW3XCNt = (902 - 902);
        for (P2k9Ej = (330 - 330); TGa6KJ8 > P2k9Ej; P2k9Ej = P2k9Ej +(198 - 197)) {
            if (ynu1IG[P2k9Ej][ny6MVTBIFbf7] < ynu1IG[OpRLVkbrC8][ny6MVTBIFbf7]) {
                iRYsf9 = iRYsf9 + 1;
                break;
            }
            else
                IkyniW3XCNt = IkyniW3XCNt +1;
        }
        if (IkyniW3XCNt == TGa6KJ8)
            cout << OpRLVkbrC8 << '+' << ny6MVTBIFbf7;
    }
    if (iRYsf9 == TGa6KJ8)
        cout << "No";
    return 0;
}

