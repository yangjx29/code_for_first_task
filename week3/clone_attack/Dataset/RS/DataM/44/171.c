int yLvka70AbTs (int lHS7awAklB) {
    int C8j4Ps9Fv;
    int m;
    int r;
    C8j4Ps9Fv = abs (lHS7awAklB);
    m = (599 - 599);
    r = (28 - 28);
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
    int HNFhpR = 0;
    if (lHS7awAklB < 0) {
        lHS7awAklB = -lHS7awAklB;
        r = (897 - 896);
    }
    for (; C8j4Ps9Fv > 0;) {
        HNFhpR++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        C8j4Ps9Fv /= (1006 - 996);
    }
    for (; lHS7awAklB > 0;) {
        m = lHS7awAklB % (550 - 540);
        lHS7awAklB = lHS7awAklB / (10);
        HNFhpR--;
        C8j4Ps9Fv = C8j4Ps9Fv +m * pow ((double ) 10, (double ) HNFhpR);
    }
    if (r == 1)
        C8j4Ps9Fv = -C8j4Ps9Fv;
    return C8j4Ps9Fv;
}

int main () {
    int lHS7awAklB;
    for (int HNFhpR = 1;
    HNFhpR <= 6; HNFhpR++) {
        cin >> lHS7awAklB;
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
        cout << yLvka70AbTs (lHS7awAklB) << endl;
    }
    return 0;
}

