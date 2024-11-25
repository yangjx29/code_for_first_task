int main () {
    int vcQLUOMf;
    int PN2AE7mbyL3J;
    int QhCVB6xtLJ8g;
    int IJkaZYhsWS2 [100];
    int vdAPzfSs2jHR [100];
    int IbBKWjTla;
    int v8yv4qEh [100];
    int QXBbIi;
    int hXHWGPwcaOjU;
    vcQLUOMf = (110 - 110);
    PN2AE7mbyL3J = 0;
    scanf ("%d", &QhCVB6xtLJ8g);
    {
        IbBKWjTla = 0;
        for (; IbBKWjTla < QhCVB6xtLJ8g;) {
            scanf ("%d %d", &IJkaZYhsWS2[IbBKWjTla], &vdAPzfSs2jHR[IbBKWjTla]);
            IbBKWjTla = IbBKWjTla +1;
        }
    }
    {
        IbBKWjTla = 0;
        for (; IbBKWjTla < QhCVB6xtLJ8g;) {
            if (90 <= IJkaZYhsWS2[IbBKWjTla] && IJkaZYhsWS2[IbBKWjTla] <= 140 && (210 - 150) <= vdAPzfSs2jHR[IbBKWjTla] && vdAPzfSs2jHR[IbBKWjTla] <= 90) {
                vcQLUOMf = vcQLUOMf + 1;
                v8yv4qEh[PN2AE7mbyL3J] = vcQLUOMf;
                PN2AE7mbyL3J = PN2AE7mbyL3J +1;
            }
            else {
                vcQLUOMf = 0;
                v8yv4qEh[PN2AE7mbyL3J] = vcQLUOMf;
                PN2AE7mbyL3J = PN2AE7mbyL3J +1;
            }
            IbBKWjTla = IbBKWjTla +1;
        }
    }
    {
        QXBbIi = 1;
        while (QXBbIi < PN2AE7mbyL3J) {
            {
                IbBKWjTla = 0;
                while (IbBKWjTla < PN2AE7mbyL3J -QXBbIi) {
                    if (v8yv4qEh[IbBKWjTla] > v8yv4qEh[IbBKWjTla +1]) {
                        hXHWGPwcaOjU = v8yv4qEh[IbBKWjTla +1];
                        v8yv4qEh[IbBKWjTla +1] = v8yv4qEh[IbBKWjTla];
                        v8yv4qEh[IbBKWjTla] = hXHWGPwcaOjU;
                    }
                    IbBKWjTla = IbBKWjTla +1;
                }
            }
            QXBbIi = QXBbIi +1;
        }
    }
    printf ("%d", v8yv4qEh[PN2AE7mbyL3J -1]);
    return 0;
}

