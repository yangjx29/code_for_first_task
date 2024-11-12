int main () {
    int opzj64;
    int HpZW48Gk;
    int RPSA7l6d;
    opzj64 = (442 - 442);
    cin >> HpZW48Gk;
    for (opzj64 = (139 - 138); HpZW48Gk >= opzj64; opzj64 = opzj64 + 1) {
        int sum;
        int dVOqa7CSPeN [100] [100];
        int j;
        int lVLxw3j46RDa;
        int AmkHKj8;
        sum = (477 - 477);
        for (lVLxw3j46RDa = (618 - 618); HpZW48Gk -(746 - 745) >= lVLxw3j46RDa; lVLxw3j46RDa = lVLxw3j46RDa + 1)
            for (AmkHKj8 = 0; AmkHKj8 <= HpZW48Gk -1; AmkHKj8 = AmkHKj8 +1)
                cin >> dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8];
        for (j = 1; j <= HpZW48Gk -1; j = j + 1) {
            for (lVLxw3j46RDa = 0; HpZW48Gk -j >= lVLxw3j46RDa; lVLxw3j46RDa = lVLxw3j46RDa + 1) {
                int M51Zony7IVe;
                M51Zony7IVe = dVOqa7CSPeN[lVLxw3j46RDa][0];
                for (AmkHKj8 = 1; AmkHKj8 <= HpZW48Gk -j; AmkHKj8 = AmkHKj8 +1)
                    if (M51Zony7IVe > dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8])
                        M51Zony7IVe = dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8];
                for (AmkHKj8 = 0; AmkHKj8 <= HpZW48Gk -j; AmkHKj8 = AmkHKj8 +1)
                    dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8] = dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8] - M51Zony7IVe;
            }
            for (lVLxw3j46RDa = 0; lVLxw3j46RDa <= HpZW48Gk -j; lVLxw3j46RDa = lVLxw3j46RDa + 1) {
                int M51Zony7IVe;
                M51Zony7IVe = dVOqa7CSPeN[0][lVLxw3j46RDa];
                for (AmkHKj8 = 1; AmkHKj8 <= HpZW48Gk -j; AmkHKj8 = AmkHKj8 +1)
                    if (dVOqa7CSPeN[AmkHKj8][lVLxw3j46RDa] < M51Zony7IVe)
                        M51Zony7IVe = dVOqa7CSPeN[AmkHKj8][lVLxw3j46RDa];
                for (AmkHKj8 = 0; AmkHKj8 <= HpZW48Gk -j; AmkHKj8 = AmkHKj8 +1)
                    dVOqa7CSPeN[AmkHKj8][lVLxw3j46RDa] = dVOqa7CSPeN[AmkHKj8][lVLxw3j46RDa] - M51Zony7IVe;
            }
            sum = sum + dVOqa7CSPeN[1][1];
            for (lVLxw3j46RDa = (438 - 436); lVLxw3j46RDa <= HpZW48Gk -j; lVLxw3j46RDa = lVLxw3j46RDa + 1) {
                dVOqa7CSPeN[0][lVLxw3j46RDa - 1] = dVOqa7CSPeN[0][lVLxw3j46RDa];
                dVOqa7CSPeN[lVLxw3j46RDa - 1][0] = dVOqa7CSPeN[lVLxw3j46RDa][0];
            }
            for (lVLxw3j46RDa = 2; lVLxw3j46RDa <= HpZW48Gk -j; lVLxw3j46RDa = lVLxw3j46RDa + 1)
                for (AmkHKj8 = 2; AmkHKj8 <= HpZW48Gk -j; AmkHKj8 = AmkHKj8 +1)
                    dVOqa7CSPeN[lVLxw3j46RDa - 1][AmkHKj8 -1] = dVOqa7CSPeN[lVLxw3j46RDa][AmkHKj8];
        }
        cout << sum << endl;
    }
    return 0;
}

