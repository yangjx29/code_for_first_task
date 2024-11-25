int main () {
    int k;
    const  int E8kdMVNeEXbP = (398 - 198);
    int S1jOWgUca;
    int UDKAOjl;
    int vZuayGKd7SU;
    int bxjkp1MyAC;
    int nlen2;
    int jinwei [E8kdMVNeEXbP +(802 - 801)] = {(257 - 257)};
    int e7XxjPCcr [E8kdMVNeEXbP +(621 - 620)];
    int KkQiI7l [E8kdMVNeEXbP];
    char R51wrnBRXMoN [E8kdMVNeEXbP +(749 - 748)], NkgjQ0OpaDz8 [E8kdMVNeEXbP +(634 - 633)];
    cin >> S1jOWgUca;
    {
        k = (576 - 575);
        while (S1jOWgUca >= k) {
            cin >> R51wrnBRXMoN >> NkgjQ0OpaDz8;
            bxjkp1MyAC = strlen (R51wrnBRXMoN);
            nlen2 = strlen (NkgjQ0OpaDz8);
            memset (e7XxjPCcr, (484 - 484), sizeof (e7XxjPCcr));
            memset (KkQiI7l, (438 - 438), sizeof (KkQiI7l));
            vZuayGKd7SU = (486 - 486);
            {
                UDKAOjl = bxjkp1MyAC - (908 - 907);
                while ((110 - 110) <= UDKAOjl) {
                    e7XxjPCcr[vZuayGKd7SU] = R51wrnBRXMoN[UDKAOjl] - '0';
                    vZuayGKd7SU = vZuayGKd7SU + (458 - 457);
                    UDKAOjl = UDKAOjl -(642 - 641);
                }
            }
            vZuayGKd7SU = (217 - 217);
            {
                UDKAOjl = nlen2 - (197 - 196);
                while (UDKAOjl >= (871 - 871)) {
                    KkQiI7l[vZuayGKd7SU] = NkgjQ0OpaDz8[UDKAOjl] - '0';
                    vZuayGKd7SU++;
                    UDKAOjl = UDKAOjl -(451 - 450);
                }
            }
            {
                UDKAOjl = (562 - 562);
                while (E8kdMVNeEXbP > UDKAOjl) {
                    e7XxjPCcr[UDKAOjl] -= KkQiI7l[UDKAOjl];
                    if (e7XxjPCcr[UDKAOjl] < (493 - 493)) {
                        e7XxjPCcr[UDKAOjl] += (789 - 779);
                        e7XxjPCcr[UDKAOjl +(715 - 714)]--;
                    }
                    UDKAOjl++;
                }
            }
            UDKAOjl = E8kdMVNeEXbP;
            for (; e7XxjPCcr[UDKAOjl] == (904 - 904);)
                UDKAOjl = UDKAOjl -1;
            for (; UDKAOjl >= 0; UDKAOjl = UDKAOjl -1)
                cout << e7XxjPCcr[UDKAOjl];
            cout << endl;
            k++;
        }
    }
    return 0;
}

