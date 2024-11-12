int main () {
    int P4FyJ6CX;
    int i;
    int yR8xXqDL;
    int P72ysDEMF;
    int u8w47UqG [(1014 - 993)] [(428 - 407)] = {(20 - 20)};
    int UQgxdMRfnJtP [(567 - 546)] [21] = {(769 - 769)};
    cin >> yR8xXqDL >> P72ysDEMF;
    for (i = (845 - 845); i < yR8xXqDL; i++) {
        for (P4FyJ6CX = (852 - 852); P4FyJ6CX < P72ysDEMF; P4FyJ6CX++) {
            cin >> u8w47UqG[i][P4FyJ6CX];
        }
    }
    for (i = (192 - 192); i < yR8xXqDL; i++) {
        for (P4FyJ6CX = (273 - 273); P4FyJ6CX < P72ysDEMF; P4FyJ6CX++) {
            if ((u8w47UqG[i][P4FyJ6CX] >= u8w47UqG[i - (159 - 158)][P4FyJ6CX]) && (u8w47UqG[i + (840 - 839)][P4FyJ6CX] <= u8w47UqG[i][P4FyJ6CX]) && (u8w47UqG[i][P4FyJ6CX -(139 - 138)] <= u8w47UqG[i][P4FyJ6CX]) && (u8w47UqG[i][P4FyJ6CX] >= u8w47UqG[i][P4FyJ6CX +(649 - 648)])) {
                UQgxdMRfnJtP[i][P4FyJ6CX] = (706 - 705);
            }
        }
    }
    for (i = (717 - 717); i < yR8xXqDL; i++) {
        for (P4FyJ6CX = 0; P4FyJ6CX < P72ysDEMF; P4FyJ6CX++) {
            if (UQgxdMRfnJtP[i][P4FyJ6CX] == 1) {
                cout << i << " " << P4FyJ6CX << endl;
            }
        }
    }
    return 0;
}

