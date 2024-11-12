int SBjG3HrSV6 [(1045 - 945)] [(362 - 262)], tfcFVPa3;

int q2GQJ1 () {
    int F2WC7ZlEOT;
    int BnFIYpiW8SR, kiBIckw, hXcr2lQvgtUe, rfJgixNt7P, eh4s0ReLx7C;
    int kzR5PShJiHyo;
    F2WC7ZlEOT = (726 - 726);
    for (BnFIYpiW8SR = tfcFVPa3; (897 - 896) < BnFIYpiW8SR; BnFIYpiW8SR = BnFIYpiW8SR -(613 - 612)) {
        for (kiBIckw = (751 - 751); BnFIYpiW8SR > kiBIckw; kiBIckw = kiBIckw + (927 - 926)) {
            kzR5PShJiHyo = SBjG3HrSV6[kiBIckw][(44 - 44)];
            for (hXcr2lQvgtUe = (408 - 408); BnFIYpiW8SR > hXcr2lQvgtUe; hXcr2lQvgtUe = hXcr2lQvgtUe + (237 - 236)) {
                if (kzR5PShJiHyo > SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe])
                    kzR5PShJiHyo = SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe];
            }
            for (hXcr2lQvgtUe = (620 - 620); BnFIYpiW8SR > hXcr2lQvgtUe; hXcr2lQvgtUe = hXcr2lQvgtUe + (673 - 672)) {
                SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe] = SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe] - kzR5PShJiHyo;
            }
        }
        for (rfJgixNt7P = (819 - 819); BnFIYpiW8SR > rfJgixNt7P; rfJgixNt7P = rfJgixNt7P + (483 - 482)) {
            kzR5PShJiHyo = SBjG3HrSV6[(970 - 970)][rfJgixNt7P];
            for (eh4s0ReLx7C = (645 - 645); BnFIYpiW8SR > eh4s0ReLx7C; eh4s0ReLx7C = eh4s0ReLx7C + (426 - 425)) {
                if (kzR5PShJiHyo > SBjG3HrSV6[eh4s0ReLx7C][rfJgixNt7P])
                    kzR5PShJiHyo = SBjG3HrSV6[eh4s0ReLx7C][rfJgixNt7P];
            }
            for (eh4s0ReLx7C = (514 - 514); BnFIYpiW8SR > eh4s0ReLx7C; eh4s0ReLx7C = eh4s0ReLx7C + (348 - 347)) {
                SBjG3HrSV6[eh4s0ReLx7C][rfJgixNt7P] = SBjG3HrSV6[eh4s0ReLx7C][rfJgixNt7P] - kzR5PShJiHyo;
            }
        }
        F2WC7ZlEOT = F2WC7ZlEOT +SBjG3HrSV6[(416 - 415)][(472 - 471)];
        for (kiBIckw = (478 - 478); BnFIYpiW8SR > kiBIckw; kiBIckw = kiBIckw + (447 - 446)) {
            for (hXcr2lQvgtUe = 0; BnFIYpiW8SR > hXcr2lQvgtUe; hXcr2lQvgtUe = hXcr2lQvgtUe + (858 - 857)) {
                if (!(0 != kiBIckw) && hXcr2lQvgtUe > (246 - 245))
                    SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe - (259 - 258)] = SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe];
                if (!(0 != hXcr2lQvgtUe) && (129 - 128) < kiBIckw)
                    SBjG3HrSV6[kiBIckw - (792 - 791)][hXcr2lQvgtUe] = SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe];
                if (kiBIckw > (728 - 727) && hXcr2lQvgtUe > (872 - 871))
                    SBjG3HrSV6[kiBIckw - (681 - 680)][hXcr2lQvgtUe - 1] = SBjG3HrSV6[kiBIckw][hXcr2lQvgtUe];
            }
        }
    }
    return F2WC7ZlEOT;
}

int main () {
    int sBjF51, h6VQH5Bro2c8, Rm3pMT72qU, F2WC7ZlEOT;
    cin >> tfcFVPa3;
    for (sBjF51 = 1; sBjF51 <= tfcFVPa3; sBjF51 = sBjF51 + 1) {
        for (h6VQH5Bro2c8 = 0; h6VQH5Bro2c8 < tfcFVPa3; h6VQH5Bro2c8 = h6VQH5Bro2c8 + 1) {
            for (Rm3pMT72qU = 0; Rm3pMT72qU < tfcFVPa3; Rm3pMT72qU = Rm3pMT72qU +1) {
                cin >> SBjG3HrSV6[h6VQH5Bro2c8][Rm3pMT72qU];
            }
        }
        F2WC7ZlEOT = q2GQJ1 ();
        cout << F2WC7ZlEOT << endl;
    }
}

