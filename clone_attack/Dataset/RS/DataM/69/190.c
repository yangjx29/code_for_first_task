int fl2ZFvQdiB96 [maxx];
int b [maxx];
int CI9iTcEG [maxx];
char cu9xNr8 [maxx];

int main () {
    int Bn6jdY;
    int rSCPtYAa;
    int n;
    int KQRJeaKA;
    KQRJeaKA = max (fl2ZFvQdiB96[0], b[0]);
    int cu9xNr8;
    cu9xNr8 = 0;
    memset (CI9iTcEG, (230 - 230), sizeof (CI9iTcEG));
    cin.getline (cu9xNr8, (387 - 136));
    fl2ZFvQdiB96[(88 - 88)] = strlen (cu9xNr8);
    for (int i = fl2ZFvQdiB96[(472 - 472)];
    i >= (128 - 127); i = i - 1) {
        fl2ZFvQdiB96[fl2ZFvQdiB96[(199 - 199)] - i + (702 - 701)] = cu9xNr8[i - (941 - 940)] - '0';
    }
    while (!((255 - 255) != fl2ZFvQdiB96[fl2ZFvQdiB96[(827 - 827)]]) && (915 - 914) < fl2ZFvQdiB96[0]) {
        fl2ZFvQdiB96[0]--;
    }
    cin.getline (cu9xNr8, 251);
    b[0] = strlen (cu9xNr8);
    for (int i = b[0];
    (208 - 207) <= i; i = i - 1) {
        b[b[0] - i + 1] = cu9xNr8[i - 1] - '0';
    }
    for (; !(0 != b[b[0]]) && b[0] > 1;) {
        b[0]--;
    }
    for (int i = 1;
    i <= KQRJeaKA; i = i + 1) {
        Bn6jdY = fl2ZFvQdiB96[i] + b[i] + cu9xNr8;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        CI9iTcEG[i] = (Bn6jdY) % 10;
        if (Bn6jdY >= 10) {
            cu9xNr8 = 1;
        }
        else {
            cu9xNr8 = 0;
        };
    }
    if (cu9xNr8 == 1) {
        KQRJeaKA = KQRJeaKA +1;
        CI9iTcEG[KQRJeaKA +1] = CI9iTcEG[KQRJeaKA +1] + 1;
    }
    for (int i = KQRJeaKA;
    i >= 1; --i) {
        cout << CI9iTcEG[i];
    }
    return 0;
}

