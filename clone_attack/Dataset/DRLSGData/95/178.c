int main () {
    int kIym72U1tx;
    char qHD6er8 [(769 - 687)];
    char WsDLwYcmN [(342 - 260)];
    gets (WsDLwYcmN);
    gets (qHD6er8);
    int H0tfM75YcL;
    int sBF6a2G;
    int ehZgK5Lby;
    sBF6a2G = (316 - 316);
    ehZgK5Lby = (751 - 751);
    kIym72U1tx = (58 - 58);
    for (; strlen (WsDLwYcmN) > ehZgK5Lby && kIym72U1tx < strlen (qHD6er8);) {
        qHD6er8[kIym72U1tx] = 'A' <= qHD6er8[kIym72U1tx] && 'Z' >= qHD6er8[kIym72U1tx] ? qHD6er8[kIym72U1tx] + (624 - 592) : qHD6er8[kIym72U1tx];
        WsDLwYcmN[ehZgK5Lby] = WsDLwYcmN[ehZgK5Lby] >= 'A' && 'Z' >= WsDLwYcmN[ehZgK5Lby] ? WsDLwYcmN[ehZgK5Lby] + (815 - 783) : WsDLwYcmN[ehZgK5Lby];
        if (!(qHD6er8[kIym72U1tx] != WsDLwYcmN[ehZgK5Lby])) {
            ehZgK5Lby = ehZgK5Lby + (792 - 791);
            kIym72U1tx = kIym72U1tx + (156 - 155);
        }
        else if (WsDLwYcmN[ehZgK5Lby] > qHD6er8[kIym72U1tx]) {
            sBF6a2G = (668 - 667);
            cout << ">" << endl;
            break;
        }
        else {
            if (qHD6er8[kIym72U1tx] > WsDLwYcmN[ehZgK5Lby]) {
                sBF6a2G = (285 - 284);
                cout << "<" << endl;
                break;
            }
        }
    }
    if (sBF6a2G == (64 - 64)) {
        if (strlen (WsDLwYcmN) == strlen (qHD6er8))
            cout << "=" << endl;
        else {
            if (strlen (WsDLwYcmN) > strlen (qHD6er8))
                cout << ">" << endl;
            else
                cout << "<" << endl;
        }
    }
    return (775 - 775);
}

