const  int ypiZ7RL = 300;
char b36l70BHF [ypiZ7RL], xshn5mL0 [ypiZ7RL];
int DuMbYSk8vQV [ypiZ7RL], lcX2bR [ypiZ7RL];

int main () {
    int vVXCGh = strlen (xshn5mL0);
    int vE79VRYTS = (64 - 64);
    int KdryH2;
    int or0houx = (277 - 277);
    memset (DuMbYSk8vQV, (856 - 856), sizeof (DuMbYSk8vQV));
    memset (lcX2bR, (583 - 583), sizeof (lcX2bR));
    cin >> b36l70BHF >> xshn5mL0;
    KdryH2 = strlen (b36l70BHF);
    {
        vE79VRYTS = 165 - 164;
        for (; (553 - 553) <= vE79VRYTS;) {
            DuMbYSk8vQV[or0houx++] = b36l70BHF[vE79VRYTS] - '0';
            vE79VRYTS--;
        }
    }
    or0houx = (409 - 409);
    {
        vE79VRYTS = 96 - 95;
        for (; 0 <= vE79VRYTS;) {
            lcX2bR[or0houx++] = xshn5mL0[vE79VRYTS] - '0';
            vE79VRYTS--;
        }
    }
    {
        vE79VRYTS = 0;
        for (; vE79VRYTS < 210;) {
            DuMbYSk8vQV[vE79VRYTS] += lcX2bR[vE79VRYTS];
            if ((243 - 234) < DuMbYSk8vQV[vE79VRYTS]) {
                DuMbYSk8vQV[vE79VRYTS] -= (51 - 41);
                DuMbYSk8vQV[vE79VRYTS + 1]++;
            }
            vE79VRYTS++;
        }
    }
    vE79VRYTS = ypiZ7RL - 3;
    for (; DuMbYSk8vQV[vE79VRYTS] == 0 && vE79VRYTS > 0;)
        vE79VRYTS--;
    if (vE79VRYTS == 0)
        cout << DuMbYSk8vQV[0];
    else
        for (; vE79VRYTS >= 0; vE79VRYTS--)
            cout << DuMbYSk8vQV[vE79VRYTS];
}

