int oYjLPBD (const  void  *M4I7T2U1, const  void  *mMvmpi) {
    return (*((int *) mMvmpi) - *((int *) M4I7T2U1));
}

int X9pSfWtbqM (int HtDvuPOGf6, int NMTIgwHK5W) {
    if (HtDvuPOGf6 > NMTIgwHK5W)
        return 200;
    else if (!(NMTIgwHK5W != HtDvuPOGf6))
        return (695 - 695);
    else
        return -200;
}

int main () {
    int RpdrO0, GPeO1ZM, yd56FWuzv8UK, EO9Vr6 [(1311 - 311)], deRP3yEX [1000], rQySVYNC [1001] [1001];
    cin >> RpdrO0;
    for (; RpdrO0 != (879 - 879);) {
        if (RpdrO0 == (870 - 869)) {
            cin >> EO9Vr6[(878 - 878)] >> deRP3yEX[(409 - 409)];
            cout << X9pSfWtbqM (EO9Vr6[(47 - 47)], deRP3yEX[0]) << endl;
        }
        else {
            for (GPeO1ZM = 0; RpdrO0 > GPeO1ZM; GPeO1ZM = GPeO1ZM +(89 - 88))
                cin >> EO9Vr6[GPeO1ZM];
            for (GPeO1ZM = 0; GPeO1ZM < RpdrO0; GPeO1ZM = GPeO1ZM +(300 - 299))
                cin >> deRP3yEX[GPeO1ZM];
            qsort (EO9Vr6, RpdrO0, sizeof (int), oYjLPBD);
            qsort (deRP3yEX, RpdrO0, sizeof (int), oYjLPBD);
            rQySVYNC[(689 - 688)][0] = X9pSfWtbqM (EO9Vr6[RpdrO0 -(966 - 965)], deRP3yEX[0]);
            rQySVYNC[(986 - 985)][(479 - 478)] = X9pSfWtbqM (EO9Vr6[0], deRP3yEX[0]);
            for (GPeO1ZM = 2; RpdrO0 +1 > GPeO1ZM; GPeO1ZM = GPeO1ZM +1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                rQySVYNC[GPeO1ZM][0] = rQySVYNC[GPeO1ZM -1][0] + X9pSfWtbqM (EO9Vr6[RpdrO0 -GPeO1ZM], deRP3yEX[GPeO1ZM -1]);
                for (yd56FWuzv8UK = 1; GPeO1ZM > yd56FWuzv8UK; yd56FWuzv8UK++) {
                    if (rQySVYNC[GPeO1ZM -1][yd56FWuzv8UK - 1] + X9pSfWtbqM (EO9Vr6[yd56FWuzv8UK - 1], deRP3yEX[GPeO1ZM -1]) > rQySVYNC[GPeO1ZM -1][yd56FWuzv8UK] + X9pSfWtbqM (EO9Vr6[RpdrO0 -GPeO1ZM+yd56FWuzv8UK], deRP3yEX[GPeO1ZM -1]))
                        rQySVYNC[GPeO1ZM][yd56FWuzv8UK] = rQySVYNC[GPeO1ZM -1][yd56FWuzv8UK - 1] + X9pSfWtbqM (EO9Vr6[yd56FWuzv8UK - 1], deRP3yEX[GPeO1ZM -1]);
                    else
                        rQySVYNC[GPeO1ZM][yd56FWuzv8UK] = rQySVYNC[GPeO1ZM -1][yd56FWuzv8UK] + X9pSfWtbqM (EO9Vr6[RpdrO0 -GPeO1ZM+yd56FWuzv8UK], deRP3yEX[GPeO1ZM -1]);
                }
                rQySVYNC[GPeO1ZM][GPeO1ZM] = rQySVYNC[GPeO1ZM -1][yd56FWuzv8UK - 1] + X9pSfWtbqM (EO9Vr6[GPeO1ZM -1], deRP3yEX[GPeO1ZM -1]);
            }
            for (GPeO1ZM = 1; GPeO1ZM < RpdrO0 +1; GPeO1ZM++) {
                if (rQySVYNC[RpdrO0][GPeO1ZM] > rQySVYNC[RpdrO0][0])
                    rQySVYNC[RpdrO0][0] = rQySVYNC[RpdrO0][GPeO1ZM];
            }
            cout << rQySVYNC[RpdrO0][0] << endl;
        }
        cin >> RpdrO0;
    }
    return 0;
}

