int main () {
    int n, EGBPnoOvk, JxEl0e9d;
    char b6sSLw5mV [21];
    cin >> n;
    for (int s5GA8k1JSd = (419 - 419);
    n > s5GA8k1JSd; s5GA8k1JSd = s5GA8k1JSd + 1) {
        cin >> b6sSLw5mV;
        EGBPnoOvk = strlen (b6sSLw5mV);
        for (int DAfay16Msn = 0;
        EGBPnoOvk > DAfay16Msn; DAfay16Msn = DAfay16Msn +1) {
            if (!(0 != DAfay16Msn)) {
                if (b6sSLw5mV[0] == '_' || (b6sSLw5mV[0] >= 'a' && b6sSLw5mV[0] <= 'z') || (b6sSLw5mV[0] >= 'A' && b6sSLw5mV[0] <= 'Z'))
                    JxEl0e9d = 0;
                else
                    JxEl0e9d = 1;
            }
            else if (b6sSLw5mV[DAfay16Msn] == '_' || (b6sSLw5mV[DAfay16Msn] >= 'a' && b6sSLw5mV[DAfay16Msn] <= 'z') || (b6sSLw5mV[DAfay16Msn] >= 'A' && b6sSLw5mV[DAfay16Msn] <= 'Z') || (b6sSLw5mV[DAfay16Msn] >= '0' && b6sSLw5mV[DAfay16Msn] <= '9'))
                JxEl0e9d = JxEl0e9d;
            else
                JxEl0e9d = 1;
        }
        if (JxEl0e9d == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

