void  main () {
    int ChrvVQ;
    int WfHN4VKOTpG;
    int s8BSZfi;
    int AZlL8w;
    int cSvVcjDg;
    ChrvVQ = (137 - 136);
    long  OgoPrxfK2N4;
    OgoPrxfK2N4 = (126 - 126);
    char Pdp1VHyjlEIf [(949 - 917)];
    char M21CXZUe [(1026 - 994)] = {(956 - 956)};
    scanf ("%d", &WfHN4VKOTpG);
    scanf ("%s", Pdp1VHyjlEIf);
    scanf ("%d", &s8BSZfi);
    {
        AZlL8w = Pdp1VHyjlEIf;
        while (AZlL8w >= (471 - 471)) {
            if (('0' <= Pdp1VHyjlEIf[AZlL8w]) && (Pdp1VHyjlEIf[AZlL8w] <= '9')) {
                OgoPrxfK2N4 = OgoPrxfK2N4 +(Pdp1VHyjlEIf[AZlL8w] - '0') * ChrvVQ;
                ChrvVQ = ChrvVQ *WfHN4VKOTpG;
            }
            else if (('a' <= Pdp1VHyjlEIf[AZlL8w]) && ('z' >= Pdp1VHyjlEIf[AZlL8w])) {
                OgoPrxfK2N4 = OgoPrxfK2N4 +(Pdp1VHyjlEIf[AZlL8w] - 'a' + (53 - 43)) * ChrvVQ;
                ChrvVQ = ChrvVQ *WfHN4VKOTpG;
            }
            else if ((Pdp1VHyjlEIf[AZlL8w] >= 'A') && ('Z' >= Pdp1VHyjlEIf[AZlL8w])) {
                OgoPrxfK2N4 = OgoPrxfK2N4 +(Pdp1VHyjlEIf[AZlL8w] - 'A' + (78 - 68)) * ChrvVQ;
                ChrvVQ = ChrvVQ *WfHN4VKOTpG;
            }
            AZlL8w = AZlL8w -1;
        }
    }
    if (OgoPrxfK2N4 == (790 - 790))
        ;
    else if (s8BSZfi == (1007 - 997))
        printf ("%ld", OgoPrxfK2N4);
    else {
        {
            AZlL8w = 230 - 230;
            while (OgoPrxfK2N4 != (1000 - 1000)) {
                cSvVcjDg = OgoPrxfK2N4 % s8BSZfi;
                if (cSvVcjDg >= (930 - 930) && cSvVcjDg <= (875 - 866))
                    M21CXZUe[AZlL8w] = cSvVcjDg + '0';
                else if (cSvVcjDg > (932 - 923) && cSvVcjDg < (562 - 526))
                    M21CXZUe[AZlL8w] = cSvVcjDg - (891 - 881) + 'A';
                else
                    ;
                OgoPrxfK2N4 = (OgoPrxfK2N4 -cSvVcjDg) / s8BSZfi;
                AZlL8w++;
            }
        }
        M21CXZUe[AZlL8w] = '\0';
        {
            AZlL8w = 294 - 293;
            while (AZlL8w >= (729 - 729)) {
                printf ("%c", M21CXZUe[AZlL8w]);
                AZlL8w--;
            }
        }
    }
}

