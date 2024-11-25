int main (int argc, char *argv []) {
    int m, dWVQPTwK [(816 - 716)], FgIyjsw, j, SxowpHyBmK, BeqLHF [100] = {(591 - 591)}, O2DClyi3GUs4 [100] = {(960 - 960)};
    double  HXjEhlfNi [100] = {0};
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
    scanf ("%d", &m);
    for (FgIyjsw = 0; m > FgIyjsw; FgIyjsw++) {
        scanf ("%d", &dWVQPTwK[FgIyjsw]);
        if (dWVQPTwK[FgIyjsw] == (445 - 444)) {
            HXjEhlfNi[FgIyjsw] = 2.000;
        }
        else if (dWVQPTwK[FgIyjsw] == (72 - 70)) {
            HXjEhlfNi[FgIyjsw] = (155.5 - 152.0);
        }
        else {
            HXjEhlfNi[FgIyjsw] = 3.500;
            O2DClyi3GUs4[0] = 2, O2DClyi3GUs4[1] = 3;
            BeqLHF[0] = 1, BeqLHF[1] = 2;
            for (SxowpHyBmK = 2; SxowpHyBmK < dWVQPTwK[FgIyjsw]; SxowpHyBmK = SxowpHyBmK +1) {
                BeqLHF[SxowpHyBmK] = BeqLHF[SxowpHyBmK -1] + BeqLHF[SxowpHyBmK -2];
                O2DClyi3GUs4[SxowpHyBmK] = O2DClyi3GUs4[SxowpHyBmK -1] + O2DClyi3GUs4[SxowpHyBmK -2];
                HXjEhlfNi[FgIyjsw] = HXjEhlfNi[FgIyjsw] + (O2DClyi3GUs4[SxowpHyBmK] * 1.000 / BeqLHF[SxowpHyBmK] * 1.000);
            };
        }
        printf ("%.3lf\n", HXjEhlfNi[FgIyjsw]);
    }
    return 0;
}

