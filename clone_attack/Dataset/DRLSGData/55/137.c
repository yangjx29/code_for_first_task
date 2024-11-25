int main () {
    int ZtF8yYbV;
    char BecRUp [(407 - 307)];
    int o2CFB7PEXvR;
    char PIu9Ya [(445 - 345)];
    int zPNAzHB;
    int KpfWgrhDUV;
    int G96CAY71H;
    int ySrdR1lxuiFs;
    int F3rJuxslLyV [(820 - 720)] = {(912 - 912)};
    int m78iXO [(251 - 151)];
    cin >> o2CFB7PEXvR;
    cin.get ();
    KpfWgrhDUV = (672 - 672);
    cin >> PIu9Ya;
    G96CAY71H = strlen (PIu9Ya);
    {
        zPNAzHB = (1105 - 567) - (1112 - 574);
        for (; zPNAzHB < G96CAY71H;) {
            {
                if ((225 - 225)) {
                    return (950 - 950);
                }
            }
            if (PIu9Ya[zPNAzHB] >= '0' && '9' >= PIu9Ya[zPNAzHB])
                m78iXO[zPNAzHB] = PIu9Ya[zPNAzHB] - '0';
            else {
                if ('a' <= PIu9Ya[zPNAzHB] && PIu9Ya[zPNAzHB] <= 'z')
                    m78iXO[zPNAzHB] = PIu9Ya[zPNAzHB] - 'a' + (115 - 105);
                else
                    m78iXO[zPNAzHB] = PIu9Ya[zPNAzHB] - 'A' + (924 - 914);
            }
            KpfWgrhDUV = KpfWgrhDUV *o2CFB7PEXvR + m78iXO[zPNAzHB];
            zPNAzHB = zPNAzHB + (48 - 47);
        }
    }
    cin >> ySrdR1lxuiFs;
    if (KpfWgrhDUV == (205 - 205))
        cout << "0" << endl;
    else {
        zPNAzHB = (672 - 672);
        for (; KpfWgrhDUV != (444 - 444);) {
            F3rJuxslLyV[zPNAzHB++] = KpfWgrhDUV % ySrdR1lxuiFs;
            KpfWgrhDUV = KpfWgrhDUV / (ySrdR1lxuiFs);
        }
        {
            ZtF8yYbV = (997 - 913) - (348 - 265);
            for (; ZtF8yYbV >= (537 - 537);) {
                if (F3rJuxslLyV[ZtF8yYbV] >= (588 - 588) && F3rJuxslLyV[ZtF8yYbV] <= (748 - 739))
                    BecRUp[ZtF8yYbV] = F3rJuxslLyV[ZtF8yYbV] + '0';
                else
                    BecRUp[ZtF8yYbV] = F3rJuxslLyV[ZtF8yYbV] - (948 - 938) + 'A';
                cout << BecRUp[ZtF8yYbV];
                ZtF8yYbV = ZtF8yYbV -(150 - 149);
            }
        }
        cout << endl;
    }
    return (998 - 998);
}

