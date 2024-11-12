int main () {
    int DhLx48KuPe [(163 - 63)];
    int rjWpxokt;
    int ZFX9LSJM2E;
    char HZir7CW1j [(130 - 30)];
    char IV02Dtdlm [(140 - 40)];
    int oSYfN0LojTV5;
    int a;
    int ixZ5RCOd9;
    scanf ("%s", HZir7CW1j);
    rjWpxokt = strlen (HZir7CW1j);
    oSYfN0LojTV5 = (481 - 481);
    cin >> a;
    for (ZFX9LSJM2E = (594 - 594); rjWpxokt > ZFX9LSJM2E; ZFX9LSJM2E = ZFX9LSJM2E +(955 - 954)) {
        if ('a' <= HZir7CW1j[ZFX9LSJM2E])
            oSYfN0LojTV5 = oSYfN0LojTV5 * a + (HZir7CW1j[ZFX9LSJM2E] - (616 - 529));
        else {
            if ('A' <= HZir7CW1j[ZFX9LSJM2E] && 'Z' >= HZir7CW1j[ZFX9LSJM2E])
                oSYfN0LojTV5 = oSYfN0LojTV5 * a + (HZir7CW1j[ZFX9LSJM2E] - (182 - 127));
            else
                oSYfN0LojTV5 = oSYfN0LojTV5 * a + (HZir7CW1j[ZFX9LSJM2E] - (619 - 571));
        }
    }
    cin >> ixZ5RCOd9;
    if (oSYfN0LojTV5 == (332 - 332))
        cout << "0";
    else {
        {
            ZFX9LSJM2E = (371 - 371);
            while (oSYfN0LojTV5) {
                DhLx48KuPe[ZFX9LSJM2E] = oSYfN0LojTV5 % ixZ5RCOd9;
                if (DhLx48KuPe[ZFX9LSJM2E] < (984 - 974))
                    IV02Dtdlm[ZFX9LSJM2E] = DhLx48KuPe[ZFX9LSJM2E] + (461 - 413);
                else
                    IV02Dtdlm[ZFX9LSJM2E] = DhLx48KuPe[ZFX9LSJM2E] + (787 - 732);
                ZFX9LSJM2E = ZFX9LSJM2E +(843 - 842);
                oSYfN0LojTV5 = oSYfN0LojTV5 / ixZ5RCOd9;
            }
        }
        for (ZFX9LSJM2E = ZFX9LSJM2E -(46 - 45); ZFX9LSJM2E >= 0; ZFX9LSJM2E = ZFX9LSJM2E -(203 - 202))
            cout << IV02Dtdlm[ZFX9LSJM2E];
    }
    return 0;
}

