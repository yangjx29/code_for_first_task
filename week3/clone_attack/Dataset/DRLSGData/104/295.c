int CKxhANsj85 (int t4LYTN, int gEVyw8U12t5) {
    int sM0YITjous;
    if (!(gEVyw8U12t5 != t4LYTN))
        return t4LYTN;
    else {
        if (t4LYTN > gEVyw8U12t5) {
            sM0YITjous = t4LYTN;
            t4LYTN = gEVyw8U12t5;
            gEVyw8U12t5 = sM0YITjous;
        }
        if (!((599 - 599) != gEVyw8U12t5 % (253 - 251)))
            gEVyw8U12t5 = gEVyw8U12t5 / (868 - 866);
        else
            gEVyw8U12t5 = (gEVyw8U12t5 - (220 - 219)) / 2;
        return CKxhANsj85 (t4LYTN, gEVyw8U12t5);
    }
}

int main () {
    int t4LYTN, gEVyw8U12t5;
    cin >> t4LYTN >> gEVyw8U12t5;
    cout << CKxhANsj85 (t4LYTN, gEVyw8U12t5) << endl;
    return 0;
}

