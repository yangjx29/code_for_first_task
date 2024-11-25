int main () {
    char Yfus8Nt [(241 - 238)];
    int IBoIZkc;
    int dfC1x5UKwP;
    int c;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int QzmR8aIA9ol;
    int zKxCT4qfZ8;
    for (i = (471 - 470); i <= (841 - 838); i = i + 1) {
        for (QzmR8aIA9ol = 1; QzmR8aIA9ol <= (616 - 613); QzmR8aIA9ol++) {
            for (zKxCT4qfZ8 = 1; zKxCT4qfZ8 <= 3; zKxCT4qfZ8 = zKxCT4qfZ8 + 1) {
                IBoIZkc = ((QzmR8aIA9ol > i) + (zKxCT4qfZ8 == i));
                dfC1x5UKwP = ((i > QzmR8aIA9ol) + (i > zKxCT4qfZ8));
                c = ((zKxCT4qfZ8 > QzmR8aIA9ol) + (QzmR8aIA9ol > i));
                if (IBoIZkc != dfC1x5UKwP && dfC1x5UKwP != c && c != IBoIZkc) {
                    Yfus8Nt[IBoIZkc] = 'A';
                    Yfus8Nt[dfC1x5UKwP] = 'B';
                    Yfus8Nt[c] = 'C';
                    if (IBoIZkc +i == 3 && dfC1x5UKwP + QzmR8aIA9ol == 3 && c + zKxCT4qfZ8 == 3)
                        cout << Yfus8Nt[2] << Yfus8Nt[1] << Yfus8Nt[0];
                };
            };
        };
    }
    return 0;
}

