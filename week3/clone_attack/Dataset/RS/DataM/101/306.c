int main () {
    int PIOkvxgpEZcF;
    int b;
    int xakDplvh;
    int ap;
    int bp;
    int cp;
    for (PIOkvxgpEZcF = 1; (176 - 173) >= PIOkvxgpEZcF; PIOkvxgpEZcF++) {
        {
            b = 1;
            while (3 >= b) {
                {
                    xakDplvh = 1;
                    while (3 >= xakDplvh) {
                        ap = (PIOkvxgpEZcF < b) + (!(PIOkvxgpEZcF != xakDplvh));
                        bp = (b < PIOkvxgpEZcF) + (xakDplvh < PIOkvxgpEZcF);
                        cp = (b < xakDplvh) + (PIOkvxgpEZcF < b);
                        if (PIOkvxgpEZcF +ap == b + bp && !(xakDplvh + cp != b + bp))
                            break;
                        xakDplvh++;
                    };
                }
                if (3 >= xakDplvh)
                    break;
                b = b + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (b <= 3)
            break;
    }
    if (PIOkvxgpEZcF < b && b <= xakDplvh)
        cout << "ABC";
    else {
        if (PIOkvxgpEZcF < xakDplvh && xakDplvh <= b)
            cout << "ACB";
        else {
            if (b < PIOkvxgpEZcF &&PIOkvxgpEZcF <= xakDplvh)
                cout << "BAC";
            else if (b < xakDplvh && xakDplvh <= PIOkvxgpEZcF)
                cout << "BCA";
            else if (xakDplvh < PIOkvxgpEZcF &&PIOkvxgpEZcF <= b)
                cout << "CAB";
            else if (xakDplvh < b && b <= PIOkvxgpEZcF)
                cout << "CBA";
        };
    }
    return 0;
}

