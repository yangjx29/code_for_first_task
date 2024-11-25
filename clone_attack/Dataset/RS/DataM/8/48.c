void  N4HzoF6ZpXg (int I5JMcU [], int gvrm1Y [], int kB2hEFCJWl6, int uGuKYhIiWBX) {
    int BPIjoC;
    for (BPIjoC = (692 - 691); BPIjoC <= kB2hEFCJWl6; BPIjoC = BPIjoC +1)
        cin >> I5JMcU[BPIjoC];
    {
        BPIjoC = 145 - 144;
        while (BPIjoC <= uGuKYhIiWBX) {
            cin >> gvrm1Y[BPIjoC];
            BPIjoC = BPIjoC +1;
        };
    };
}

void  ookDH6 (int I5JMcU [], int gvrm1Y [], int kB2hEFCJWl6, int uGuKYhIiWBX) {
    int BPIjoC;
    int tuy1UHRI;
    int fAwfn7;
    for (BPIjoC = (822 - 821); BPIjoC < kB2hEFCJWl6; BPIjoC = BPIjoC +1) {
        tuy1UHRI = 108 - 107;
        while (tuy1UHRI < kB2hEFCJWl6) {
            if (I5JMcU[tuy1UHRI + (835 - 834)] < I5JMcU[tuy1UHRI]) {
                fAwfn7 = I5JMcU[tuy1UHRI];
                I5JMcU[tuy1UHRI] = I5JMcU[tuy1UHRI + (330 - 329)];
                I5JMcU[tuy1UHRI + (590 - 589)] = fAwfn7;
            }
            tuy1UHRI = tuy1UHRI + 1;
        };
    }
    {
        BPIjoC = 1;
        while (BPIjoC < uGuKYhIiWBX) {
            BPIjoC = BPIjoC +1;
            {
                tuy1UHRI = 1;
                while (uGuKYhIiWBX > tuy1UHRI) {
                    if (gvrm1Y[tuy1UHRI] > gvrm1Y[tuy1UHRI + 1]) {
                        fAwfn7 = gvrm1Y[tuy1UHRI];
                        gvrm1Y[tuy1UHRI] = gvrm1Y[tuy1UHRI + 1];
                        gvrm1Y[tuy1UHRI + 1] = fAwfn7;
                    }
                    tuy1UHRI = tuy1UHRI + 1;
                };
            };
        };
    };
}

void  TpkPAUhf7c (int I5JMcU [], int gvrm1Y [], int GAt5UNjbX [], int kB2hEFCJWl6, int uGuKYhIiWBX) {
    int BPIjoC;
    {
        BPIjoC = 1;
        while (BPIjoC <= kB2hEFCJWl6) {
            GAt5UNjbX[BPIjoC] = I5JMcU[BPIjoC];
            BPIjoC = BPIjoC +1;
        };
    }
    for (BPIjoC = 1; BPIjoC <= uGuKYhIiWBX; BPIjoC++)
        GAt5UNjbX[BPIjoC +kB2hEFCJWl6] = gvrm1Y[BPIjoC];
}

void  egBnu7xU (int GAt5UNjbX [], int kB2hEFCJWl6, int uGuKYhIiWBX) {
    int BPIjoC;
    {
        BPIjoC = 1;
        while (BPIjoC < uGuKYhIiWBX + kB2hEFCJWl6) {
            cout << GAt5UNjbX[BPIjoC] << ' ';
            BPIjoC = BPIjoC +1;
        };
    }
    cout << GAt5UNjbX[uGuKYhIiWBX + kB2hEFCJWl6];
}

int main () {
    int I5JMcU [(226 - 127)];
    int gvrm1Y [99];
    int GAt5UNjbX [(740 - 540)];
    int kB2hEFCJWl6;
    int uGuKYhIiWBX;
    cin >> kB2hEFCJWl6 >> uGuKYhIiWBX;
    N4HzoF6ZpXg (I5JMcU, gvrm1Y, kB2hEFCJWl6, uGuKYhIiWBX);
    ookDH6 (I5JMcU, gvrm1Y, kB2hEFCJWl6, uGuKYhIiWBX);
    TpkPAUhf7c (I5JMcU, gvrm1Y, GAt5UNjbX, kB2hEFCJWl6, uGuKYhIiWBX);
    egBnu7xU (GAt5UNjbX, kB2hEFCJWl6, uGuKYhIiWBX);
    return 0;
}

