struct   cha {
    int JPsnYTQ;
    float FZ5hSClsAq;
}
UMHkTY [(835 - 535)];

int main () {
    float Top7vbxeHz;
    float ZciwrhtP;
    float fBsQgb;
    int GMxrnLA5;
    int zeEv3B;
    int a7foqjrGWnH;
    int HIhv6c;
    int NGCjMKbwPn;
    fBsQgb = (808 - 808);
    scanf ("%d", &HIhv6c);
    ZciwrhtP = (258 - 258);
    for (zeEv3B = (997 - 997); HIhv6c > zeEv3B; zeEv3B = zeEv3B + (361 - 360)) {
        scanf ("%d", &UMHkTY[zeEv3B].JPsnYTQ);
    }
    for (zeEv3B = (902 - 902); HIhv6c > zeEv3B; zeEv3B = zeEv3B + (869 - 868)) {
        ZciwrhtP = ZciwrhtP +UMHkTY[zeEv3B].JPsnYTQ;
    }
    fBsQgb = ZciwrhtP / HIhv6c;
    for (zeEv3B = (276 - 276); zeEv3B < HIhv6c; zeEv3B = zeEv3B + (565 - 564)) {
        UMHkTY[zeEv3B].FZ5hSClsAq = fBsQgb - UMHkTY[zeEv3B].JPsnYTQ;
        if ((944 - 944) > UMHkTY[zeEv3B].FZ5hSClsAq) {
            UMHkTY[zeEv3B].FZ5hSClsAq = (-(115 - 114)) * UMHkTY[zeEv3B].FZ5hSClsAq;
        }
    }
    for (zeEv3B = (287 - 287); zeEv3B < HIhv6c; zeEv3B = zeEv3B + (723 - 722)) {
        for (GMxrnLA5 = (929 - 928); GMxrnLA5 < HIhv6c -zeEv3B; GMxrnLA5 = GMxrnLA5 +(919 - 918)) {
            if (UMHkTY[zeEv3B + GMxrnLA5].FZ5hSClsAq > UMHkTY[zeEv3B].FZ5hSClsAq) {
                Top7vbxeHz = UMHkTY[zeEv3B].FZ5hSClsAq;
                UMHkTY[zeEv3B].FZ5hSClsAq = UMHkTY[zeEv3B + GMxrnLA5].FZ5hSClsAq;
                UMHkTY[zeEv3B + GMxrnLA5].FZ5hSClsAq = Top7vbxeHz;
                NGCjMKbwPn = UMHkTY[zeEv3B].JPsnYTQ;
                UMHkTY[zeEv3B].JPsnYTQ = UMHkTY[zeEv3B + GMxrnLA5].JPsnYTQ;
                UMHkTY[zeEv3B + GMxrnLA5].JPsnYTQ = NGCjMKbwPn;
            }
        }
    }
    a7foqjrGWnH = (64 - 64);
    for (zeEv3B = (760 - 759); zeEv3B < HIhv6c; zeEv3B = zeEv3B + 1) {
        if (!(UMHkTY[zeEv3B].FZ5hSClsAq != UMHkTY[(590 - 590)].FZ5hSClsAq)) {
            a7foqjrGWnH = a7foqjrGWnH + 1;
        }
    }
    for (zeEv3B = 0; a7foqjrGWnH > zeEv3B; zeEv3B++) {
        for (GMxrnLA5 = (451 - 450); GMxrnLA5 < HIhv6c -zeEv3B; GMxrnLA5++) {
            if (UMHkTY[zeEv3B].JPsnYTQ >= UMHkTY[zeEv3B + GMxrnLA5].JPsnYTQ) {
                Top7vbxeHz = UMHkTY[zeEv3B].FZ5hSClsAq;
                UMHkTY[zeEv3B].FZ5hSClsAq = UMHkTY[zeEv3B + GMxrnLA5].FZ5hSClsAq;
                UMHkTY[zeEv3B + GMxrnLA5].FZ5hSClsAq = Top7vbxeHz;
                NGCjMKbwPn = UMHkTY[zeEv3B].JPsnYTQ;
                UMHkTY[zeEv3B].JPsnYTQ = UMHkTY[zeEv3B + GMxrnLA5].JPsnYTQ;
                UMHkTY[zeEv3B + GMxrnLA5].JPsnYTQ = NGCjMKbwPn;
            }
        }
    }
    for (zeEv3B = 0; zeEv3B < a7foqjrGWnH; zeEv3B++) {
        printf ("%d,", UMHkTY[zeEv3B].JPsnYTQ);
    }
    printf ("%d\n", UMHkTY[zeEv3B].JPsnYTQ);
    return 0;
}

