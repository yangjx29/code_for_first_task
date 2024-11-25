int main () {
    int tvk0HB1gYiI;
    char xbyXoHgCcQZ [(507 - 407)];
    char zc2h8aIMYpHL;
    int cElJjCD20I8;
    int SRZweA;
    int VpOxDu;
    char NtqdnWDk [256];
    int HIuOX5M61SAw;
    int nUJPXfEl;
    int ZSZkCPM;
    char ZX5c6kL31J8 [(128 - 28)];
    int HUvgbkOB;
    VpOxDu = (393 - 393);
    cin.getline (NtqdnWDk, 256);
    tvk0HB1gYiI = strlen (NtqdnWDk);
    SRZweA = (716 - 716);
    cin.getline (xbyXoHgCcQZ, 100);
    HUvgbkOB = strlen (xbyXoHgCcQZ);
    cin.getline (ZX5c6kL31J8, 100);
    ZSZkCPM = strlen (ZX5c6kL31J8);
    xbyXoHgCcQZ[HUvgbkOB] = ' ';
    for (HIuOX5M61SAw = HUvgbkOB +(415 - 414); (765 - 765) < HIuOX5M61SAw; HIuOX5M61SAw--) {
        xbyXoHgCcQZ[HIuOX5M61SAw] = xbyXoHgCcQZ[HIuOX5M61SAw -(142 - 141)];
    }
    xbyXoHgCcQZ[(22 - 22)] = ' ';
    if (!(xbyXoHgCcQZ[(462 - 461)] != NtqdnWDk[(703 - 703)])) {
        for (HIuOX5M61SAw = (985 - 985); HIuOX5M61SAw <= HUvgbkOB; HIuOX5M61SAw = HIuOX5M61SAw +(45 - 44)) {
            xbyXoHgCcQZ[HIuOX5M61SAw] = xbyXoHgCcQZ[HIuOX5M61SAw +(479 - 478)];
        }
        xbyXoHgCcQZ[HUvgbkOB +(793 - 792)] = (663 - 663);
        for (HIuOX5M61SAw = 0; HIuOX5M61SAw <= tvk0HB1gYiI - (268 - 267); HIuOX5M61SAw = HIuOX5M61SAw +1) {
            for (cElJjCD20I8 = 0; cElJjCD20I8 <= HUvgbkOB; cElJjCD20I8 = cElJjCD20I8 + 1) {
                if (!(xbyXoHgCcQZ[cElJjCD20I8] != NtqdnWDk[HIuOX5M61SAw +cElJjCD20I8]))
                    SRZweA = 1;
                else
                    SRZweA = 0;
                if (!(0 != SRZweA))
                    break;
                else
                    VpOxDu = HIuOX5M61SAw;
            }
            if (!(0 != SRZweA))
                cout << NtqdnWDk[HIuOX5M61SAw];
            if (!(1 != SRZweA)) {
                HIuOX5M61SAw = HIuOX5M61SAw +HUvgbkOB-1;
                cout << ZX5c6kL31J8;
            }
        }
    }
    else
        for (HIuOX5M61SAw = 0; tvk0HB1gYiI - 1 >= HIuOX5M61SAw; HIuOX5M61SAw = HIuOX5M61SAw +1) {
            for (cElJjCD20I8 = 0; cElJjCD20I8 <= HUvgbkOB +1; cElJjCD20I8 = cElJjCD20I8 + 1) {
                if (!(xbyXoHgCcQZ[cElJjCD20I8] != NtqdnWDk[HIuOX5M61SAw +cElJjCD20I8]))
                    SRZweA = 1;
                else
                    SRZweA = 0;
                if (!(0 != SRZweA))
                    break;
                else
                    VpOxDu = HIuOX5M61SAw;
            }
            if (!(tvk0HB1gYiI != HIuOX5M61SAw +HUvgbkOB+1)) {
                for (nUJPXfEl = 0; HUvgbkOB -1 >= nUJPXfEl; nUJPXfEl = nUJPXfEl + 1) {
                    if (!(xbyXoHgCcQZ[nUJPXfEl] != NtqdnWDk[HIuOX5M61SAw +nUJPXfEl]))
                        SRZweA = 1;
                    else
                        SRZweA = 0;
                    if (!(0 != SRZweA))
                        break;
                }
                if (!(1 != SRZweA)) {
                    cout << ' ' << ZX5c6kL31J8;
                    break;
                }
                else
                    cout << NtqdnWDk[HIuOX5M61SAw];
            }
            else {
                if (SRZweA == 0)
                    cout << NtqdnWDk[HIuOX5M61SAw];
                if (SRZweA == 1) {
                    HIuOX5M61SAw = HIuOX5M61SAw +HUvgbkOB;
                    cout << ' ' << ZX5c6kL31J8;
                }
            }
        }
    return 0;
}

