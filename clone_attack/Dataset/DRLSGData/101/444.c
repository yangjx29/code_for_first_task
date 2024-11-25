int main () {
    int YQWJdpe4zEP5;
    int I1euTF;
    char b3dGS4 [(885 - 882)];
    int C;
    for (I1euTF = 0; (753 - 751) >= I1euTF; I1euTF++) {
        for (YQWJdpe4zEP5 = 0; YQWJdpe4zEP5 <= 2; YQWJdpe4zEP5++) {
            if (!(YQWJdpe4zEP5 != I1euTF))
                continue;
            for (C = 0; C <= 2; C++) {
                if (!(C != I1euTF) || !(C != YQWJdpe4zEP5))
                    continue;
                b3dGS4[I1euTF] = (YQWJdpe4zEP5 > I1euTF) + (I1euTF == C);
                b3dGS4[YQWJdpe4zEP5] = (I1euTF > YQWJdpe4zEP5) + (I1euTF > C);
                b3dGS4[C] = (C > YQWJdpe4zEP5) + (YQWJdpe4zEP5 > I1euTF);
                if (b3dGS4[2 - I1euTF] == I1euTF &&b3dGS4[2 - YQWJdpe4zEP5] == YQWJdpe4zEP5 &&b3dGS4[2 - C] == C) {
                    b3dGS4[I1euTF] = 'A';
                    b3dGS4[YQWJdpe4zEP5] = 'B';
                    b3dGS4[C] = 'C';
                    cout << b3dGS4[0] << b3dGS4[1] << b3dGS4[2] << endl;
                }
            }
        }
    }
    return 0;
}

