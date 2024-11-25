int main () {
    int dKtA8dfk05, HvqQHOfG [10], AfFMjK2 [10], PSqy8ncjW7a [10], CLc90OVxTf2s = 0, yD6HgMIKm7hj [100], dnbWGQFz8rmS [100], JXK90naok;
    double  W54wfDF9G [100], qCvwcn6kEt;
    cin >> dKtA8dfk05;
    {
        int F2RPc4Os = 0;
        for (; dKtA8dfk05 > F2RPc4Os;) {
            cin >> HvqQHOfG[F2RPc4Os] >> AfFMjK2[F2RPc4Os] >> PSqy8ncjW7a[F2RPc4Os];
            F2RPc4Os++;
        }
    }
    for (int F2RPc4Os = 0;
    F2RPc4Os < dKtA8dfk05; F2RPc4Os++) {
        int ijuaEOMJ = F2RPc4Os +1;
        for (; ijuaEOMJ < dKtA8dfk05;) {
            W54wfDF9G[CLc90OVxTf2s] = sqrt ((HvqQHOfG[F2RPc4Os] * 1.0 - HvqQHOfG[ijuaEOMJ]) * (HvqQHOfG[F2RPc4Os] - HvqQHOfG[ijuaEOMJ]) + (AfFMjK2[F2RPc4Os] - AfFMjK2[ijuaEOMJ]) * (AfFMjK2[F2RPc4Os] - AfFMjK2[ijuaEOMJ]) + (PSqy8ncjW7a[F2RPc4Os] - PSqy8ncjW7a[ijuaEOMJ]) * (PSqy8ncjW7a[F2RPc4Os] - PSqy8ncjW7a[ijuaEOMJ]));
            yD6HgMIKm7hj[CLc90OVxTf2s] = F2RPc4Os;
            dnbWGQFz8rmS[CLc90OVxTf2s] = ijuaEOMJ;
            CLc90OVxTf2s++;
            ijuaEOMJ++;
        }
    }
    for (int F2RPc4Os = 0;
    dKtA8dfk05 * (dKtA8dfk05 - 1) / 2 > F2RPc4Os; F2RPc4Os++) {
        CLc90OVxTf2s = 0;
        for (; dKtA8dfk05 * (dKtA8dfk05 - 1) / 2 - 1 > CLc90OVxTf2s;) {
            if (W54wfDF9G[CLc90OVxTf2s] < W54wfDF9G[CLc90OVxTf2s +1]) {
                qCvwcn6kEt = W54wfDF9G[CLc90OVxTf2s];
                W54wfDF9G[CLc90OVxTf2s] = W54wfDF9G[CLc90OVxTf2s +1];
                W54wfDF9G[CLc90OVxTf2s +1] = qCvwcn6kEt;
                JXK90naok = yD6HgMIKm7hj[CLc90OVxTf2s];
                yD6HgMIKm7hj[CLc90OVxTf2s] = yD6HgMIKm7hj[CLc90OVxTf2s +1];
                yD6HgMIKm7hj[CLc90OVxTf2s +1] = JXK90naok;
                JXK90naok = dnbWGQFz8rmS[CLc90OVxTf2s];
                dnbWGQFz8rmS[CLc90OVxTf2s] = dnbWGQFz8rmS[CLc90OVxTf2s +1];
                dnbWGQFz8rmS[CLc90OVxTf2s +1] = JXK90naok;
            }
            {
                if (0) {
                    return 0;
                }
            }
            CLc90OVxTf2s++;
        }
    }
    {
        CLc90OVxTf2s = 0;
        for (; CLc90OVxTf2s <= dKtA8dfk05 * (dKtA8dfk05 - 1) / 2 - 1;) {
            cout << '(' << HvqQHOfG[yD6HgMIKm7hj[CLc90OVxTf2s]] << ',' << AfFMjK2[yD6HgMIKm7hj[CLc90OVxTf2s]] << ',' << PSqy8ncjW7a[yD6HgMIKm7hj[CLc90OVxTf2s]] << ")-(" << HvqQHOfG[dnbWGQFz8rmS[CLc90OVxTf2s]] << ',' << AfFMjK2[dnbWGQFz8rmS[CLc90OVxTf2s]] << ',' << PSqy8ncjW7a[dnbWGQFz8rmS[CLc90OVxTf2s]] << ')' << '=' << setprecision (2) << fixed << W54wfDF9G[CLc90OVxTf2s] << endl;
            CLc90OVxTf2s++;
        }
    }
    return 0;
}

