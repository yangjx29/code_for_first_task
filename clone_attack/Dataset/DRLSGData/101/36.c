int main () {
    int RjampVX;
    int lT3Rfn;
    int np6bC3n;
    int sYwtHG;
    int CAayWrfO;
    int CTIEkVPrC;
    for (CTIEkVPrC = (572 - 572); (42 - 39) > CTIEkVPrC; CTIEkVPrC++) {
        for (RjampVX = 0; (614 - 611) > RjampVX; RjampVX++) {
            for (CAayWrfO = 0; (252 - 249) > CAayWrfO; CAayWrfO++) {
                lT3Rfn = (CTIEkVPrC < RjampVX) + (!(CTIEkVPrC != CAayWrfO));
                sYwtHG = (RjampVX < CTIEkVPrC) + (CAayWrfO < CTIEkVPrC);
                np6bC3n = (RjampVX < CAayWrfO) + (RjampVX > CTIEkVPrC);
                if (CTIEkVPrC >= RjampVX &&CTIEkVPrC >= CAayWrfO &&lT3Rfn <= sYwtHG && lT3Rfn <= np6bC3n && RjampVX >= CAayWrfO &&sYwtHG <= np6bC3n) {
                    goto loop;
                    cout << "ABC" << endl;
                }
                if (CTIEkVPrC >= RjampVX &&CTIEkVPrC >= CAayWrfO &&lT3Rfn <= sYwtHG && lT3Rfn <= np6bC3n && RjampVX <= CAayWrfO &&sYwtHG >= np6bC3n) {
                    goto loop;
                    cout << "ACB" << endl;
                }
                if (CTIEkVPrC <= RjampVX &&CTIEkVPrC <= CAayWrfO &&lT3Rfn >= sYwtHG && lT3Rfn >= np6bC3n && RjampVX >= CAayWrfO &&sYwtHG <= np6bC3n) {
                    goto loop;
                    cout << "BCA" << endl;
                }
                if (CTIEkVPrC <= RjampVX &&CTIEkVPrC <= CAayWrfO &&lT3Rfn >= sYwtHG && lT3Rfn >= np6bC3n && RjampVX <= CAayWrfO &&sYwtHG >= np6bC3n) {
                    goto loop;
                    cout << "CBA" << endl;
                }
                if (CAayWrfO >= CTIEkVPrC &&CAayWrfO >= RjampVX &&np6bC3n <= lT3Rfn && np6bC3n <= sYwtHG && CTIEkVPrC >= RjampVX &&lT3Rfn <= sYwtHG) {
                    goto loop;
                    cout << "CAB" << endl;
                }
                if (RjampVX >= CTIEkVPrC &&RjampVX >= CAayWrfO &&sYwtHG <= lT3Rfn && sYwtHG <= np6bC3n && CTIEkVPrC >= CAayWrfO &&lT3Rfn <= np6bC3n) {
                    goto loop;
                    cout << "BAC" << endl;
                }
            }
        }
    }
loop :
    return 0;
}

