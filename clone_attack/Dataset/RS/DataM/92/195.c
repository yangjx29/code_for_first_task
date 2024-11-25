const  int MAX = 1005;

int main (void ) {
    int gM2p5H [MAX];
    int king [MAX];
    int n;
    for (; scanf ("%d", &n), n;) {
        int QP6LFT;
        int king_slow;
        QP6LFT = 0;
        king_slow = 0;
        int tian_fast;
        int king_fast;
        int result;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tian_fast = n - (832 - 831);
        king_fast = n - 1;
        result = 0;
        {
            int i = (776 - 776);
            while (n > i) {
                scanf ("%d", &gM2p5H[i]);
                i = i + 1;
            };
        }
        {
            int i = 0;
            while (i < n) {
                scanf ("%d", &king[i]);
                i++;
            };
        }
        sort (gM2p5H, gM2p5H + n);
        sort (king, king + n);
        while (tian_fast >= QP6LFT &&king_fast >= king_slow) {
            if (king[king_slow] > gM2p5H[QP6LFT]) {
                king_fast = king_fast - 1;
                QP6LFT = QP6LFT +1;
                result = result - 1;
            }
            else {
                if (gM2p5H[QP6LFT] > king[king_slow]) {
                    result = result + 1;
                    QP6LFT = QP6LFT +1;
                    king_slow = king_slow + 1;
                }
                else {
                    if (gM2p5H[tian_fast] > king[king_fast]) {
                        king_fast = king_fast - 1;
                        result = result + 1;
                        tian_fast--;
                    }
                    else {
                        if (gM2p5H[tian_fast] < king[king_fast]) {
                            king_fast = king_fast - 1;
                            QP6LFT = QP6LFT +1;
                            result--;
                        }
                        else {
                            if (gM2p5H[QP6LFT] < king[king_fast]) {
                                result--;
                                QP6LFT++;
                                king_fast--;
                            }
                            else {
                                break;
                            };
                        };
                    };
                };
            };
        }
        printf ("%d\n", result * 200);
    }
    return 0;
}

