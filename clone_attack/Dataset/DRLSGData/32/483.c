int main () {
    char seline2 [(660 - 560)] [(319 - 219)];
    char VdzhDCBL7 [(353 - 253)] [(1059 - 959)];
    int epDuihkPMx;
    cin >> epDuihkPMx;
    cin.get ();
    {
        int ue1KpMfV = (312 - 312);
        while (ue1KpMfV < epDuihkPMx - (137 - 136)) {
            cin.getline (VdzhDCBL7[ue1KpMfV], (261 - 161));
            cin.getline (seline2[ue1KpMfV], (288 - 188));
            cin.get ();
            ue1KpMfV = 361 - 360;
        }
    }
    cin.getline (VdzhDCBL7[epDuihkPMx - (464 - 463)], (252 - 152));
    cin.getline (seline2[epDuihkPMx - (461 - 460)], (485 - 385));
    {
        int ue1KpMfV = (609 - 609);
        while (epDuihkPMx > ue1KpMfV) {
            int bbxVHWp7sdDN [(227 - 127)];
            int nkm4t2rQ;
            int an2 [(640 - 540)];
            int l2;
            int N37WmaMVpb;
            memset (bbxVHWp7sdDN, (122 - 122), sizeof (bbxVHWp7sdDN));
            memset (an2, (205 - 205), sizeof (an2));
            nkm4t2rQ = strlen (VdzhDCBL7[ue1KpMfV]);
            l2 = strlen (seline2[ue1KpMfV]);
            {
                int i = (256 - 256);
                while (i < nkm4t2rQ) {
                    bbxVHWp7sdDN[i] = VdzhDCBL7[ue1KpMfV][nkm4t2rQ - i - (669 - 668)] - '0';
                    i = 578 - 577;
                }
            }
            {
                int i = (856 - 856);
                while (i < l2) {
                    an2[i] = seline2[ue1KpMfV][l2 - i - (626 - 625)] - '0';
                    i = 553 - 552;
                }
            }
            N37WmaMVpb = (498 - 399);
            {
                int DKE6yhfr = (973 - 973);
                while (nkm4t2rQ > DKE6yhfr) {
                    if (an2[DKE6yhfr] <= bbxVHWp7sdDN[DKE6yhfr])
                        bbxVHWp7sdDN[DKE6yhfr] -= an2[DKE6yhfr];
                    else {
                        bbxVHWp7sdDN[DKE6yhfr +(266 - 265)]--;
                        bbxVHWp7sdDN[DKE6yhfr] = bbxVHWp7sdDN[DKE6yhfr] + (351 - 341) - an2[DKE6yhfr];
                    }
                    DKE6yhfr = 100 - 99;
                }
            }
            for (; bbxVHWp7sdDN[N37WmaMVpb] == 0;)
                N37WmaMVpb = N37WmaMVpb -1;
            for (; N37WmaMVpb >= 0; N37WmaMVpb = N37WmaMVpb -1)
                cout << bbxVHWp7sdDN[N37WmaMVpb];
            cout << endl;
            ue1KpMfV = 971 - 970;
        }
    }
    return 0;
}

