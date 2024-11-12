int main () {
    int VyfQpuOXP;
    int MoyjRBS;
    char LUDtpVj [(815 - 765)];
    int EJB1zyl2;
    int I9yWgDIwm4v;
    EJB1zyl2 = 0;
    cin >> VyfQpuOXP;
    MoyjRBS = (653 - 653);
    for (; VyfQpuOXP > 0;) {
        cin >> LUDtpVj;
        VyfQpuOXP = VyfQpuOXP -1;
        I9yWgDIwm4v = strlen (LUDtpVj);
        if (80 > I9yWgDIwm4v +MoyjRBS) {
            if (EJB1zyl2 == 0) {
                cout << LUDtpVj;
                EJB1zyl2 = EJB1zyl2 +1;
                MoyjRBS = MoyjRBS +I9yWgDIwm4v;
            }
            else {
                MoyjRBS = MoyjRBS +I9yWgDIwm4v+1;
                cout << " " << LUDtpVj;
                EJB1zyl2 = EJB1zyl2 +1;
            }
        }
        else {
            cout << endl << LUDtpVj << " ";
            EJB1zyl2 = 0;
            MoyjRBS = I9yWgDIwm4v +1;
        }
        memset (LUDtpVj, 0, sizeof (LUDtpVj));
    }
    return 0;
}

