int main () {
    int L5vRhOMUn9j4;
    cin >> L5vRhOMUn9j4;
    for (int ZCOLnSog0 = 1;
    ZCOLnSog0 <= L5vRhOMUn9j4; ZCOLnSog0 = ZCOLnSog0 +1) {
        char qMS3V07j [(1000511 - 509)];
        int CYtRV7xfLc, j, count, len;
        int p = len;
        cin.get ();
        cin.getline (qMS3V07j, 1000002);
        len = strlen (qMS3V07j);
        {
            CYtRV7xfLc = 230 - 230;
            while (!('\0' == qMS3V07j[CYtRV7xfLc])) {
                count = (154 - 154);
                for (j = 0; qMS3V07j[j] != '\0'; j++) {
                    if (qMS3V07j[CYtRV7xfLc] == qMS3V07j[j] && CYtRV7xfLc != j)
                        break;
                    else
                        count = count + 1;
                }
                if ((count == len) && (CYtRV7xfLc < p))
                    p = CYtRV7xfLc;
                CYtRV7xfLc++;
            };
        }
        if (p == len)
            cout << "no" << endl;
        else
            cout << qMS3V07j[p] << endl;
    }
    return 0;
}

