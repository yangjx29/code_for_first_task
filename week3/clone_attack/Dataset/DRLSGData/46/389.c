int main () {
    int AovitU;
    AovitU = 0;
    int ttpFID;
    ttpFID = 0;
    int j68lXFr;
    int r4j7hmQVdG;
    int oMPad5j7;
    j68lXFr = 0;
    int NZEtsyOfc;
    int tlEN4G6CnUVp;
    int MegVCf [100] [100];
    cin >> NZEtsyOfc >> tlEN4G6CnUVp;
    {
        r4j7hmQVdG = 0;
        for (; NZEtsyOfc > r4j7hmQVdG;) {
            oMPad5j7 = 0;
            for (; oMPad5j7 < tlEN4G6CnUVp;) {
                cin >> MegVCf[r4j7hmQVdG][oMPad5j7];
                oMPad5j7++;
            }
            r4j7hmQVdG = r4j7hmQVdG + 1;
        }
    }
    for (j68lXFr = 0; NZEtsyOfc *tlEN4G6CnUVp >= j68lXFr;) {
        {
            oMPad5j7 = ttpFID;
            for (; tlEN4G6CnUVp - ttpFID > oMPad5j7;) {
                cout << MegVCf[ttpFID][oMPad5j7] << endl;
                j68lXFr = j68lXFr + 1;
                if (j68lXFr == NZEtsyOfc *tlEN4G6CnUVp) {
                    AovitU = 1;
                    break;
                }
                oMPad5j7++;
            }
        }
        if (AovitU)
            break;
        {
            r4j7hmQVdG = 1 + ttpFID;
            for (; NZEtsyOfc -ttpFID > r4j7hmQVdG;) {
                cout << MegVCf[r4j7hmQVdG][tlEN4G6CnUVp - 1 - ttpFID] << endl;
                j68lXFr = j68lXFr + 1;
                if (j68lXFr == NZEtsyOfc *tlEN4G6CnUVp) {
                    AovitU = 1;
                    break;
                }
                r4j7hmQVdG = r4j7hmQVdG + 1;
            }
        }
        if (AovitU)
            break;
        {
            oMPad5j7 = tlEN4G6CnUVp - 2 - ttpFID;
            for (; oMPad5j7 > ttpFID;) {
                cout << MegVCf[NZEtsyOfc -1 - ttpFID][oMPad5j7] << endl;
                j68lXFr = j68lXFr + 1;
                if (j68lXFr == NZEtsyOfc *tlEN4G6CnUVp) {
                    AovitU = 1;
                    break;
                }
                oMPad5j7--;
            }
        }
        if (AovitU)
            break;
        {
            r4j7hmQVdG = NZEtsyOfc -1 - ttpFID;
            for (; r4j7hmQVdG > ttpFID;) {
                cout << MegVCf[r4j7hmQVdG][ttpFID] << endl;
                j68lXFr++;
                if (j68lXFr == NZEtsyOfc *tlEN4G6CnUVp) {
                    AovitU = 1;
                    break;
                }
                r4j7hmQVdG = r4j7hmQVdG - 1;
            }
        }
        if (AovitU)
            break;
        ttpFID = ttpFID + 1;
    }
    return 0;
}

