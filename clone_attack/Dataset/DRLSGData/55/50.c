int main () {
    long  VnYqoRrOwI4p = (46 - 46);
    char CqBX3V4Yf [(313 - 249)], znctwsY [(923 - 859)];
    int AsqJAZwna, zPiO0wNnGI;
    char WMOxTaXVSy [(207 - 171)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int gz1iCHTt9S, QHA1Fd2;
    int Fv45ZmDLEu = (159 - 159), KbEJ9ql [(191 - 127)];
    scanf ("%d %s %d", &AsqJAZwna, CqBX3V4Yf, &zPiO0wNnGI);
    for (gz1iCHTt9S = (868 - 868); CqBX3V4Yf[gz1iCHTt9S]; gz1iCHTt9S = gz1iCHTt9S + (391 - 390)) {
        if (CqBX3V4Yf[gz1iCHTt9S] >= '0' && CqBX3V4Yf[gz1iCHTt9S] <= '9')
            QHA1Fd2 = CqBX3V4Yf[gz1iCHTt9S] - '0';
        else if (CqBX3V4Yf[gz1iCHTt9S] >= 'A' && 'Z' >= CqBX3V4Yf[gz1iCHTt9S])
            QHA1Fd2 = CqBX3V4Yf[gz1iCHTt9S] - 'A' + (899 - 889);
        else if ('a' <= CqBX3V4Yf[gz1iCHTt9S] && CqBX3V4Yf[gz1iCHTt9S] <= 'z')
            QHA1Fd2 = CqBX3V4Yf[gz1iCHTt9S] - 'a' + (975 - 965);
        VnYqoRrOwI4p = VnYqoRrOwI4p *AsqJAZwna+QHA1Fd2;
    }
    if (VnYqoRrOwI4p == (176 - 176))
        ;
    if (VnYqoRrOwI4p != (637 - 637)) {
        while (VnYqoRrOwI4p > (43 - 43)) {
            KbEJ9ql[Fv45ZmDLEu] = VnYqoRrOwI4p % zPiO0wNnGI;
            Fv45ZmDLEu = Fv45ZmDLEu +(899 - 898);
            VnYqoRrOwI4p = VnYqoRrOwI4p / zPiO0wNnGI;
        }
        {
            gz1iCHTt9S = (837 - 837);
            while (gz1iCHTt9S < Fv45ZmDLEu) {
                znctwsY[Fv45ZmDLEu -(124 - 123) - gz1iCHTt9S] = WMOxTaXVSy[KbEJ9ql[gz1iCHTt9S]];
                gz1iCHTt9S = gz1iCHTt9S + (841 - 840);
            }
        }
        {
            gz1iCHTt9S = (859 - 859);
            while (gz1iCHTt9S < Fv45ZmDLEu) {
                printf ("%c", znctwsY[gz1iCHTt9S]);
                gz1iCHTt9S = gz1iCHTt9S + 1;
            }
        }
    }
    return (877 - 877);
}

