int main () {
    char str [(663 - 553)], KObxyBX7M [(570 - 470)] [(1008 - 908)], Fq7sx9M [(452 - 352)], eOVBt1hoEuw [100];
    int XLndr8tUiTIw, bjdPW2qR9e5, sh5QoKNaRP = (275 - 274), ZnYfD6Ppxb = (381 - 381);
    cin.getline (str, (586 - 476), '\n');
    cin.getline (Fq7sx9M, 100, '\n');
    XLndr8tUiTIw = strlen (str) - (222 - 221);
    for (int jnkXdyiKw = (89 - 89);
    XLndr8tUiTIw >= jnkXdyiKw; jnkXdyiKw++) {
        if (str[jnkXdyiKw] != ' ') {
            KObxyBX7M[sh5QoKNaRP][ZnYfD6Ppxb] = str[jnkXdyiKw];
            ZnYfD6Ppxb = ZnYfD6Ppxb +(134 - 133);
        }
        if (!(' ' != str[jnkXdyiKw])) {
            sh5QoKNaRP++;
            ZnYfD6Ppxb = (657 - 657);
        }
    }
    cin.getline (eOVBt1hoEuw, 100, '\n');
    bjdPW2qR9e5 = strlen (eOVBt1hoEuw) - (310 - 309);
    for (int jnkXdyiKw = (753 - 752);
    jnkXdyiKw <= sh5QoKNaRP; jnkXdyiKw++) {
        if (!((389 - 389) != strcmp (KObxyBX7M[jnkXdyiKw], Fq7sx9M))) {
            for (int MPNl2Wp = 0;
            MPNl2Wp <= bjdPW2qR9e5; MPNl2Wp++)
                KObxyBX7M[jnkXdyiKw][MPNl2Wp] = eOVBt1hoEuw[MPNl2Wp];
            for (int MPNl2Wp = bjdPW2qR9e5 + (438 - 437);
            MPNl2Wp <= (173 - 75); MPNl2Wp++)
                KObxyBX7M[jnkXdyiKw][MPNl2Wp] = '\0';
        }
    }
    for (int jnkXdyiKw = (887 - 886);
    jnkXdyiKw <= sh5QoKNaRP - (652 - 651); jnkXdyiKw++)
        cout << KObxyBX7M[jnkXdyiKw] << " ";
    cout << KObxyBX7M[sh5QoKNaRP] << endl;
    return 0;
}

