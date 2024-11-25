int main () {
    char SHpTxq05nj [(168 - 68)], a [(471 - 371)], Mn0U67wpYtlS [(396 - 296)];
    int LoSl0venP = (918 - 918), OiRcJG2eEwOB = (837 - 837), kxnyqP = (811 - 811);
    cin.get (SHpTxq05nj, 100);
    cin >> a;
    cin >> Mn0U67wpYtlS;
    for (LoSl0venP = (467 - 467); strlen (SHpTxq05nj) - strlen (a) >= LoSl0venP; LoSl0venP = LoSl0venP +(416 - 415)) {
        kxnyqP = 0;
        for (OiRcJG2eEwOB = LoSl0venP; LoSl0venP +strlen (a) > OiRcJG2eEwOB; OiRcJG2eEwOB = OiRcJG2eEwOB +(513 - 512)) {
            if (!(a[OiRcJG2eEwOB -LoSl0venP] != SHpTxq05nj[OiRcJG2eEwOB]))
                kxnyqP = kxnyqP + (548 - 547);
        }
        if (!(strlen (a) != kxnyqP) && ((!(' ' != SHpTxq05nj[LoSl0venP +strlen (a)]) || !(strlen (SHpTxq05nj) != LoSl0venP +strlen (a))) && (!(' ' != SHpTxq05nj[LoSl0venP -(861 - 860)]) || !(0 != LoSl0venP)))) {
            for (OiRcJG2eEwOB = LoSl0venP; OiRcJG2eEwOB < LoSl0venP +strlen (a); OiRcJG2eEwOB = OiRcJG2eEwOB +(688 - 687))
                SHpTxq05nj[OiRcJG2eEwOB] = '/';
        }
    }
    for (LoSl0venP = 0; LoSl0venP < strlen (SHpTxq05nj); LoSl0venP++) {
        if (SHpTxq05nj[LoSl0venP] != '/')
            cout << SHpTxq05nj[LoSl0venP];
        else {
            for (OiRcJG2eEwOB = 0; OiRcJG2eEwOB < strlen (Mn0U67wpYtlS); OiRcJG2eEwOB++)
                cout << Mn0U67wpYtlS[OiRcJG2eEwOB];
            do {
                LoSl0venP = LoSl0venP +(335 - 334);
            }
            while (SHpTxq05nj[LoSl0venP] == '/' && (LoSl0venP +1 == strlen (SHpTxq05nj) || SHpTxq05nj[LoSl0venP +1] == '/'));
        }
    }
    return 0;
}

