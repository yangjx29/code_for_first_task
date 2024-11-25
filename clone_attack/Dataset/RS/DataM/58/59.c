int jWAQ7xZs = 0, U7AWLlVyP2YK = 1, uE7Ja5 = 1, NQq1WlIMFJv = 0, flag = 0;
char aALOCjwMsF [81] = {0};
int Yp4ZVCu [81] = {0};

int main () {
    cin >> jWAQ7xZs;
    cin.get ();
    for (; U7AWLlVyP2YK <= jWAQ7xZs;) {
        U7AWLlVyP2YK++;
        uE7Ja5 = 1;
        cin.getline (aALOCjwMsF, 81);
        {
            int m = 0;
            while (aALOCjwMsF[m] != '\0') {
                Yp4ZVCu[m] = aALOCjwMsF[m];
                m++;
                NQq1WlIMFJv++;
            };
        }
        if (Yp4ZVCu[0] >= 65 && 90 >= Yp4ZVCu[0] || Yp4ZVCu[0] >= 97 && Yp4ZVCu[0] <= 122 || Yp4ZVCu[0] == 95) {
            int vBTpE52 = 1;
            while (vBTpE52 < NQq1WlIMFJv) {
                if (Yp4ZVCu[vBTpE52] >= 65 && Yp4ZVCu[vBTpE52] <= 90 || Yp4ZVCu[vBTpE52] >= 97 && Yp4ZVCu[vBTpE52] <= 122 || Yp4ZVCu[vBTpE52] == 95 || Yp4ZVCu[vBTpE52] >= 48 && Yp4ZVCu[vBTpE52] <= 57) {
                    flag = 1;
                }
                else
                    flag = 0;
                vBTpE52++;
                uE7Ja5 = uE7Ja5 * flag;
            };
        }
        else
            uE7Ja5 = 0;
        NQq1WlIMFJv = 0;
        cout << uE7Ja5 << endl;
        uE7Ja5 = 1;
        {
            int Mtw0OV = 0;
            while (Mtw0OV < 81) {
                Mtw0OV++;
                Yp4ZVCu[81] = 0;
                aALOCjwMsF[81] = 0;
            };
        };
    }
    return 0;
}

