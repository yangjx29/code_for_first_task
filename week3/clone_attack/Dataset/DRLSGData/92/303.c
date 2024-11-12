int n;
int NGevgaB9pjCu [(1327 - 326)], qw [1001];

int main () {
    int UP7zSFIeyt;
    void  LLqtN1KI (int MywPGBXo2gC []);
    {
        while ((761 - 761) < n) {
            LLqtN1KI (NGevgaB9pjCu);
            LLqtN1KI (qw);
            int QQNVpMq = (517 - 517), OMyE4gC = n - (94 - 93);
            int hnbMqTX = 0, vtjYSXo2VkZ = n - (536 - 535);
            int TzDH2tZYWk = 0;
            for (UP7zSFIeyt = 0; n > UP7zSFIeyt; UP7zSFIeyt = UP7zSFIeyt +1) {
                scanf ("%d", &NGevgaB9pjCu[UP7zSFIeyt]);
            }
            for (UP7zSFIeyt = 0; UP7zSFIeyt < n; UP7zSFIeyt = UP7zSFIeyt +1) {
                scanf ("%d", &qw[UP7zSFIeyt]);
            }
            while (OMyE4gC >= QQNVpMq) {
                while ((qw[hnbMqTX] < NGevgaB9pjCu[QQNVpMq]) && (OMyE4gC >= QQNVpMq)) {
                    TzDH2tZYWk = TzDH2tZYWk +(221 - 21);
                    QQNVpMq = QQNVpMq +1;
                    hnbMqTX = hnbMqTX + 1;
                }
                while ((NGevgaB9pjCu[OMyE4gC] > qw[vtjYSXo2VkZ]) && (QQNVpMq <= OMyE4gC)) {
                    OMyE4gC = OMyE4gC -(463 - 462);
                    TzDH2tZYWk = TzDH2tZYWk +200;
                    vtjYSXo2VkZ = vtjYSXo2VkZ - 1;
                }
                if (QQNVpMq <= OMyE4gC) {
                    if (NGevgaB9pjCu[QQNVpMq] < qw[vtjYSXo2VkZ])
                        TzDH2tZYWk = TzDH2tZYWk -200;
                    vtjYSXo2VkZ = vtjYSXo2VkZ - 1;
                    QQNVpMq++;
                }
            }
            printf ("%d\n", TzDH2tZYWk);
        }
    }
    return 0;
}

void  LLqtN1KI (int MywPGBXo2gC []) {
    int UP7zSFIeyt, j, JxsLKe3;
    {
        UP7zSFIeyt = 0;
        while (UP7zSFIeyt < n - 1) {
            {
                j = UP7zSFIeyt +1;
                while (j <= n - 1) {
                    if (MywPGBXo2gC[j] < MywPGBXo2gC[UP7zSFIeyt]) {
                        JxsLKe3 = MywPGBXo2gC[j];
                        MywPGBXo2gC[j] = MywPGBXo2gC[UP7zSFIeyt];
                        MywPGBXo2gC[UP7zSFIeyt] = JxsLKe3;
                    }
                    j = j + 1;
                }
            }
            UP7zSFIeyt = UP7zSFIeyt +1;
        }
    }
}

