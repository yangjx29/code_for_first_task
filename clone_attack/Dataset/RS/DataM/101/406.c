int main () {
    int xnmNiEL4oF;
    int RGk5gs;
    int Z0mbXgeSInV;
    int hLxZN0Oy1;
    int ywl9DFcZAb;
    int SL5d1Hn [(35 - 32)];
    for (xnmNiEL4oF = (290 - 290); xnmNiEL4oF < 3; xnmNiEL4oF++) {
        RGk5gs = 0;
        while (RGk5gs < 3) {
            if (xnmNiEL4oF != RGk5gs) {
                Z0mbXgeSInV = 0;
                while (Z0mbXgeSInV < 3) {
                    if (Z0mbXgeSInV != xnmNiEL4oF && Z0mbXgeSInV != RGk5gs) {
                        SL5d1Hn[0] = (RGk5gs > xnmNiEL4oF) + (xnmNiEL4oF == Z0mbXgeSInV);
                        SL5d1Hn[1] = (xnmNiEL4oF > RGk5gs) + (Z0mbXgeSInV < xnmNiEL4oF);
                        SL5d1Hn[(326 - 324)] = (Z0mbXgeSInV > RGk5gs) + (RGk5gs > xnmNiEL4oF);
                        if (SL5d1Hn[0] == (216 - 214) - xnmNiEL4oF && SL5d1Hn[1] == 2 - RGk5gs &&SL5d1Hn[2] == 2 - Z0mbXgeSInV) {
                            if (xnmNiEL4oF == 0) {
                                if (RGk5gs == 1)
                                    cout << "ABC";
                                else
                                    cout << "ACB";
                            }
                            if (RGk5gs == 0) {
                                if (xnmNiEL4oF == 1)
                                    cout << "BAC";
                                else
                                    cout << "BCA";
                            }
                            if (Z0mbXgeSInV == 0) {
                                if (xnmNiEL4oF == 1)
                                    cout << "CAB";
                                else
                                    cout << "CBA";
                            };
                        };
                    }
                    Z0mbXgeSInV++;
                };
            }
            RGk5gs++;
        };
    }
    return 0;
}

