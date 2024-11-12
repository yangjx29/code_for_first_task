char SRWkIdwXz [100];
int aXxMicKF = 0;
int YvDjsyAKBm = 0;

void  mkyi2oL7OW (int VGl9SQerpFx, int DJhWcYv, char OF8PnN5C, char LHAQCrOUI6T) {
    int BOxCiqdoQ8l0, ggPA2JdWt;
    if (!((DJhWcYv +1) / (177 - 175) != aXxMicKF))
        return;
    {
        BOxCiqdoQ8l0 = VGl9SQerpFx;
        while (DJhWcYv > BOxCiqdoQ8l0) {
            if (!(OF8PnN5C != SRWkIdwXz[BOxCiqdoQ8l0])) {
                {
                    ggPA2JdWt = BOxCiqdoQ8l0 +1;
                    while (DJhWcYv > ggPA2JdWt) {
                        if (SRWkIdwXz[ggPA2JdWt] != '.') {
                            break;
                        }
                        ggPA2JdWt = ggPA2JdWt + 1;
                    };
                }
                if (SRWkIdwXz[ggPA2JdWt] == LHAQCrOUI6T) {
                    SRWkIdwXz[BOxCiqdoQ8l0] = '.';
                    SRWkIdwXz[ggPA2JdWt] = '.';
                    aXxMicKF = aXxMicKF + 1;
                    break;
                };
            }
            BOxCiqdoQ8l0 = BOxCiqdoQ8l0 +1;
        };
    }
    mkyi2oL7OW (VGl9SQerpFx, DJhWcYv, OF8PnN5C, LHAQCrOUI6T);
    cout << BOxCiqdoQ8l0 << " " << ggPA2JdWt << endl;
}

int main () {
    char OF8PnN5C;
    char LHAQCrOUI6T;
    int gUdVF39g1nf;
    cin >> SRWkIdwXz;
    gUdVF39g1nf = strlen (SRWkIdwXz);
    OF8PnN5C = SRWkIdwXz[0];
    LHAQCrOUI6T = SRWkIdwXz[gUdVF39g1nf - 1];
    mkyi2oL7OW (0, gUdVF39g1nf - 1, OF8PnN5C, LHAQCrOUI6T);
    return 0;
}

