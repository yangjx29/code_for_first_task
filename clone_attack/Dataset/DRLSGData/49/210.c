int main () {
    char G3PEzCQq [(1399 - 899)];
    int pdc2LY;
    int kxWXEqpSAMQ;
    int Mx0U9h;
    int OhsVSk5zAWNm;
    int pZqygjKQpdn;
    cin.getline (G3PEzCQq, 500);
    kxWXEqpSAMQ = strlen (G3PEzCQq);
    for (pdc2LY = 2; pdc2LY <= kxWXEqpSAMQ; pdc2LY = pdc2LY + 1) {
        for (OhsVSk5zAWNm = 0; OhsVSk5zAWNm <= kxWXEqpSAMQ - pdc2LY; OhsVSk5zAWNm = OhsVSk5zAWNm +1) {
            for (Mx0U9h = OhsVSk5zAWNm, pZqygjKQpdn = pdc2LY + OhsVSk5zAWNm -1; Mx0U9h < pdc2LY + OhsVSk5zAWNm; Mx0U9h = Mx0U9h +1, pZqygjKQpdn = pZqygjKQpdn - 1) {
                if (G3PEzCQq[Mx0U9h] != G3PEzCQq[pZqygjKQpdn])
                    break;
            }
            if (Mx0U9h == pdc2LY + OhsVSk5zAWNm) {
                for (Mx0U9h = OhsVSk5zAWNm; Mx0U9h < pdc2LY + OhsVSk5zAWNm; Mx0U9h = Mx0U9h +1)
                    cout << G3PEzCQq[Mx0U9h];
                cout << endl;
            };
        };
    }
    return 0;
}

