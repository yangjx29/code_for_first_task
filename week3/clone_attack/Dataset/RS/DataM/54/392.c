int main () {
    int ibIiNWeQmP3;
    int VRpChueK;
    double  jgf4QPDNW;
    int rhKtpXM0oQf;
    int kEXjSJ36Z, dl8X6o, MA4Kojq;
    rhKtpXM0oQf = 0;
    scanf ("%d %d", &kEXjSJ36Z, &dl8X6o);
    for (ibIiNWeQmP3 = 1; rhKtpXM0oQf < kEXjSJ36Z; ibIiNWeQmP3 = ibIiNWeQmP3 + 1) {
        MA4Kojq = ibIiNWeQmP3;
        for (; rhKtpXM0oQf < kEXjSJ36Z; rhKtpXM0oQf = rhKtpXM0oQf + 1) {
            jgf4QPDNW = (MA4Kojq +dl8X6o - (double ) dl8X6o / kEXjSJ36Z) * kEXjSJ36Z / (double ) (kEXjSJ36Z - 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            VRpChueK = (int) jgf4QPDNW;
            if (jgf4QPDNW - VRpChueK > 0) {
                rhKtpXM0oQf = 0;
                break;
            }
            else {
                MA4Kojq = VRpChueK;
            };
        };
    }
    printf ("%d\n", MA4Kojq);
    return 0;
}

