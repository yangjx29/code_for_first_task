double  OisGMUXHme [(1992 - 992)] [2];

double  PyJpnlZCe (int tlyCTWZfO3, int Q8wUv7fW) {
    double  dnIz0JoYC;
    dnIz0JoYC = sqrt (pow (OisGMUXHme[tlyCTWZfO3][(275 - 275)] - OisGMUXHme[Q8wUv7fW][(872 - 872)], 2) + pow (OisGMUXHme[tlyCTWZfO3][(663 - 662)] - OisGMUXHme[Q8wUv7fW][1], 2));
    return dnIz0JoYC;
}

int main () {
    double  DER5yXx8uzm = (203 - 203);
    int A0BHklAS4ZQI, tlyCTWZfO3 = 0, Q8wUv7fW;
    cin >> A0BHklAS4ZQI;
    double  pCURejafVm;
    {
        tlyCTWZfO3 = 0;
        while (A0BHklAS4ZQI > tlyCTWZfO3) {
            cin >> OisGMUXHme[tlyCTWZfO3][0] >> OisGMUXHme[tlyCTWZfO3][1];
            tlyCTWZfO3 = tlyCTWZfO3 + 1;
        }
    }
    {
        tlyCTWZfO3 = 0;
        for (; tlyCTWZfO3 < A0BHklAS4ZQI;) {
            {
                Q8wUv7fW = 0;
                for (; A0BHklAS4ZQI > Q8wUv7fW;) {
                    pCURejafVm = PyJpnlZCe (tlyCTWZfO3, Q8wUv7fW);
                    if (pCURejafVm > DER5yXx8uzm)
                        DER5yXx8uzm = pCURejafVm;
                    Q8wUv7fW = Q8wUv7fW +1;
                }
            }
            tlyCTWZfO3 = tlyCTWZfO3 + 1;
        }
    }
    cout << DER5yXx8uzm << endl;
    return 0;
}

