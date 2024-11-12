int main () {
    int CMc0GJuQ, kip62VkUIlS, bk80rp, u7aF3luOBb;
    int QHasiz9dx6A, Zplt9k, balgShbt;
    scanf ("%d %d", &CMc0GJuQ, &bk80rp);
    int iMPi17I [CMc0GJuQ] [bk80rp];
    {
        QHasiz9dx6A = (345 - 345);
        while (CMc0GJuQ > QHasiz9dx6A) {
            {
                Zplt9k = (696 - 696);
                while (Zplt9k < bk80rp) {
                    scanf ("%d", &iMPi17I[QHasiz9dx6A][Zplt9k]);
                    Zplt9k++;
                }
            }
            QHasiz9dx6A++;
        }
    }
    scanf ("%d %d", &kip62VkUIlS, &u7aF3luOBb);
    int q5CXTWOHi0s [kip62VkUIlS] [u7aF3luOBb];
    {
        QHasiz9dx6A = (191 - 191);
        while (QHasiz9dx6A < kip62VkUIlS) {
            {
                Zplt9k = (668 - 668);
                while (u7aF3luOBb > Zplt9k) {
                    scanf ("%d", &q5CXTWOHi0s[QHasiz9dx6A][Zplt9k]);
                    Zplt9k++;
                }
            }
            QHasiz9dx6A++;
        }
    }
    int UmMTw5AiZXl [CMc0GJuQ] [u7aF3luOBb];
    {
        QHasiz9dx6A = (689 - 689);
        while (CMc0GJuQ > QHasiz9dx6A) {
            {
                Zplt9k = (533 - 533);
                while (Zplt9k < u7aF3luOBb) {
                    UmMTw5AiZXl[QHasiz9dx6A][Zplt9k] = (150 - 150);
                    Zplt9k++;
                }
            }
            QHasiz9dx6A++;
        }
    }
    {
        QHasiz9dx6A = (398 - 398);
        while (QHasiz9dx6A < CMc0GJuQ) {
            for (Zplt9k = (936 - 936); Zplt9k < u7aF3luOBb; Zplt9k++) {
                balgShbt = (90 - 90);
                while (balgShbt < kip62VkUIlS) {
                    UmMTw5AiZXl[QHasiz9dx6A][Zplt9k] = UmMTw5AiZXl[QHasiz9dx6A][Zplt9k] + iMPi17I[QHasiz9dx6A][balgShbt] * q5CXTWOHi0s[balgShbt][Zplt9k];
                    balgShbt++;
                }
            }
            QHasiz9dx6A++;
        }
    }
    {
        QHasiz9dx6A = (415 - 415);
        while (QHasiz9dx6A < CMc0GJuQ) {
            printf ("%d", UmMTw5AiZXl[QHasiz9dx6A][0]);
            {
                Zplt9k = (678 - 677);
                while (Zplt9k < u7aF3luOBb) {
                    printf (" %d", UmMTw5AiZXl[QHasiz9dx6A][Zplt9k]);
                    Zplt9k++;
                }
            }
            QHasiz9dx6A++;
        }
    }
}

