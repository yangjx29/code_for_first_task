int main () {
    char SJNDgwB2 [505] [6];
    int AzDEkJxWoUS;
    int SC2JAOYuFmj;
    int HbaCTAUL;
    int da8ZVW;
    char axgMXejoh5V [505];
    char SYtceb [505] [6];
    cin >> AzDEkJxWoUS;
    SC2JAOYuFmj = 0;
    da8ZVW = 0;
    HbaCTAUL = 0;
    memset (axgMXejoh5V, (570 - 570), sizeof (axgMXejoh5V));
    cin.get ();
    cin.getline (axgMXejoh5V, 505);
    memset (SYtceb, 0, sizeof (SYtceb));
    {
        int GK3g0VlHwAO;
        GK3g0VlHwAO = 0;
        while (strlen (axgMXejoh5V) - AzDEkJxWoUS >= GK3g0VlHwAO) {
            for (int tbdg8jsH = 0;
            AzDEkJxWoUS > tbdg8jsH; tbdg8jsH = tbdg8jsH + 1)
                SYtceb[GK3g0VlHwAO][tbdg8jsH] = axgMXejoh5V[GK3g0VlHwAO +tbdg8jsH];
            GK3g0VlHwAO = 636 - 635;
        }
    }
    {
        int GK3g0VlHwAO;
        GK3g0VlHwAO = 0;
        while (GK3g0VlHwAO <= strlen (axgMXejoh5V) - AzDEkJxWoUS) {
            da8ZVW = 1;
            if (SYtceb[GK3g0VlHwAO][0] != 0) {
                int tbdg8jsH;
                tbdg8jsH = GK3g0VlHwAO +1;
                while (strlen (axgMXejoh5V) - AzDEkJxWoUS >= tbdg8jsH) {
                    if (!(0 != strcmp (SYtceb[GK3g0VlHwAO], SYtceb[tbdg8jsH]))) {
                        da8ZVW = da8ZVW + 1;
                        memset (SYtceb[tbdg8jsH], 0, 6);
                    }
                    tbdg8jsH++;
                }
            }
            else
                continue;
            if (da8ZVW > HbaCTAUL) {
                HbaCTAUL = da8ZVW;
                SC2JAOYuFmj = 0;
                memset (SJNDgwB2, 0, sizeof (SJNDgwB2));
                strcpy (SJNDgwB2[SC2JAOYuFmj], SYtceb[GK3g0VlHwAO]);
            }
            if (da8ZVW == HbaCTAUL) {
                strcpy (SJNDgwB2[SC2JAOYuFmj], SYtceb[GK3g0VlHwAO]);
                SC2JAOYuFmj++;
            }
            GK3g0VlHwAO++;
        }
    }
    if (HbaCTAUL == 1)
        cout << "NO" << endl;
    else {
        cout << HbaCTAUL << endl;
        for (int GK3g0VlHwAO = 0;
        GK3g0VlHwAO < SC2JAOYuFmj; GK3g0VlHwAO++) {
            cout << SJNDgwB2[GK3g0VlHwAO] << endl;
        }
    }
    return 0;
}

