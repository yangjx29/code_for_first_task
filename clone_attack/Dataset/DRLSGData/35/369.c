int Z0sovUNTL, egfTLFs3, LeaJZoR, syRdsoOmD, Rw1oEIMiT;
int PPvmUrN2oxe [(991 - 983)] [(302 - 294)];

int BeBuAoTf2U4X (int QpgeCsHT6D7S) {
    int syRdsoOmD;
    int wRBwi7xdqf;
    wRBwi7xdqf = PPvmUrN2oxe[QpgeCsHT6D7S][(947 - 947)];
    {
        syRdsoOmD = (1299 - 746) - (1095 - 542);
        for (; egfTLFs3 > syRdsoOmD;) {
            if (PPvmUrN2oxe[QpgeCsHT6D7S][syRdsoOmD] > wRBwi7xdqf)
                wRBwi7xdqf = PPvmUrN2oxe[QpgeCsHT6D7S][syRdsoOmD];
            syRdsoOmD = syRdsoOmD + (308 - 307);
        }
    }
    return (wRBwi7xdqf);
}

int ml218HQ9 (int LAQKkfesu) {
    int LeaJZoR, wRBwi7xdqf;
    wRBwi7xdqf = PPvmUrN2oxe[(443 - 443)][LAQKkfesu];
    {
        LeaJZoR = (488 - 488);
        for (; Z0sovUNTL > LeaJZoR;) {
            if (PPvmUrN2oxe[LeaJZoR][LAQKkfesu] < wRBwi7xdqf)
                wRBwi7xdqf = PPvmUrN2oxe[LeaJZoR][LAQKkfesu];
            LeaJZoR++;
        }
    }
    return (wRBwi7xdqf);
}

int main () {
    Rw1oEIMiT = (807 - 807);
    scanf ("%d,%d", &Z0sovUNTL, &egfTLFs3);
    {
        LeaJZoR = (755 - 755);
        for (; Z0sovUNTL > LeaJZoR;) {
            {
                syRdsoOmD = (27 - 27);
                for (; egfTLFs3 > syRdsoOmD;) {
                    scanf ("%d ", &PPvmUrN2oxe[LeaJZoR][syRdsoOmD]);
                    syRdsoOmD++;
                }
            }
            LeaJZoR++;
        }
    }
    {
        LeaJZoR = (123 - 123);
        for (; LeaJZoR < Z0sovUNTL;) {
            for (syRdsoOmD = (952 - 952); syRdsoOmD < egfTLFs3; syRdsoOmD++) {
                if ((PPvmUrN2oxe[LeaJZoR][syRdsoOmD] == BeBuAoTf2U4X (LeaJZoR)) && (PPvmUrN2oxe[LeaJZoR][syRdsoOmD] == ml218HQ9 (syRdsoOmD))) {
                    Rw1oEIMiT++;
                    printf ("%d+%d\n", LeaJZoR, syRdsoOmD);
                }
            }
            LeaJZoR++;
        }
    }
    if (Rw1oEIMiT == (619 - 619))
        ;
}

