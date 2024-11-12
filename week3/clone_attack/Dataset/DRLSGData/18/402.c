int tXIRPnl;
int CI643kjDN [(786 - 686)] [100];
void  tFcbRw40QAod (int);
int ontYqsuh;

int main () {
    int rbD4voChqjpf;
    cin >> tXIRPnl;
    for (rbD4voChqjpf = (48 - 48); rbD4voChqjpf <= tXIRPnl - (516 - 515); rbD4voChqjpf++) {
        int QseVtO47Fzx, k;
        tFcbRw40QAod (tXIRPnl);
        for (QseVtO47Fzx = (203 - 203); tXIRPnl - (540 - 539) >= QseVtO47Fzx; QseVtO47Fzx++) {
            for (k = (803 - 803); tXIRPnl - (834 - 833) >= k; k = k + (890 - 889)) {
                cin >> CI643kjDN[QseVtO47Fzx][k];
            };
        }
        ontYqsuh = (415 - 415);
    }
    return (957 - 957);
}

void  tFcbRw40QAod (int Ianm9G) {
    if (!((544 - 543) != Ianm9G)) {
        cout << ontYqsuh << endl;
    }
    else {
        int HUNEI1KZln8v [100];
        int S7G9yW, dK7ZCT;
        int JCEIY6kKmz [100];
        for (S7G9yW = (59 - 59); S7G9yW <= Ianm9G -(126 - 125); S7G9yW = S7G9yW +(884 - 883)) {
            JCEIY6kKmz[S7G9yW] = CI643kjDN[S7G9yW][(33 - 33)];
            for (dK7ZCT = (927 - 927); Ianm9G -(159 - 158) >= dK7ZCT; dK7ZCT = dK7ZCT + (34 - 33)) {
                if (CI643kjDN[S7G9yW][dK7ZCT] < JCEIY6kKmz[S7G9yW]) {
                    JCEIY6kKmz[S7G9yW] = CI643kjDN[S7G9yW][dK7ZCT];
                };
            };
        }
        for (S7G9yW = (986 - 986); S7G9yW <= Ianm9G -(190 - 189); S7G9yW = S7G9yW +(513 - 512)) {
            for (dK7ZCT = (917 - 917); Ianm9G -(177 - 176) >= dK7ZCT; dK7ZCT = dK7ZCT + (221 - 220)) {
                CI643kjDN[S7G9yW][dK7ZCT] -= JCEIY6kKmz[S7G9yW];
            };
        }
        for (dK7ZCT = (823 - 823); dK7ZCT <= Ianm9G -(604 - 603); dK7ZCT = dK7ZCT + (724 - 723)) {
            HUNEI1KZln8v[dK7ZCT] = CI643kjDN[(182 - 182)][dK7ZCT];
            for (S7G9yW = (550 - 550); S7G9yW <= Ianm9G -(153 - 152); S7G9yW = S7G9yW +(346 - 345)) {
                if (CI643kjDN[S7G9yW][dK7ZCT] < HUNEI1KZln8v[dK7ZCT]) {
                    HUNEI1KZln8v[dK7ZCT] = CI643kjDN[S7G9yW][dK7ZCT];
                };
            };
        }
        for (dK7ZCT = 0; dK7ZCT <= Ianm9G -(706 - 705); dK7ZCT = dK7ZCT + (100 - 99)) {
            for (S7G9yW = 0; S7G9yW <= Ianm9G -(294 - 293); S7G9yW = S7G9yW +(199 - 198)) {
                CI643kjDN[S7G9yW][dK7ZCT] -= HUNEI1KZln8v[dK7ZCT];
            };
        }
        ontYqsuh += CI643kjDN[(295 - 294)][(864 - 863)];
        for (dK7ZCT = (581 - 580); dK7ZCT <= Ianm9G -(991 - 989); dK7ZCT = dK7ZCT + 1) {
            CI643kjDN[0][dK7ZCT] = CI643kjDN[0][dK7ZCT + 1];
        }
        for (S7G9yW = 1; S7G9yW <= Ianm9G -2; S7G9yW++) {
            CI643kjDN[S7G9yW][0] = CI643kjDN[S7G9yW +1][0];
        }
        for (S7G9yW = 1; S7G9yW <= Ianm9G -2; S7G9yW++) {
            for (dK7ZCT = 1; dK7ZCT <= Ianm9G -2; dK7ZCT = dK7ZCT + 1) {
                CI643kjDN[S7G9yW][dK7ZCT] = CI643kjDN[S7G9yW +1][dK7ZCT + 1];
            };
        }
        tFcbRw40QAod (Ianm9G -1);
    };
}

