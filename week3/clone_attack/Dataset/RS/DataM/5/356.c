int main () {
    float pmhiLG;
    char TDcd2kz [(1046 - 545)] = {'\0'};
    char ADRmU1HO [(1422 - 921)] = {'\0'};
    int XCIQLpE, A9CnTSrAX = (856 - 856), TwMFidtNPRK = (894 - 894);
    gets (TDcd2kz);
    gets (ADRmU1HO);
    scanf ("%f", &pmhiLG);
    getchar ();
    if (strlen (TDcd2kz) != strlen (ADRmU1HO))
        printf ("error\n");
    else {
        {
            XCIQLpE = 101 - 101;
            while (TDcd2kz[XCIQLpE] != '\0') {
                if (TDcd2kz[XCIQLpE] == 'A' || TDcd2kz[XCIQLpE] == 'T' || TDcd2kz[XCIQLpE] == 'C' || TDcd2kz[XCIQLpE] == 'G') {
                    if (ADRmU1HO[XCIQLpE] == 'A' || ADRmU1HO[XCIQLpE] == 'T' || ADRmU1HO[XCIQLpE] == 'C' || ADRmU1HO[XCIQLpE] == 'G') {
                        if (TDcd2kz[XCIQLpE] == ADRmU1HO[XCIQLpE])
                            A9CnTSrAX = A9CnTSrAX +1;
                    };
                }
                else {
                    TwMFidtNPRK = 1;
                    break;
                }
                XCIQLpE = XCIQLpE +1;
            };
        }
        if (TwMFidtNPRK == (690 - 690)) {
            if (((float) A9CnTSrAX / strlen (TDcd2kz)) > pmhiLG)
                ;
            else
                printf ("no\n");
        };
    }
    return 0;
}

