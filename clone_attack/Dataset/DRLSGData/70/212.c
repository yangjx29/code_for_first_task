int main () {
    double  HadsiA9jB [100], ZVqP0YDO [100], kBcFH3 [5000], uAMsplR = 0;
    int rkW0o1u;
    cin >> rkW0o1u;
    {
        int heTJLBXa = 1;
        while (rkW0o1u >= heTJLBXa) {
            cin >> HadsiA9jB[heTJLBXa] >> ZVqP0YDO[heTJLBXa];
            heTJLBXa++;
        }
    }
    {
        int heTJLBXa = 1;
        while (rkW0o1u - 1 >= heTJLBXa) {
            {
                int zuHECLzwNXFk = heTJLBXa + 1;
                while (zuHECLzwNXFk <= rkW0o1u) {
                    kBcFH3[(2 * rkW0o1u - heTJLBXa) * (heTJLBXa - 1) / 2 + zuHECLzwNXFk - heTJLBXa] = (HadsiA9jB[heTJLBXa] - HadsiA9jB[zuHECLzwNXFk]) * (HadsiA9jB[heTJLBXa] - HadsiA9jB[zuHECLzwNXFk]) + (ZVqP0YDO[heTJLBXa] - ZVqP0YDO[zuHECLzwNXFk]) * (ZVqP0YDO[heTJLBXa] - ZVqP0YDO[zuHECLzwNXFk]);
                    if (kBcFH3[(2 * rkW0o1u - heTJLBXa) * (heTJLBXa - 1) / 2 + zuHECLzwNXFk - heTJLBXa] > uAMsplR)
                        uAMsplR = kBcFH3[(2 * rkW0o1u - heTJLBXa) * (heTJLBXa - 1) / 2 + zuHECLzwNXFk - heTJLBXa];
                    zuHECLzwNXFk++;
                }
            }
            heTJLBXa++;
        }
    }
    uAMsplR = sqrt (uAMsplR);
    cout << fixed;
    cout << setprecision (4) << uAMsplR << endl;
    return 0;
}

