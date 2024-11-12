int main () {
    int soBK5S;
    int KkUrwPiu;
    int k3UbRn;
    int wsZhMdkgw5PH [1002];
    int KlgVFyQS6w2 [1002];
    soBK5S = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char q4Pyf6 [1002], LDbX2ZsaNQ4;
    cin.getline (q4Pyf6, 1001);
    for (KkUrwPiu = 0; KkUrwPiu <= 1000; KkUrwPiu++)
        wsZhMdkgw5PH[KkUrwPiu] = (914 - 913);
    KlgVFyQS6w2[0] = 0;
    for (KkUrwPiu = 0; !('\0' == q4Pyf6[KkUrwPiu]); KkUrwPiu++) {
        if ((!(q4Pyf6[KkUrwPiu +1] != q4Pyf6[KkUrwPiu])) || (fabs (q4Pyf6[KkUrwPiu] - q4Pyf6[KkUrwPiu +1]) == 32)) {
            wsZhMdkgw5PH[soBK5S]++;
            KlgVFyQS6w2[soBK5S] = KkUrwPiu;
        }
        else {
            KlgVFyQS6w2[soBK5S] = KkUrwPiu;
            soBK5S++;
        };
    }
    for (KkUrwPiu = 0; KkUrwPiu < soBK5S; KkUrwPiu++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((q4Pyf6[KlgVFyQS6w2[KkUrwPiu]] >= 'a') && (q4Pyf6[KlgVFyQS6w2[KkUrwPiu]] <= 'z')) {
            LDbX2ZsaNQ4 = q4Pyf6[KlgVFyQS6w2[KkUrwPiu]] - 32;
            cout << "(" << LDbX2ZsaNQ4 << "," << wsZhMdkgw5PH[KkUrwPiu] << ")";
        }
        else {
            LDbX2ZsaNQ4 = q4Pyf6[KlgVFyQS6w2[KkUrwPiu]];
            cout << "(" << LDbX2ZsaNQ4 << "," << wsZhMdkgw5PH[KkUrwPiu] << ")";
        };
    }
    return 0;
}

