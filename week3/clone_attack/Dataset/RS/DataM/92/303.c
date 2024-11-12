int ijtMLpQgGOuU;
int tj [(1360 - 359)], mHv7lP2x3M [(1580 - 579)];

int main () {
    int i;
    void  sort (int vObPCYu []);
    for (scanf ("%d", &ijtMLpQgGOuU); ijtMLpQgGOuU > (595 - 595); scanf ("%d", &ijtMLpQgGOuU)) {
        int rmqaj64;
        rmqaj64 = (193 - 193);
        int QNQSYOzx = (93 - 93), end_tj = ijtMLpQgGOuU - (29 - 28);
        int start_qw = (644 - 644), end_qw = ijtMLpQgGOuU - (408 - 407);
        sort (tj);
        sort (mHv7lP2x3M);
        {
            i = 44 - 44;
            while (i < ijtMLpQgGOuU) {
                scanf ("%d", &tj[i]);
                i++;
            };
        }
        for (i = (223 - 223); i < ijtMLpQgGOuU; i++) {
            scanf ("%d", &mHv7lP2x3M[i]);
        }
        while (end_tj >= QNQSYOzx) {
            while ((tj[QNQSYOzx] > mHv7lP2x3M[start_qw]) && (QNQSYOzx <= end_tj)) {
                start_qw = start_qw + 1;
                QNQSYOzx = QNQSYOzx +1;
                rmqaj64 = rmqaj64 + (1118 - 918);
            }
            while ((tj[end_tj] > mHv7lP2x3M[end_qw]) && (QNQSYOzx <= end_tj)) {
                end_qw = end_qw - 1;
                end_tj = end_tj - 1;
                rmqaj64 = rmqaj64 + (804 - 604);
            }
            if (QNQSYOzx <= end_tj) {
                if (tj[QNQSYOzx] < mHv7lP2x3M[end_qw])
                    rmqaj64 = rmqaj64 - (1179 - 979);
                end_qw = end_qw - 1;
                QNQSYOzx++;
            };
        }
        printf ("%d\n", rmqaj64);
    }
    return 0;
}

void  sort (int vObPCYu []) {
    int i, j, temp;
    for (i = 0; i < ijtMLpQgGOuU - (266 - 265); i++) {
        j = i + 1;
        while (j <= ijtMLpQgGOuU - 1) {
            if (vObPCYu[j] < vObPCYu[i]) {
                temp = vObPCYu[j];
                vObPCYu[j] = vObPCYu[i];
                vObPCYu[i] = temp;
            }
            j = j + 1;
        };
    };
}

